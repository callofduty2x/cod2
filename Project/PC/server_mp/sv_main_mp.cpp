void __cdecl SV_CalcPings(void)
{	UNIMPLEMENTED();
}

char * __cdecl SV_ExpandNewlines(char *)
{	UNIMPLEMENTED();
}

void __cdecl SVC_Info(struct netadr_t from)
{	UNIMPLEMENTED();
}

void __cdecl SV_AddServerCommand(struct client_s * client, enum svscmd_type type, char const * cmd)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendServerCommand(struct client_s * cl, enum svscmd_type type, char const * fmt, ...)
{	UNIMPLEMENTED();
}

int __cdecl SV_CheckPaused(void)
{	UNIMPLEMENTED();
}

void __cdecl SVC_GameCompleteStatus(struct netadr_t from)
{	UNIMPLEMENTED();
}

void __cdecl SVC_Status(struct netadr_t from)
{	UNIMPLEMENTED();
}

void __cdecl SV_FreeClientScriptId(struct client_s * cl)
{	UNIMPLEMENTED();
}

void __cdecl SV_VoicePacket(struct netadr_t from, struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl SV_CheckTimeouts(void)
{	UNIMPLEMENTED();
}

void __cdecl SV_BotUserMove(struct client_s * cl)
{	UNIMPLEMENTED();
}

void __cdecl SV_UpdateBots(void)
{	UNIMPLEMENTED();
}

void __cdecl SV_RunFrame()
{	UNIMPLEMENTED();
}

void __cdecl SV_Frame(int msec)
{	UNIMPLEMENTED();
}

void __cdecl SV_ConnectionlessPacket(struct netadr_t from, struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl SV_PacketEvent(struct netadr_t from, struct msg_t * msg)
{	UNIMPLEMENTED();
}

struct dvar_s const * const sv_allowedClan2;
struct dvar_s const * const sv_maxPing;
struct dvar_s const * const sv_privateClients;
struct dvar_s const * const sv_maxclients;
struct dvar_s const * const sv_hostname;
struct dvar_s const * const sv_allowedClan1;
struct dvar_s const * const sv_allowAnonymous;
struct dvar_s const * const sv_debugReliableCmds;
struct dvar_s const * const sv_reconnectlimit;
struct dvar_s const * const sv_kickBanTime;
struct dvar_s const * const sv_floodProtect;
struct dvar_s const * const sv_allowDownload;
struct dvar_s const * const sv_gametype;
struct dvar_s const * const rcon_password;
struct dvar_s const * const sv_mapname;
struct dvar_s const * const sv_cheats;
struct dvar_s const * const sv_maxRate;
struct dvar_s const * const sv_showCommands;
struct dvar_s const * const sv_packet_info;
struct dvar_s const * const sv_mapRotationCurrent;
struct dvar_s const * const sv_disableClientConsole;
struct dvar_s const * const sv_minPing;
struct dvar_s const * const sv_zombietime;
struct dvar_s const * const sv_privatePassword;
struct dvar_s const * const sv_debugRate;
struct dvar_s const * const sv_showAverageBPS;
struct dvar_s const * const sv_timeout;
struct dvar_s const * const sv_padPackets;
struct dvar_s const * const sv_fps;
struct dvar_s const * const sv_serverid;
struct dvar_s const * const sv_mapRotation;
struct server_t sv;
struct serverStatic_t svs;
void __cdecl SV_CullIgnorableServerCommands(struct client_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_IsFirstTokenEqual(char const *,char const *)
{	UNIMPLEMENTED();
}

int __cdecl SV_CanReplaceServerCommand(struct client_s *,char const *)
{	UNIMPLEMENTED();
}

