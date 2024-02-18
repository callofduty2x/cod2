#include "../qcommon/qcommon.h"

/*
==============
SV_FlushRedirect
==============
*/
void SV_FlushRedirect(char *outputbuf)
{
	char buf[1300];
	char c;
	int len;

	len = strlen(outputbuf);

	while ( len > 1294 )
	{
		c = outputbuf[1294];
		outputbuf[1294] = 0;
		Com_sprintf(buf, sizeof(buf), "print\n%s", outputbuf);
		NET_OutOfBandPrint(NS_SERVER, svs.redirectAddress, buf);
		len -= 1294;
		outputbuf += 1294;
		*outputbuf = c;
	}

	Com_sprintf(buf, sizeof(buf), "print\n%s", outputbuf);
	NET_OutOfBandPrint(NS_SERVER, svs.redirectAddress, buf);
}

/*
===============
SVC_RemoteCommand
An rcon packet arrived from the network.
Shift down the remaining args
Redirect all printfs
===============
*/

#ifdef LIBCOD
extern dvar_t *sv_allowRcon;
#endif

extern dvar_t *rcon_password;
void SVC_RemoteCommand( netadr_t from, msg_t *msg )
{
	qboolean valid;
	unsigned int time;
	char remaining[1024];
	// show_bug.cgi?id=376
	// if we send an OOB print message this size, 1.31 clients die in a Com_Printf buffer overflow
	// the buffer overflow will be fixed in > 1.31 clients
	// but we want a server side fix
	// we must NEVER send an OOB message that will be > 1.31 MAXPRINTMSG (4096)
  #define SV_OUTPUTBUF_LENGTH ( 256 * MAX_CLIENTS - 16 )
	char sv_outputbuf[SV_OUTPUTBUF_LENGTH];
	static unsigned int lasttime = 0;

	static leakyBucket_t bucket;
	// Prevent using rcon as an amplifier and make dictionary attacks impractical
	if ( SVC_RateLimitAddress( from, 10, 1000 ) )
	{
		Com_DPrintf( "SVC_RemoteCommand: rate limit from %s exceeded, dropping request\n", NET_AdrToString( from ) );
		return;
	}

	// Make DoS via rcon impractical
	if ( SVC_RateLimit( &bucket, 10, 1000 ) )
	{
		Com_DPrintf( "SVC_RemoteCommand: rate limit exceeded, dropping request\n" );
		return;
	}

	// TTimo - show_bug.cgi?id=534
	time = Com_Milliseconds();
	if ( time < ( lasttime + 500 ) )
	{
		return;
	}
	lasttime = time;

	if ( !strlen( rcon_password->current.string ) ||
	        strcmp( Cmd_Argv( 1 ), rcon_password->current.string ) )
	{
		valid = qfalse;
		Com_Printf( "Bad rcon from %s:\n%s\n", NET_AdrToString( from ), Cmd_Argv( 2 ) );
	}
	else
	{
		valid = qtrue;
		Com_Printf( "Rcon from %s:\n%s\n", NET_AdrToString( from ), Cmd_Argv( 2 ) );
	}

	// start redirecting all print outputs to the packet
	svs.redirectAddress = from;
	// FIXME TTimo our rcon redirection could be improved
	//   big rcon commands such as status lead to sending
	//   out of band packets on every single call to Com_Printf
	//   which leads to client overflows
	//   see show_bug.cgi?id=51
	//     (also a Q3 issue)
	Com_BeginRedirect( sv_outputbuf, SV_OUTPUTBUF_LENGTH, SV_FlushRedirect );

	if ( !strlen( rcon_password->current.string ) )
	{
		Com_Printf( "The server must set 'rcon_password' for clients to use 'rcon'.\n" );
	}
	else if ( !valid )
	{
		Com_Printf( "Invalid password.\n" );
	}
	else
	{
		// ATVI Wolfenstein Misc #284
		// get the command directly, "rcon <pass> <command>" to avoid quoting issues
		// extract the command by walking
		// since the cmd formatting can fuckup (amount of spaces), using a dumb step by step parsing
		int len = 0;
		int maxlen = 1024;

		for ( int i = 2; i < SV_Cmd_Argc(); ++i )
		{
			len = Com_AddToString(SV_Cmd_Argv(i), remaining, len, maxlen, 1);
			len = Com_AddToString(" ", remaining, len, maxlen, 0);
		}

		if ( len < maxlen )
		{
			remaining[len] = 0;
			SV_Cmd_ExecuteString(remaining);
		}
	}

	Com_EndRedirect();
}

// SV_MatchEnd()
// {	UNIMPLEMENTED();
// }

// SV_MasterAddress()
// {	UNIMPLEMENTED();
// }

/*
=================
SV_MasterGameCompleteStatus
NERVE - SMF - Sends gameCompleteStatus messages to all master servers
=================
*/
void SV_MasterGameCompleteStatus()
{
	static netadr_t adr[MAX_MASTER_SERVERS];
	int i;

	// "dedicated 1" is for lan play, "dedicated 2" is for inet public play
	if ( !com_dedicated || com_dedicated->current.integer != 2 )
	{
		return;     // only dedicated servers send master game status
	}

	// send to group masters
	for ( i = 0 ; i < MAX_MASTER_SERVERS ; i++ )
	{
		if ( !sv_master[i]->current.string[0] )
		{
			continue;
		}

		// see if we haven't already resolved the name
		// resolving usually causes hitches on win95, so only
		// do it when needed
		if ( sv_master[i]->modified )
		{
			sv_master[i]->modified = qfalse;

			Com_Printf( "Resolving %s\n", sv_master[i]->current.string );
			if ( !NET_StringToAdr( sv_master[i]->current.string, &adr[i] ) )
			{
				// if the address failed to resolve, clear it
				// so we don't take repeated dns hits
				Com_Printf( "Couldn't resolve address: %s\n", sv_master[i]->current.string );
				Dvar_SetString(sv_master[i], "");
				sv_master[i]->modified = qfalse;
				continue;
			}
			if ( !strstr( ":", sv_master[i]->current.string ) )
			{
				adr[i].port = BigShort( PORT_MASTER );
			}
			Com_Printf( "%s resolved to %i.%i.%i.%i:%i\n", sv_master[i]->current.string,
			            adr[i].ip[0], adr[i].ip[1], adr[i].ip[2], adr[i].ip[3],
			            BigShort( adr[i].port ) );
		}

		Com_Printf( "Sending gameCompleteStatus to %s\n", sv_master[i]->current.string );
		// this command should be changed if the server info / status format
		// ever incompatably changes
		SVC_GameCompleteStatus( adr[i] );
	}
}

/*
================
SV_MasterHeartbeat
Send a message to the masters every few minutes to
let it know we are alive, and log information.
We will also have a heartbeat sent when a server
changes from empty to non-empty, and full to non-full,
but not on every player enter or exit.
================
*/
extern dvar_t *sv_master[];
#define	HEARTBEAT_MSEC	180000
#define	STATUS_MSEC		600000
void SV_MasterHeartbeat(const char *game)
{
	static netadr_t	adr[MAX_MASTER_SERVERS];
	char heartbeat[32];
	int	i;

	// "dedicated 1" is for lan play, "dedicated 2" is for inet public play
	if ( !com_dedicated || com_dedicated->current.integer != 2 )
	{
		return;     // only dedicated servers send heartbeats
	}

	// if not time yet, don't send anything
	if ( svs.time >= svs.nextHeartbeatTime )
	{
		svs.nextHeartbeatTime = svs.time + HEARTBEAT_MSEC;

		// send to group masters
		for ( i = 0 ; i < MAX_MASTER_SERVERS ; i++ )
		{
			if ( !sv_master[i]->current.string[0] )
			{
				continue;
			}

			// see if we haven't already resolved the name
			// do it when needed
			if ( sv_master[i]->modified || !adr[i].type )
			{
				sv_master[i]->modified = qfalse;

				Com_Printf( "Resolving %s\n", sv_master[i]->current.string );
				if ( !NET_StringToAdr( sv_master[i]->current.string, &adr[i] ) )
				{
					// if the address failed to resolve, clear it
					// so we don't take repeated dns hits
					Com_Printf( "Couldn't resolve address: %s\n", sv_master[i]->current.string );
					Dvar_SetString(sv_master[i], "");
					sv_master[i]->modified = qfalse;
					continue;
				}
				if ( !strstr( ":", sv_master[i]->current.string ) )
				{
					adr[i].port = BigShort( PORT_MASTER );
				}
				Com_Printf( "%s resolved to %i.%i.%i.%i:%i\n", sv_master[i]->current.string,
				            adr[i].ip[0], adr[i].ip[1], adr[i].ip[2], adr[i].ip[3],
				            BigShort( adr[i].port ) );
			}

			if (strlen(sv_master[i]->current.string))
			{
				Com_Printf( "Sending heartbeat to %s\n", sv_master[i]->current.string );
				sprintf(heartbeat, "heartbeat %s\n", game);
				NET_OutOfBandPrint( NS_SERVER, adr[i], heartbeat );
			}
		}
	}

	// if not time yet, don't send anything
	if ( svs.time >= svs.nextStatusResponseTime )
	{
		svs.nextStatusResponseTime = svs.time + STATUS_MSEC;

		// send to group masters
		for ( i = 0 ; i < MAX_MASTER_SERVERS ; i++ )
		{
			if ( !sv_master[i]->current.string[0] )
			{
				continue;
			}

			// see if we haven't already resolved the name
			// do it when needed
			if ( sv_master[i]->modified || !adr[i].type )
			{
				sv_master[i]->modified = qfalse;

				Com_Printf( "Resolving %s\n", sv_master[i]->current.string );
				if ( !NET_StringToAdr( sv_master[i]->current.string, &adr[i] ) )
				{
					// if the address failed to resolve, clear it
					// so we don't take repeated dns hits
					Com_Printf( "Couldn't resolve address: %s\n", sv_master[i]->current.string );
					Dvar_SetString(sv_master[i], "");
					sv_master[i]->modified = qfalse;
					continue;
				}
				if ( !strstr( ":", sv_master[i]->current.string ) )
				{
					adr[i].port = BigShort( PORT_MASTER );
				}
				Com_Printf( "%s resolved to %i.%i.%i.%i:%i\n", sv_master[i]->current.string,
				            adr[i].ip[0], adr[i].ip[1], adr[i].ip[2], adr[i].ip[3],
				            BigShort( adr[i].port ) );
			}

			if (strlen(sv_master[i]->current.string))
			{
				SVC_Status(adr[i]);
			}
		}
	}
}

void SV_MasterShutdown()
{
	svs.nextHeartbeatTime = 0x80000000;
	SV_MasterHeartbeat("flatline");
}
