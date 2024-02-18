/*
==================
SV_RemoveOperatorCommands
==================
*/
void SV_RemoveOperatorCommands( void )
{
	// removing these won't let the server start again
}

static void SV_GameCompleteStatus_f(void)
{
	if ( com_sv_running->current.boolean )
		SV_MasterGameCompleteStatus();
}

/*
==================
SV_Heartbeat_f

Also called by SV_DropClient, SV_DirectConnect, and SV_SpawnServer
==================
*/
void SV_Heartbeat_f(void)
{
	svs.nextHeartbeatTime = 0x80000000;
}

void __cdecl SV_RemoveDedicatedCommands(void)
{	UNIMPLEMENTED();
}

const char *SV_GetMapBaseName(const char *mapname)
{
	return FS_GetMapBaseName(mapname);
}

void SV_AddDedicatedCommands()
{
	Cmd_AddCommand("say", SV_ConSay_f);
	Cmd_AddCommand("tell", SV_ConTell_f);
}

/*
==================
SV_AddOperatorCommands
==================
*/
void SV_AddOperatorCommands()
{
	static qboolean initialized;

	if ( initialized )
	{
		return;
	}

	initialized = qtrue;

	Cmd_AddCommand("heartbeat", SV_Heartbeat_f);
	Cmd_AddCommand("onlykick", SV_Drop_f);
	Cmd_AddCommand("banUser", SV_Ban_f);
	Cmd_AddCommand("banClient", SV_BanNum_f);
	Cmd_AddCommand("kick", SV_TempBan_f);
	Cmd_AddCommand("tempBanUser", SV_TempBan_f);
	Cmd_AddCommand("tempBanClient", SV_TempBanNum_f);
	Cmd_AddCommand("unbanUser", SV_Unban_f);
	Cmd_AddCommand("clientkick", SV_DropNum_f);
	Cmd_AddCommand("status", SV_Status_f);
	Cmd_AddCommand("serverinfo", SV_Serverinfo_f);
	Cmd_AddCommand("systeminfo", SV_Systeminfo_f);
	Cmd_AddCommand("dumpuser", SV_DumpUser_f);
	Cmd_AddCommand("map_restart", SV_MapRestart_f);
	Cmd_AddCommand("fast_restart", SV_FastRestart_f);
	Cmd_AddCommand("map", SV_Map_f);
	Cmd_SetAutoComplete("map", "maps/mp", "d3dbsp");
	Cmd_AddCommand("map_rotate", SV_MapRotate_f);
	Cmd_AddCommand("gameCompleteStatus", SV_GameCompleteStatus_f);
	Cmd_AddCommand("devmap", SV_Map_f);
	Cmd_SetAutoComplete("devmap", "maps/mp", "d3dbsp");
	Cmd_AddCommand("killserver", SV_KillServer_f);

	if ( com_dedicated->current.integer )
		SV_AddDedicatedCommands();

	Cmd_AddCommand("scriptUsage", SV_ScriptUsage_f);
	Cmd_AddCommand("stringUsage", SV_StringUsage_f);
}

extern dvar_t *sv_mapRotation;
static void SV_MapRotate_f()
{
	const char *token;

	Com_Printf("map_rotate...\n\n");
	Com_Printf("\"sv_mapRotation\" is:\"%s\"\n\n", sv_mapRotation->current.string);
	Com_Printf("\"sv_mapRotationCurrent\" is:\"%s\"\n\n", sv_mapRotationCurrent->current.string);

	if ( !sv_mapRotationCurrent->current.string[0] )
		Dvar_SetString(sv_mapRotationCurrent, sv_mapRotation->current.string);

	token = UI_GetMapRotationToken();

	if ( !token )
	{
		Dvar_SetString(sv_mapRotationCurrent, sv_mapRotation->current.string);
		token = UI_GetMapRotationToken();
	}

	while ( 1 )
	{
		if ( !token )
		{
			Com_Printf("No map specified in sv_mapRotation - forcing map_restart.\n");
			SV_FastRestart_f();
			return;
		}

		if ( strcasecmp(token, "gametype") )
			break;

		token = UI_GetMapRotationToken();

		if ( !token )
		{
			Com_Printf("No gametype specified after 'gametype' keyword in sv_mapRotation - forcing map_restart.\n");
			SV_FastRestart_f();
			return;
		}

		Com_Printf("Setting g_gametype: %s.\n", token);

		if ( com_sv_running->current.boolean )
		{
			if ( strcasecmp(sv_gametype->current.string, token) )
				G_SetSavePersist(0);
		}

		Dvar_SetString(sv_gametype, token);
retry:
		token = UI_GetMapRotationToken();
	}

	if ( strcasecmp(token, "map") )
	{
		Com_Printf("Unknown keyword '%s' in sv_mapRotation.\n", token);
		goto retry;
	}

	token = UI_GetMapRotationToken();

	if ( token )
	{
		Com_Printf("Setting map: %s.\n", token);
		Cbuf_ExecuteText(EXEC_NOW, va("map %s\n", token));
	}
	else
	{
		Com_Printf("No map specified after 'map' keyword in sv_mapRotation - forcing map_restart.\n");
		SV_FastRestart_f();
	}
}

static void SV_StringUsage_f(void)
{
	MT_DumpTree();
}

static void SV_ScriptUsage_f(void)
{
	Scr_DumpScriptThreads();
}

/*
==================
SV_ConTell_f
==================
*/
static void SV_ConTell_f( void )
{
	char    *p;
	char text[MAX_STRING_CHARS];
	client_t *cl;
	int num;

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		Com_Printf( "Server is not running.\n" );
		return;
	}

	if ( Cmd_Argc() < 3 )
	{
		return;
	}

	num = atoi(Cmd_Argv(1));

	if (num < 0 || num > sv_maxclients->current.integer)
		return;

	cl = &svs.clients[num];

	if (cl->state != CS_ACTIVE)
	{
		return;
	}

	strcpy( text, "console: " );
	p = Cmd_Args(2);

	if ( *p == '"' )
	{
		p++;
		p[strlen( p ) - 1] = 0;
	}

	I_strncat(text, sizeof(text), p);
	SV_SendServerCommand(cl, SV_CMD_CAN_IGNORE, "%c \"\x15%s\"", 104, text);
}

/*
==================
SV_ConSay_f
==================
*/
static void SV_ConSay_f( void )
{
	char    *p;
	char text[MAX_STRING_CHARS];

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		Com_Printf( "Server is not running.\n" );
		return;
	}

	if ( Cmd_Argc() < 2 )
	{
		return;
	}

	strcpy( text, "console: " );
	p = Cmd_Args(1);

	if ( *p == '"' )
	{
		p++;
		p[strlen( p ) - 1] = 0;
	}

	I_strncat(text, sizeof(text), p);
	SV_SendServerCommand(0, SV_CMD_CAN_IGNORE, "%c \"\x15%s\"", 104, text);
}

/*
================
SV_Status_f
================
*/
extern dvar_t *sv_mapname;
static void SV_Status_f( void )
{
	int i, j, l;
	client_t    *cl;
	const char      *s;
	int ping;

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		Com_Printf( "Server is not running.\n" );
		return;
	}

	Com_Printf( "map: %s\n", sv_mapname->current.string );

	Com_Printf( "num score ping guid   name            lastmsg address               qport rate\n" );
	Com_Printf( "--- ----- ---- ------ --------------- ------- --------------------- ----- -----\n" );
	for ( i = 0,cl = svs.clients ; i < sv_maxclients->current.integer ; i++,cl++ )
	{
		if ( !cl->state )
		{
			continue;
		}
		Com_Printf( "%3i ", i );
		Com_Printf( "%5i ", G_GetClientScore(cl - svs.clients) );

		if ( cl->state == CS_CONNECTED )
		{
			Com_Printf( "CNCT " );
		}
		else if ( cl->state == CS_ZOMBIE )
		{
			Com_Printf( "ZMBI " );
		}
		else
		{
			ping = cl->ping < 9999 ? cl->ping : 9999;
			Com_Printf( "%4i ", ping );
		}

		Com_Printf( "%6i ", cl->guid );
		Com_Printf( "%s^7", cl->name );
		l = 16 - I_DrawStrlen( cl->name );
		for ( j = 0 ; j < l ; j++ )
			Com_Printf( " " );

		Com_Printf( "%7i ", svs.time - cl->lastPacketTime );

		s = NET_AdrToString( cl->netchan.remoteAddress );
		Com_Printf( "%s", s );
		l = 22 - strlen( s );
		for ( j = 0 ; j < l ; j++ )
			Com_Printf( " " );

		Com_Printf( "%5i", cl->netchan.qport );

		Com_Printf( " %5i", cl->rate );

		Com_Printf( "\n" );
	}
	Com_Printf( "\n" );
}

static void SV_Unban_f(void)
{
	if ( SV_Cmd_Argc() == 2 )
	{
		SV_UnbanClient(SV_Cmd_Argv(1u));
	}
	else
	{
		Com_Printf("Usage: unban <client name>\n");
	}
}

/*
==================
SV_GetPlayerByNum

Returns the player with idnum from Cmd_Argv(1)
==================
*/
static client_t *SV_GetPlayerByNum( void )
{
	client_t	*cl;
	int			i;
	int			idnum;
	const char		*s;

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		return NULL;
	}

	if ( Cmd_Argc() < 2 )
	{
		Com_Printf("No player specified.\n" );
		return NULL;
	}

	s = Cmd_Argv(1);

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			Com_Printf("Bad slot number: %s\n", s);
			return NULL;
		}
	}
	idnum = atoi( s );
	if ( idnum < 0 || idnum >= sv_maxclients->current.integer )
	{
		Com_Printf("Bad client slot: %i\n", idnum );
		return NULL;
	}

	cl = &svs.clients[idnum];
	if ( !cl->state )
	{
		Com_Printf("Client %i is not active\n", idnum );
		return NULL;
	}
	return cl;
}

/*
==================
SV_GetPlayerByName

Returns the player with name from Cmd_Argv(1)
==================
*/
static client_t *SV_GetPlayerByName( void )
{
	client_t    *cl;
	int i;
	const char        *s;
	char cleanName[64];

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		return NULL;
	}

	if ( Cmd_Argc() < 2 )
	{
		Com_Printf( "No player specified.\n" );
		return NULL;
	}

	s = Cmd_Argv( 1 );

	// check for a name match
	for ( i = 0, cl = svs.clients ; i < sv_maxclients->current.integer ; i++,cl++ )
	{
		if ( !cl->state )
		{
			continue;
		}
		if ( !Q_stricmp( cl->name, s ) )
		{
			return cl;
		}

		Q_strncpyz( cleanName, cl->name, sizeof( cleanName ) );
		Q_CleanStr( cleanName );
		if ( !Q_stricmp( cleanName, s ) )
		{
			return cl;
		}
	}

	Com_Printf( "Player %s is not on the server\n", s );

	return NULL;
}

/*
===========
SV_DumpUser_f

Examine all a users info strings FIXME: move to game
===========
*/
static void SV_DumpUser_f( void )
{
	client_t    *cl;

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		Com_Printf( "Server is not running.\n" );
		return;
	}

	if ( Cmd_Argc() != 2 )
	{
		Com_Printf( "Usage: info <userid>\n" );
		return;
	}

	cl = SV_GetPlayerByName();
	if ( !cl )
	{
		return;
	}

	Com_Printf( "userinfo\n" );
	Com_Printf( "--------\n" );
	Info_Print( cl->userinfo );
}

/*
===========
SV_Systeminfo_f

Examine or change the serverinfo string
===========
*/
static void SV_Systeminfo_f(void)
{
	Com_Printf("System info settings:\n");
	Info_Print(Dvar_InfoString(DVAR_SYSTEMINFO));
}

/*
===========
SV_Serverinfo_f

Examine the serverinfo string
===========
*/
static void SV_Serverinfo_f(void)
{
	Com_Printf("Server info settings:\n");
	Info_Print(Dvar_InfoString(DVAR_SERVERINFO | DVAR_SCRIPTINFO));
}

static void SV_BanNum_f(void)
{
	client_t *cl;

	if ( !com_sv_running->current.boolean )
	{
		Com_Printf("Server is not running.\n");
		return;
	}

	if ( SV_Cmd_Argc() != 2 )
	{
		Com_Printf("Usage: banClient <client number>\n");
		return;
	}

	cl = SV_GetPlayerByNum();

	if ( cl )
		SV_BanClient(cl);
}

static void SV_Ban_f(void)
{
	client_t *cl;

	if ( !com_sv_running->current.boolean )
	{
		Com_Printf("Server is not running.\n");
		return;
	}

	if ( SV_Cmd_Argc() != 2 )
	{
		Com_Printf("Usage: banUser <player name>\n");
		return;
	}

	cl = SV_GetPlayerByName();

	if ( cl )
		SV_BanClient(cl);
}

int SV_KickClient_f(char *playerName, int maxPlayerNameLen)
{
	client_t *cl;

	if ( !com_sv_running->current.boolean )
	{
		Com_Printf("Server is not running.\n");
		return 0;
	}

	if ( SV_Cmd_Argc() != 2 )
	{
		Com_Printf("Usage: %s <client number>\n", SV_Cmd_Argv(0));
		return 0;
	}

	cl = SV_GetPlayerByNum();

	if ( cl )
		return SV_KickClient(cl, playerName, maxPlayerNameLen);

	return 0;
}

int SV_KickClient_f(char *playerName, int maxPlayerNameLen)
{
	client_t *cl;

	if ( !com_sv_running->current.boolean )
	{
		Com_Printf("Server is not running.\n");
		return 0;
	}

	if ( SV_Cmd_Argc() != 2 )
	{
		Com_Printf("Usage: %s <client number>\n", SV_Cmd_Argv(0));
		return 0;
	}

	cl = SV_GetPlayerByNum();

	if ( cl )
		return SV_KickClient(cl, playerName, maxPlayerNameLen);

	return 0;
}

static int SV_KickUser_f(char *playerName, int maxPlayerNameLen)
{
	int i;
	client_t *cl;

	if ( !com_sv_running->current.boolean )
	{
		Com_Printf("Server is not running.\n");
		return 0;
	}

	if ( SV_Cmd_Argc() != 2 )
	{
		Com_Printf("Usage: %s <player name>\n%s all = kick everyone\n", SV_Cmd_Argv(0), SV_Cmd_Argv(0));
		return 0;
	}

	cl = SV_GetPlayerByName();

	if ( cl )
	{
		return SV_KickClient(cl, playerName, maxPlayerNameLen);
	}

	if ( !I_stricmp(SV_Cmd_Argv(1), "all") )
	{
		for ( i = 0, cl = svs.clients ; i < sv_maxclients->current.integer ; i++, cl++ )
		{
			if ( cl->state )
				SV_KickClient(cl, 0, 0);
		}
	}

	return 0;
}

static void SV_TempBanNum_f(void)
{
	char name[64];
	int guid;

	guid = SV_KickClient_f(name, sizeof(name));

	if ( guid )
	{
		Com_Printf("%s (guid %i) was kicked for cheating\n", name, guid);
		SV_BanGuidBriefly(guid);
	}
}

static void SV_DropNum_f(void)
{
	SV_KickClient_f(0, 0);
}

static void SV_Drop_f(void)
{
	SV_KickUser_f(0, 0);
}

static void SV_TempBan_f(void)
{
	char name[64];
	int guid;

	guid = SV_KickUser_f(name, sizeof(name));

	if ( guid )
	{
		Com_Printf("%s (guid %i) was kicked for cheating\n", name, guid);
		SV_BanGuidBriefly(guid);
	}
}

static void SV_KillServer_f(void)
{
	Com_Shutdown("EXE_SERVERKILLED");
}

/*
================
SV_MapRestart_f

Completely restarts a level, but doesn't send a new gamestate to the clients.
This allows fair starts with variable load times.
================
*/
extern dvar_t *sv_gametype;
extern dvar_t *sv_serverid;
void SV_MapRestart(int fast_restart)
{
	const char *dropreason;
	int savepersist;
	client_t *cl;
	char mapname[MAX_QPATH];
	int i;

	// make sure server is running
	if ( !com_sv_running->current.boolean )
	{
		Com_Printf( "Server is not running.\n" );
		return;
	}

	SV_SetGametype();
	I_strncpyz(sv.gametype, sv_gametype->current.string, sizeof(sv.gametype));

	savepersist = G_GetSavePersist();

	// check for changes in variables that can't just be restarted
	if ( sv_maxclients->modified || strcasecmp(sv.gametype, sv_gametype->current.string) || !fast_restart )
	{
		G_SetSavePersist(0);
		I_strncpyz(mapname, Dvar_GetString("mapname"), sizeof(mapname));
		FS_ConvertPath(mapname);
		SV_SpawnServer(mapname);
		return;
	}

	// make sure we aren't restarting twice in the same frame
	if ( com_frameTime == sv.start_frameTime )
		return;
  
	Dvar_ResetScriptInfo();
	SV_InitArchivedSnapshot();

	// toggle the server bit so clients can detect that a
	// map_restart has happened
	svs.snapFlagServerBit ^= SNAPFLAG_SERVERCOUNT;

	// generate a new serverid
	// TTimo - don't update restartedserverId there, otherwise we won't deal correctly with multiple map_restart
	sv_serverId_value = (((byte)sv_serverId_value + 1) & 0xF) + (sv_serverId_value & 0xF0);
	Dvar_SetInt(sv_serverid, sv_serverId_value);

	sv.start_frameTime = com_frameTime;

	// reset all the vm data in place without changing memory allocation
	// note that we do NOT set sv.state = SS_LOADING, so configstrings that
	// had been changed from their default values will generate broadcast updates
	sv.state = SS_LOADING;
	sv.restarting = qtrue;

	SV_RestartGameProgs(savepersist);

	// run a few frames to allow everything to settle
	for ( i = 0; i < GAME_INIT_FRAMES; i++ )
	{
		svs.time += FRAMETIME;
		SV_RunFrame();
	}

	// connect and begin all the clients
	for(i = 0, cl = svs.clients; i < sv_maxclients->current.integer; ++i, ++cl)
	{
		// send the new gamestate to all connected clients
		if ( cl->state < CS_CONNECTED )
		{
			continue;
		}

		// add the map_restart command
		SV_AddServerCommand(cl, SV_CMD_RELIABLE, va("%c", savepersist == 0 ? 66 : 110));

		// connect the client again, without the firstTime flag
		dropreason = ClientConnect(i, cl->clscriptid);

		if ( dropreason )
		{
			// this generally shouldn't happen, because the client
			// was connected before the level change
			SV_DropClient(cl, dropreason);
			Com_Printf("SV_MapRestart_f: dropped client %i - denied!\n", i);
		}
		else if ( cl->state == CS_ACTIVE )
		{
			SV_ClientEnterWorld(cl, &cl->lastUsercmd);
		}
	}

	sv.state = SS_GAME;
	sv.restarting = qfalse;
}

/*
==================
SV_Map_f

Restart the server on a different map
==================
*/
extern dvar_t *sv_cheats;
static void SV_Map_f()
{
	char mapname[MAX_QPATH];
	char *expanded;
	const char *map;

	map = SV_Cmd_Argv(1);

	if ( !map[0] )
	{
		return;
	}

	I_strncpyz(mapname, SV_GetMapBaseName(map), sizeof(mapname));
	I_strlwr(mapname);

	expanded = va("maps/mp/%s.%s", mapname, GetBspExtension());

	if ( FS_ReadFile(expanded, 0) != -1 )
	{
		FS_ConvertPath(mapname);
		SV_SpawnServer(mapname);
		Dvar_SetBool(sv_cheats, I_stricmp(SV_Cmd_Argv(0), "devmap") == 0);
	}
	else
		Com_Printf("Can't find map %s\n", expanded);
}

static void SV_FastRestart_f()
{
	SV_MapRestart(1);
}

static void SV_MapRestart_f()
{
	SV_MapRestart(0);
}

