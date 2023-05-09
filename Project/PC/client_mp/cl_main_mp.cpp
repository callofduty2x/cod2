void __cdecl WinInitControlfp(void)
{	UNIMPLEMENTED();
}

struct Font_s * __cdecl CL_RegisterFont(char const *,int)
{	UNIMPLEMENTED();
}

bool __cdecl CL_GetDisplayHUDWithKeycatchUI(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetKeyCatchers(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawTextPhysicalWithCursor(char const *,int,struct Font_s *,float,float,float,float,float const * const,int,int,char)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawTextPhysical(char const *,int,struct Font_s *,float,float,float,float,float const * const,int)
{	UNIMPLEMENTED();
}

float __cdecl CL_NormalizedTextScale(struct Font_s *,float)
{	UNIMPLEMENTED();
}

int __cdecl CL_TextHeight(struct Font_s *)
{	UNIMPLEMENTED();
}

int __cdecl CL_TextWidth(char const *,int,struct Font_s *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownDebugData(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateDebugData(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_FlushDebugData(int)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetServerIPAddress(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetPingQueueCount(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClearPing(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetPingInfo(int,char *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_StopLogo(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawLogo(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_ScaledMilliseconds(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownRef(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_IsClientActive(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_RequestAuthorization(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ResetSkeletonCache(int)
{	UNIMPLEMENTED();
}

char * __cdecl CL_AllocSkelMemory(int,unsigned int)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetSkelTimeStamp(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddReliableCommand(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetXuidForLocalClient(int)
{	UNIMPLEMENTED();
}

enum connstate_t __cdecl CL_GetLocalClientConnectionState(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientConnectionState(int,enum connstate_t)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AllLocalClientsStateConsistent(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AnyLocalClientChallenging(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AnyLocalClientStateActive(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AllLocalClientsInactive(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_ControllerIndexFromClientNum(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_LocalClientNumFromControllerIndex(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetFrameActiveClientCount(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetActiveLocalClientIndex(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetLocalClientActiveCount(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_GetLocalClientActive(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetView(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ForwardCommandToServer(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClearState(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_StopRecord_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_WriteDemoMessage(struct msg_t *,int)
{	UNIMPLEMENTED();
}

bool __cdecl CL_IsRenderingSplitScreen(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetLocalClientControllerIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientViewData(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddDebugLine(float const * const,float const * const,float const * const,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddDebugString(float const * const,float const * const,float,char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SwitchToLocalClient(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawTextWithCursor(char const *,int,struct Font_s *,float,float,int,int,float,float,float const * const,int,int,char)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawText(char const *,int,struct Font_s *,float,float,int,int,float,float,float const * const,int)
{	UNIMPLEMENTED();
}

bool __cdecl CL_IsPlayerTalking(int)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AllLocalClientsDisconnected(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateServerInfo(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetPing(int,char *,int,int *)
{	UNIMPLEMENTED();
}

void __cdecl CL_StopLogoOrCinematic(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitRenderer(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_UpdateDirtyPings_f(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateInGameState(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Disconnect(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientActive(int,bool)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetUsernameForLocalClient(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckUserinfo(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_NextDemo(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ToggleMenu_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckTimeout(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckForResend(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Disconnect_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_MapLoading(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_LocalServers_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_PlayLogo_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_RefPrintf(int,char const *,...)
{	UNIMPLEMENTED();
}

void __cdecl CL_Configstrings_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Reconnect_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Setenv_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ForwardToServer_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DemoCompleted(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShowIP_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_VoicePacket(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl CL_Clientinfo_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DisconnectPacket(struct netadr_t)
{	UNIMPLEMENTED();
}

void __cdecl CL_Record_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_VoiceTransmit(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_VoiceFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Init(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_StartHunkUsers(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Snd_Restart_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_RunOncePerClientFrame(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_startSingleplayer_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownHunkUsers(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Shutdown(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownAll(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitRef(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Vid_Restart_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetupForNewServerMap(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitLoad(char const *,char const *)
{	UNIMPLEMENTED();
}

bool __cdecl CL_ConnectionlessPacket(struct netadr_t,struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_DownloadsComplete(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_PacketEvent(struct netadr_t,struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_ReadDemoMessage(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Frame(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_PlayDemo_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitOnceForAllClients(void)
{	UNIMPLEMENTED();
}

struct clientActive_t * cl;
struct clientConnection_t * clc;
bool g_waitingForServer;
struct dvar_s const * const cl_conXOffset;
struct dvar_s const * const cl_showSend;
struct dvar_s const * const fx_enable;
struct dvar_s const * const cl_returnToSplitscreenGameSetupScreenOnDisconnect;
struct dvar_s const * const fx_sort;
struct dvar_s const * const cl_avidemo;
struct clientConnection_t * clientConnections;
struct refexport_t re;
struct dvar_s const * const cl_nodelta;
struct dvar_s const * const cl_showServerCommands;
struct dvar_s const * const cl_connectTimeout;
struct dvar_s const * const cl_sensitivity;
struct dvar_s const * const cl_forceavidemo;
struct dvar_s const * const cl_timeout;
struct dvar_s const * const cl_returnToXenonLiveScreenOnDisconnect;
struct dvar_s const * const m_yaw;
struct dvar_s const * const cl_returnToSystemLinkGameSetupScreenOnDisconnect;
struct dvar_s const * const m_pitch;
struct dvar_s const * const cl_activeAction;
struct dvar_s const * const nextdemo;
struct clientStatic_t cls;
struct ping_t * cl_pinglist;
struct dvar_s const * const fx_freeze;
int old_com_frameTime;
struct dvar_s const * const fx_debugBolt;
struct dvar_s const * const cl_showMouseRate;
struct dvar_s const * const fx_count;
struct dvar_s const * const fx_visMinTraceDist;
unsigned int frame_msec;
struct dvar_s const * const m_forward;
struct dvar_s const * const cl_packetdup;
struct dvar_s const * const cl_mouseAccel;
struct dvar_s const * const cl_maxpackets;
struct dvar_s const * const cl_motdString;
struct dvar_s const * const cl_freezeDemo;
struct dvar_s const * const cl_showTimeDelta;
struct dvar_s const * const fx_draw;
struct dvar_s const * const fx_profile;
struct dvar_s const * const fx_debug;
struct dvar_s const * const cl_ingame;
struct dvar_s const * const cl_inGameVideo;
struct dvar_s const * const name;
struct dvar_s const * const cl_noprint;
struct dvar_s const * const m_side;
struct dvar_s const * const cl_serverStatusResendTime;
struct dvar_s const * const m_filter;
struct dvar_s const * const cl_returnToSystemLinkJoinGameScreenOnDisconnect;
struct dvar_s const * const fx_cull;
struct clientActive_t * clients;
struct dvar_s const * const cl_shownuments;
struct dvar_s const * const cl_freelook;
struct dvar_s const * const cl_shownet;
int g_localClientNum;
void __cdecl CL_ShutdownRenderer(void)
{	UNIMPLEMENTED();
}

