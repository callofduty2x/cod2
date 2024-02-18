#include "../qcommon/qcommon.h"

void SV_CalcPings( void )
{
	int i, j;
	client_t *cl;
	int total, count;
	int delta;

	for ( i = 0 ; i < sv_maxclients->current.integer ; i++ )
	{
		cl = &svs.clients[i];

		if ( cl->state != CS_ACTIVE )
		{
			cl->ping = -1;
			continue;
		}

		if ( !cl->gentity )
		{
			cl->ping = -1;
			continue;
		}

		if ( cl->netchan.remoteAddress.type == NA_BOT )
		{
			cl->ping = 0;
			cl->lastPacketTime = svs.time;
			continue;
		}

		total = 0;
		count = 0;

		for ( j = 0 ; j < PACKET_BACKUP ; j++ )
		{
			if ( cl->frames[j].messageAcked == 0xFFFFFFFF )
				continue;

			delta = cl->frames[j].messageAcked - cl->frames[j].messageSent;
			count++;
			total += delta;
		}

		if ( !count )
			cl->ping = 999;
		else
		{
			cl->ping = total / count;

			if ( cl->ping > 999 )
				cl->ping = 999;
		}
	}
}

char *SV_ExpandNewlines( char *in )
{
	static	char string[1024];
	int l;

	l = 0;

	while ( *in && l < sizeof(string) - 3 )
	{
		if ( *in == '\n' )
		{
			string[l++] = '\\';
			string[l++] = 'n';
		}
		else
		{
			string[l++] = *in;
		}
		in++;
	}

	string[l] = 0;

	return string;
}

/*
================
SVC_Info
Responds with a short info message that should be enough to determine
if a user is interested in a server to do a full status
================
*/
extern dvar_t *sv_privateClients;
extern dvar_t *sv_hostname;
extern dvar_t *sv_mapname;
extern dvar_t *sv_pure;
extern dvar_t *sv_minPing;
extern dvar_t *sv_maxPing;
extern dvar_t *sv_allowAnonymous;
extern dvar_t *sv_disableClientConsole;
extern dvar_t *sv_voice;
void SVC_Info( netadr_t from )
{
	int i, count;
	char infostring[MAX_INFO_STRING];
	char infosend[MAX_INFO_STRING];
	const char *gamedir;
	const char *password;
	int friendlyfire;
	int killcam;
	int serverModded;
	const char *referencedIwdNames;
	char *iwd;

	// Prevent using getinfo as an amplifier
	if ( SVC_RateLimitAddress( from, 10, 1000 ) )
	{
		Com_DPrintf( "SVC_Info: rate limit from %s exceeded, dropping request\n", NET_AdrToString( from ) );
		return;
	}

	// Allow getinfo to be DoSed relatively easily, but prevent
	// excess outbound bandwidth usage when being flooded inbound
	if ( SVC_RateLimit( &outboundLeakyBucket, 10, 100 ) )
	{
		Com_DPrintf( "SVC_Info: rate limit exceeded, dropping request\n" );
		return;
	}

	// don't count privateclients
	count = 0;

	for ( i = sv_privateClients->current.integer ; i < sv_maxclients->current.integer ; i++ )
	{
		if ( svs.clients[i].state >= CS_CONNECTED )
		{
			count++;
		}
	}

	infostring[0] = 0;

	// echo back the parameter to status. so servers can use it as a challenge
	// to prevent timed spoofed reply packets that add ghost servers
	Info_SetValueForKey( infostring, "challenge", Cmd_Argv( 1 ) );

	Info_SetValueForKey( infostring, "protocol", va( "%i", PROTOCOL_VERSION ) );
	Info_SetValueForKey( infostring, "hostname", sv_hostname->current.string );
	Info_SetValueForKey( infostring, "mapname", sv_mapname->current.string );
	Info_SetValueForKey( infostring, "clients", va( "%i", count ) );
	Info_SetValueForKey( infostring, "sv_maxclients", va( "%i", sv_maxclients->current.integer - sv_privateClients->current.integer ) );
	Info_SetValueForKey( infostring, "gametype", Dvar_GetString( "g_gametype" ) );
	Info_SetValueForKey( infostring, "pure", va( "%i", sv_pure->current.boolean ) );

	if ( sv_minPing->current.integer )
	{
		Info_SetValueForKey( infostring, "minPing", va( "%i", sv_minPing->current.integer ) );
	}

	if ( sv_maxPing->current.integer )
	{
		Info_SetValueForKey( infostring, "maxPing", va( "%i", sv_maxPing->current.integer ) );
	}

	gamedir = Dvar_GetString( "fs_game" );

	if ( *gamedir )
	{
		Info_SetValueForKey( infostring, "game", gamedir );
	}

	Info_SetValueForKey( infostring, "sv_allowAnonymous", va( "%i", sv_allowAnonymous->current.boolean ) );

	if ( sv_disableClientConsole->current.boolean )
	{
		Info_SetValueForKey( infostring, "con_disabled", va("%i", sv_disableClientConsole->current.boolean) );
	}

	password = Dvar_GetString("g_password");

	if ( password && *password )
		Info_SetValueForKey(infostring, "pswrd", "1");

	friendlyfire = Dvar_GetInt("scr_friendlyfire");

	if ( friendlyfire )
		Info_SetValueForKey(infostring, "ff", va("%i", friendlyfire));

	killcam = Dvar_GetInt("scr_killcam");

	if ( killcam )
		Info_SetValueForKey(infostring, "kc", va("%i", killcam));

	Info_SetValueForKey(infostring, "hw", va("%i", 1));
	serverModded = 0;

	if ( !sv_pure->current.boolean || gamedir && *gamedir )
	{
		serverModded = 1;
	}
	else
	{
		referencedIwdNames = Dvar_GetString("sv_referencedIwdNames");

		if ( *referencedIwdNames )
		{
			SV_Cmd_TokenizeString(referencedIwdNames);
			count = SV_Cmd_Argc();

			for ( i = 0; i < count; ++i )
			{
				iwd = (char *)SV_Cmd_Argv(i);

				if ( !FS_iwIwd(iwd, "main") )
				{
					serverModded = 1;
					break;
				}
			}
		}
	}

	Info_SetValueForKey(infostring, "mod", va("%i", serverModded));
	Info_SetValueForKey(infostring, "voice", va("%i", sv_voice->current.boolean));

	I_strncpyz(infosend, "infoResponse\n", MAX_INFO_STRING);
	I_strncat(infosend, MAX_INFO_STRING, infostring);

	NET_OutOfBandPrint(NS_SERVER, from, infosend);
}

/*
======================
SV_AddServerCommand
The given command will be transmitted to the client, and is guaranteed to
not have future snapshot_t executed before it is executed
======================
*/
void SV_CullIgnorableServerCommands(client_t *client)
{
	int v1;
	int i;

	v1 = client->reliableSent + 1;

	for(i = client->reliableSent + 1 ; i <= client->reliableSequence; ++i)
	{
		if ( client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)].cmdType )
		{
			if ( (v1 & (MAX_RELIABLE_COMMANDS - 1)) != (i & (MAX_RELIABLE_COMMANDS - 1)) )
			{
				memcpy(&client->reliableCommands[v1 & (MAX_RELIABLE_COMMANDS - 1)], &client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)], sizeof(reliableCommands_t));
			}
			++v1;
		}
	}
	client->reliableSequence = v1 - 1;
}

void SV_SendServerCommand( client_t *cl, int type, const char *fmt, ... )
{
	va_list argptr;
	char message[MAX_MSGLEN];
	client_t    *client;
	int j;

	va_start( argptr,fmt );
	Q_vsnprintf( message, sizeof( message ), fmt, argptr );
	va_end( argptr );

	if ( cl != NULL )
	{
		SV_AddServerCommand( cl, type, message );
		return;
	}

	// hack to echo broadcast prints to console
	if ( com_dedicated->current.integer && !strncmp( message, "print", 5 ) )
	{
		Com_Printf( "broadcast: %s\n", SV_ExpandNewlines( message ) );
	}

	// send the data to all relevent clients
	for ( j = 0, client = svs.clients; j < sv_maxclients->current.integer ; j++, client++ )
	{
		if ( client->state < CS_PRIMED )
		{
			continue;
		}
		// done.
		SV_AddServerCommand( client, type, message );
	}
}

/*
==================
SV_CheckPaused
==================
*/
extern dvar_t *cl_paused;
extern dvar_t *sv_paused;
qboolean SV_CheckPaused( void )
{
	int count;
	client_t    *cl;
	int i;

	if ( !cl_paused->current.integer )
	{
		return qfalse;
	}

	// only pause if there is just a single client connected
	count = 0;
	for ( i = 0,cl = svs.clients ; i < sv_maxclients->current.integer ; i++,cl++ )
	{
		if ( cl->state >= CS_CONNECTED && cl->netchan.remoteAddress.type != NA_BOT )
		{
			count++;
		}
	}

	if ( count > 1 )
	{
		// don't pause
		if ( sv_paused->current.integer )
		{
			Dvar_SetInt( sv_paused, 0 );
		}
		return qfalse;
	}

	if ( !sv_paused->current.integer )
	{
		Dvar_SetInt( sv_paused, 1 );
	}

	return qtrue;
}

/*
=================
SVC_GameCompleteStatus
NERVE - SMF - Send serverinfo cvars, etc to master servers when
game complete. Useful for tracking global player stats.
=================
*/
void SVC_GameCompleteStatus( netadr_t from )
{
	char player[1024];
	char status[MAX_MSGLEN];
	int i;
	client_t    *cl;
	int statusLength;
	int playerLength;
	char infostring[MAX_INFO_STRING];

	strcpy( infostring, Dvar_InfoString(DVAR_SERVERINFO | DVAR_SCRIPTINFO) );

	// echo back the parameter to status. so master servers can use it as a challenge
	// to prevent timed spoofed reply packets that add ghost servers
	Info_SetValueForKey( infostring, "challenge", Cmd_Argv( 1 ) );

	// add "demo" to the sv_keywords if restricted
	if ( Dvar_GetBool( "fs_restrict" ) )
	{
		char keywords[MAX_INFO_STRING];

		Com_sprintf( keywords, sizeof( keywords ), "demo %s",
		             Info_ValueForKey( infostring, "sv_keywords" ) );
		Info_SetValueForKey( infostring, "sv_keywords", keywords );
	}

	status[0] = 0;
	statusLength = 0;

	for ( i = 0 ; i < sv_maxclients->current.integer ; i++ )
	{
		cl = &svs.clients[i];
		if ( cl->state >= CS_CONNECTED )
		{
			Com_sprintf( player, sizeof( player ), "%i %i \"%s\"\n",
			             G_GetClientScore(cl - svs.clients), cl->ping, cl->name );
			playerLength = strlen( player );
			if ( statusLength + playerLength >= sizeof( status ) )
			{
				break;      // can't hold any more
			}
			strcpy( status + statusLength, player );
			statusLength += playerLength;
		}
	}

	NET_OutOfBandPrint( NS_SERVER, from, va("gameCompleteStatus\n%s\n%s", infostring, status) );
}

/*
================
SVC_Status
Responds with all the info that qplug or qspy can see about the server
and all connected players.  Used for getting detailed information after
the simple info query.
================
*/
extern int gameInitialized;
void SVC_Status( netadr_t from )
{
	int i;
	char infostring[8192];
	char msg[8192];
	char keywords[MAX_INFO_STRING];
	char status[MAX_MSGLEN];
	client_t    *cl;
	int statusLength;
	int playerLength;
	char player[MAX_INFO_STRING];
	const char *password;
	int serverModded;
	const char *gamedir;
	char *iwd;
	const char *referencedIwdNames;
	int count;

	// Prevent using getstatus as an amplifier
	if ( SVC_RateLimitAddress( from, 10, 1000 ) )
	{
		Com_DPrintf( "SVC_Status: rate limit from %s exceeded, dropping request\n", NET_AdrToString( from ) );
		return;
	}

	// Allow getstatus to be DoSed relatively easily, but prevent
	// excess outbound bandwidth usage when being flooded inbound
	if ( SVC_RateLimit( &outboundLeakyBucket, 10, 100 ) )
	{
		Com_DPrintf( "SVC_Status: rate limit exceeded, dropping request\n" );
		return;

	strcpy( infostring, Dvar_InfoString(DVAR_SERVERINFO | DVAR_SCRIPTINFO) );

	// echo back the parameter to status. so master servers can use it as a challenge
	// to prevent timed spoofed reply packets that add ghost servers
	Info_SetValueForKey( infostring, "challenge", Cmd_Argv( 1 ) );

	// add "demo" to the sv_keywords if restricted
	if ( Dvar_GetBool( "fs_restrict" ) )
	{
		Com_sprintf(keywords, sizeof( keywords ), "demo %s", Info_ValueForKey(infostring, "sv_keywords"));
		Info_SetValueForKey(infostring, "sv_keywords", keywords);
	}

	status[0] = 0;
	statusLength = 0;

	for ( i = 0 ; i < sv_maxclients->current.integer ; i++ )
	{
		cl = &svs.clients[i];
		if ( cl->state >= CS_CONNECTED )
		{
			if ( gameInitialized )
				Com_sprintf( player, sizeof( player ), "%i %i \"%s\"\n", G_GetClientScore(cl - svs.clients), cl->ping, cl->name );
			else
				Com_sprintf( player, sizeof( player ), "%i %i \"%s\"\n", 0, cl->ping, cl->name );

			playerLength = strlen( player );
			if ( statusLength + playerLength >= sizeof( status ) )
			{
				break;      // can't hold any more
			}
			strcpy( status + statusLength, player );
			statusLength += playerLength;
		}
	}

	password = Dvar_GetString("g_password");

	if ( password && *password )
		Info_SetValueForKey(infostring, "pswrd", "1");
	else
		Info_SetValueForKey(infostring, "pswrd", "0");

	gamedir = Dvar_GetString("fs_game");
	serverModded = 0;

	if ( !sv_pure->current.boolean || gamedir && *gamedir )
	{
		serverModded = 1;
	}
	else
	{
		referencedIwdNames = Dvar_GetString("sv_referencedIwdNames");

		if ( *referencedIwdNames )
		{
			SV_Cmd_TokenizeString(referencedIwdNames);
			count = SV_Cmd_Argc();

			for ( i = 0; i < count; ++i )
			{
				iwd = (char *)SV_Cmd_Argv(i);

				if ( !FS_iwIwd(iwd, "main") )
				{
					serverModded = 1;
					break;
				}
			}
		}
	}

	Info_SetValueForKey(infostring, "mod", va("%i", serverModded));

	Com_sprintf(msg, sizeof(infostring), "statusResponse\n%s\n%s", infostring, status);
	NET_OutOfBandPrint(NS_SERVER, from, msg);
}

void SV_FreeClientScriptId(client_s *cl)
{
	assert(cl->clscriptid);
	Scr_FreeValue(cl->clscriptid);
	cl->clscriptid = 0;
}

void SV_VoicePacket(netadr_t from, msg_t *msg)
{
	int qport;
	int i;
	client_t *client;

	qport = MSG_ReadShort(msg);

	for ( i = 0, client = svs.clients; i < sv_maxclients->current.integer ; i++, client++ )
	{
		if ( client->state && NET_CompareBaseAdr(from, client->netchan.remoteAddress) && client->netchan.qport == qport )
		{
			if ( client->netchan.remoteAddress.port != from.port )
			{
				Com_Printf("SV_ReadPackets: fixing up a translated port\n");
				client->netchan.remoteAddress.port = from.port;
			}

			if ( client->state != CS_ZOMBIE )
			{
				client->lastPacketTime = svs.time;

				if ( client->state > CS_PRIMED )
					SV_UserVoice(client, msg);
				else
					SV_PreGameUserVoice(client, msg);
			}
		}
	}
}

extern dvar_t *sv_timeout;
extern dvar_t *sv_zombietime;
void SV_CheckTimeouts( void )
{
	int i;
	client_t *cl;
	int droppoint;
	int zombiepoint;

	droppoint = svs.time - 1000 * sv_timeout->current.integer;
	zombiepoint = svs.time - 1000 * sv_zombietime->current.integer;

	for ( i = 0,cl = svs.clients ; i < sv_maxclients->current.integer ; i++,cl++ )
	{
		// message times may be wrong across a changelevel
		if ( cl->lastPacketTime > svs.time )
		{
			cl->lastPacketTime = svs.time;
		}

		if ( cl->state == CS_ZOMBIE && cl->lastPacketTime < zombiepoint )
		{
			// using the client id cause the cl->name is empty at this point
			Com_DPrintf( "Going from CS_ZOMBIE to CS_FREE for client %d\n", i );
			cl->state = CS_FREE;    // can now be reused

			continue;
		}
		if ( cl->state >= CS_CONNECTED && cl->lastPacketTime < droppoint )
		{
			// wait several frames so a debugger session doesn't
			// cause a timeout
			if ( ++cl->timeoutCount > 5 )
			{
				SV_DropClient( cl, "EXE_TIMEDOUT" );
				cl->state = CS_FREE;    // don't bother with zombie state
			}
		}
		else
		{
			cl->timeoutCount = 0;
		}
	}
}

#if COMPILE_BOTS == 1
int bot_buttons[MAX_CLIENTS] = {0};
int bot_weapon[MAX_CLIENTS] = {0};
char bot_forwardmove[MAX_CLIENTS] = {0};
char bot_rightmove[MAX_CLIENTS] = {0};
void SV_BotUserMove(client_t *client)
{
	int num;
	usercmd_t ucmd = {0};

	if (client->gentity == NULL)
		return;

	num = client - svs.clients;
	ucmd.serverTime = svs.time;

	playerState_t *ps = SV_GameClientNum(num);
	gentity_t *ent = SV_GentityNum(num);

	if (bot_weapon[num])
		ucmd.weapon = (byte)(bot_weapon[num] & 0xFF);
	else
		ucmd.weapon = (byte)(ps->weapon & 0xFF);

	if (ent->client == NULL)
		return;

	if (ent->client->sess.archiveTime == 0)
	{
		ucmd.buttons = bot_buttons[num];

		ucmd.forwardmove = bot_forwardmove[num];
		ucmd.rightmove = bot_rightmove[num];

		VectorCopy(ent->client->sess.cmd.angles, ucmd.angles);
	}

	client->deltaMessage = client->netchan.outgoingSequence - 1;
	SV_ClientThink(client, &ucmd);
}
#else
void SV_BotUserMove(client_t *cl)
{
	usercmd_s ucmd;

	if ( cl->gentity )
	{
		memset(&ucmd, 0, sizeof(ucmd));

		ucmd.weapon = SV_GameClientNum(cl - svs.clients)->weapon;
		ucmd.serverTime = svs.time;

		if ( !G_GetClientArchiveTime(cl - svs.clients) )
		{
			if ( G_random() < 0.5 )
				ucmd.buttons |= 1u;

			if ( G_random() < 0.5 )
				ucmd.buttons |= 0x28u;

			if ( G_random() >= 0.33000001 )
			{
				if ( G_random() < 0.5 )
					ucmd.forwardmove = -127;
			}
			else
			{
				ucmd.forwardmove = 127;
			}
			if ( G_random() >= 0.33000001 )
			{
				if ( G_random() < 0.5 )
					ucmd.rightmove = -127;
			}
			else
			{
				ucmd.rightmove = 127;
			}

			if ( G_random() < 0.33000001 )
				ucmd.angles[0] = (int)(G_crandom() * 360.0);

			if ( G_random() < 0.33000001 )
				ucmd.angles[1] = (int)(G_crandom() * 360.0);

			if ( G_random() < 0.33000001 )
				ucmd.angles[2] = (int)(G_crandom() * 360.0);
		}

		cl->deltaMessage = cl->netchan.outgoingSequence - 1;
		SV_ClientThink(cl, &ucmd);
	}
}
#endif

void __cdecl SV_UpdateBots(void)
{	UNIMPLEMENTED();
}

void SV_RunFrame()
{
	SV_ResetSkeletonCache();
	G_RunFrame(svs.time);
}

extern dvar_t *sv_fps;
void SV_Frame(int msec)
{
	char mapname[MAX_QPATH];
	int frameMsec;

	if ( !com_sv_running->current.boolean )
	{
		return;
	}

	// allow pause if only the local client is connected
	if ( SV_CheckPaused() )
	{
		return;
	}

	frameMsec = 1000 / sv_fps->current.integer;
	sv.timeResidual += msec;

	if ( sv.timeResidual < frameMsec )
	{
		return;
	}

	// if time is about to hit the 32nd bit, kick all clients
	// and clear sv.time, rather
	// than checking for negative time wraparound everywhere.
	// 2giga-milliseconds = 23 days, so it won't be too often
	if ( svs.time > 0x70000000 )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown("EXE_SERVERRESTARTTIMEWRAP");
		// TTimo
		// show_bug.cgi?id=388
		// there won't be a map_restart if you have shut down the server
		// since it doesn't restart a non-running server
		// instead, re-run the current map
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	// this can happen considerably earlier when lots of clients play and the map doesn't change
	if ( svs.nextSnapshotEntities >= 0x7FFFFFFE - svs.numSnapshotEntities )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15numSnapshotEntities wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( svs.nextSnapshotClients >= 0x7FFFFFFE - svs.numSnapshotClients )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15numSnapshotClients wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( svs.nextCachedSnapshotEntities >= 0x7FFFBFFD )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15nextCachedSnapshotEntities wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( svs.nextCachedSnapshotClients >= 0x7FFFEFFD )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15nextCachedSnapshotClients wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( svs.nextArchivedSnapshotFrames >= 0x7FFFFB4D )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15nextArchivedSnapshotFrames wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( svs.nextArchivedSnapshotBuffer >= 0x7DFFFFFD )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15nextArchivedSnapshotBuffer wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( svs.nextCachedSnapshotFrames >= 0x7FFFFDFD )
	{
		Q_strncpyz( mapname, sv_mapname->current.string, MAX_QPATH );
		Com_Shutdown( "EXE_SERVERRESTARTMISC\x15svs.nextCachedSnapshotFrames wrapping" );
		Com_Restart( );
		// TTimo see above
		Cbuf_AddText( va( "map %s\n", mapname ) );
		return;
	}

	if ( (dvar_modifiedFlags & (DVAR_SERVERINFO | DVAR_SCRIPTINFO)) != 0 )
	{
		SV_SetConfigstring(0, Dvar_InfoString(DVAR_SERVERINFO | DVAR_SCRIPTINFO));
		dvar_modifiedFlags &= ~(DVAR_SERVERINFO | DVAR_SCRIPTINFO);
	}

	if ( (dvar_modifiedFlags & DVAR_SYSTEMINFO) != 0 )
	{
		SV_SetConfigstring(1u, Dvar_InfoString_Big(DVAR_SYSTEMINFO));
		dvar_modifiedFlags &= ~DVAR_SYSTEMINFO;
	}

	if ( (dvar_modifiedFlags & DVAR_DEVELOPER) != 0 )
	{
		SV_SetConfig(142, 96, DVAR_DEVELOPER);
		dvar_modifiedFlags &= ~DVAR_DEVELOPER;
	}

	SV_BotFrame();
	SV_CalcPings();

	while ( 1 )
	{
		sv.timeResidual -= frameMsec;
		svs.time += frameMsec;
		SV_RunFrame();
		Scr_SetLoading(0);

		if ( sv.timeResidual < frameMsec )
			break;

		SV_ArchiveSnapshot();
	}

	SV_CheckTimeouts();
	SV_SendClientMessages();
	SV_ArchiveSnapshot();
	SV_MasterHeartbeat("COD-2");
}

/*
=================
SV_ConnectionlessPacket
A connectionless packet has four leading 0xff
characters to distinguish it from a game channel.
Clients that are in the game can still send
connectionless packets.
=================
*/
extern dvar_t *sv_packet_info;
void SV_ConnectionlessPacket( netadr_t from, msg_t *msg )
{
	char    *s;
	const char    *c;
	char strBuf[MAX_STRING_CHARS];

	MSG_BeginReading(msg);
	MSG_ReadLong(msg);
	SV_Netchan_AddOOBProfilePacket(msg->cursize);
	s = MSG_ReadStringLine( msg, strBuf, sizeof(strBuf) );
	Cmd_TokenizeString( s );
	c = Cmd_Argv( 0 );

	if ( sv_packet_info->current.boolean )
	{
		Com_Printf("SV packet %s : %s\n", NET_AdrToString(from), c);
	}

	if ( !Q_stricmp( c,"getstatus" ) )
	{
		SVC_Status( from  );
	}
	else if ( !Q_stricmp( c,"getinfo" ) )
	{
		SVC_Info( from );
	}
	else if ( !Q_stricmp( c,"getchallenge" ) )
	{
		SV_GetChallenge( from );
	}
	else if ( !Q_stricmp( c,"connect" ) )
	{
		SV_DirectConnect( from );
	}
	else if ( !Q_stricmp( c,"ipAuthorize" ) )
	{
		SV_AuthorizeIpPacket( from );
	}
	else if ( !Q_stricmp( c, "rcon" ) )
	{
		SVC_RemoteCommand( from, msg );
	}
	else if ( !Q_stricmp( c, "v" ) )
	{
		SV_VoicePacket( from, msg );
	}
	else if ( !Q_stricmp( c,"disconnect" ) )
	{
		// if a client starts up a local server, we may see some spurious
		// server disconnect messages when their new server sees our final
		// sequenced messages to the old client
	}
	else
	{
		Com_DPrintf( "bad connectionless packet from %s:\n%s\n"
		             , NET_AdrToString( from ), s );
	}
}

/*
=================
SV_PacketEvent
=================
*/
void SV_PacketEvent( netadr_t from, msg_t *msg )
{
	int i;
	client_t    *cl;
	int qport;

	// check for connectionless packet (0xffffffff) first
	if ( msg->cursize >= 4 && *(int *)msg->data == -1 )
	{
		SV_ConnectionlessPacket( from, msg );
		return;
	}

	SV_ResetSkeletonCache();

	// read the qport out of the message so we can fix up
	// stupid address translating routers
	MSG_BeginReading( msg );
	MSG_ReadLong( msg );                // sequence number
	qport = (unsigned short)MSG_ReadShort(msg);

	// find which client the message is from
	for ( i = 0, cl = svs.clients ; i < sv_maxclients->current.integer ; i++,cl++ )
	{
		if ( cl->state == CS_FREE )
		{
			continue;
		}

		if ( !NET_CompareBaseAdr( from, cl->netchan.remoteAddress ) )
		{
			continue;
		}

		// it is possible to have multiple clients from a single IP
		// address, so they are differentiated by the qport variable
		if ( cl->netchan.qport != qport )
		{
			continue;
		}

		// the IP port can't be used to differentiate them, because
		// some address translating routers periodically change UDP
		// port assignments
		if ( cl->netchan.remoteAddress.port != from.port )
		{
			Com_Printf( "SV_PacketEvent: fixing up a translated port\n" );
			cl->netchan.remoteAddress.port = from.port;
		}

		// make sure it is a valid, in sequence packet
		if ( Netchan_Process(&cl->netchan, msg) )
		{
			cl->serverId = MSG_ReadByte(msg);
			cl->messageAcknowledge = MSG_ReadLong(msg);

			if ( cl->messageAcknowledge < 0 )
			{
				Com_Printf("Invalid reliableAcknowledge message from %s - reliableAcknowledge is %i\n", cl->name, cl->reliableAcknowledge);
				return;
			}

			cl->reliableAcknowledge = MSG_ReadLong(msg);

			// New: Fix for invalid reliableAcknowledge exploit, see https://github.com/callofduty4x/CoD4x_Server/pull/407
			if ( ( cl->reliableSequence - cl->reliableAcknowledge ) > ( MAX_RELIABLE_COMMANDS - 1 ) || cl->reliableAcknowledge < 0 || ( cl->reliableSequence - cl->reliableAcknowledge ) < 0 )
			{
				Com_Printf("Out of range reliableAcknowledge message from %s - cl->reliableSequence is %i, reliableAcknowledge is %i\n",
				           cl->name, cl->reliableSequence, cl->reliableAcknowledge);
				cl->reliableAcknowledge = cl->reliableSequence;
				return;
			}

			SV_Netchan_Decode(cl, &msg->data[msg->readcount], msg->cursize - msg->readcount);

			// zombie clients still need to do the Netchan_Process
			// to make sure they don't need to retransmit the final
			// reliable message, but they don't do any other processing
			if ( cl->state != CS_ZOMBIE )
			{
				cl->lastPacketTime = svs.time;
				SV_ExecuteClientMessage(cl, msg);
			}
		}
		return;
	}

	// if we received a sequenced packet from an address we don't recognize,
	// send an out of band disconnect packet to it
	NET_OutOfBandPrint( NS_SERVER, from, "disconnect" );
}

/*
======================
SV_AddServerCommand
The given command will be transmitted to the client, and is guaranteed to
not have future snapshot_t executed before it is executed
======================
*/
void SV_CullIgnorableServerCommands(client_t *client)
{
	int v1;
	int i;

	v1 = client->reliableSent + 1;

	for(i = client->reliableSent + 1 ; i <= client->reliableSequence; ++i)
	{
		if ( client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)].cmdType )
		{
			if ( (v1 & (MAX_RELIABLE_COMMANDS - 1)) != (i & (MAX_RELIABLE_COMMANDS - 1)) )
			{
				memcpy(&client->reliableCommands[v1 & (MAX_RELIABLE_COMMANDS - 1)], &client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)], sizeof(reliableCommands_t));
			}
			++v1;
		}
	}
	client->reliableSequence = v1 - 1;
}

int __cdecl SV_IsFirstTokenEqual(char const *,char const *)
{	UNIMPLEMENTED();
}

int SV_CanReplaceServerCommand(client_t *client, const char *command)
{
	int i;

	for( i = client->reliableSent + 1; i <= client->reliableSequence; ++i)
	{

		if ( client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)].cmdType == 0 )
			continue;

		if(client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)].command[0] != command[0])
			continue;

		if ( command[0] >= 120 && command[0] <= 122 )
			continue;

		if ( !strcmp(&command[1], &client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)].command[1]) )
			return i;


		switch ( command[0] )
		{
		case 100:
		case 118:
			if ( !I_IsEqualUnitWSpace( (char*)&command[2], &client->reliableCommands[i & (MAX_RELIABLE_COMMANDS - 1)].command[2]))
			{
				continue;
			}
		case 67:
		case 68:
		case 97:
		case 98:
		case 111:
		case 112:
		case 113:
		case 114:
		case 116:
			return i;

		default:
			continue;

		}
	}
	return -1;
}

