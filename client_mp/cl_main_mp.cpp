void __cdecl WinInitControlfp(void)
{	UNIMPLEMENTED();
}

struct Font_s * __cdecl CL_RegisterFont(char const * fontName, int imageTrack)
{	UNIMPLEMENTED();
}

bool __cdecl CL_GetDisplayHUDWithKeycatchUI()
{	UNIMPLEMENTED();
}

int __cdecl CL_GetKeyCatchers()
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawTextPhysicalWithCursor(char const * text, int maxChars, struct Font_s * font, float x, float y, float xScale, float yScale, float const * const color, int style, int cursorPos, char cursor)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawTextPhysical(char const * text, int maxChars, struct Font_s * font, float x, float y, float xScale, float yScale, float const * const color, int style)
{	UNIMPLEMENTED();
}

float __cdecl CL_NormalizedTextScale(struct Font_s * font, float scale)
{	UNIMPLEMENTED();
}

int __cdecl CL_TextHeight(struct Font_s * font)
{	UNIMPLEMENTED();
}

int __cdecl CL_TextWidth(char const * text, int maxChars, struct Font_s * font)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownDebugData()
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateDebugData()
{	UNIMPLEMENTED();
}

void __cdecl CL_FlushDebugData(int fromServer)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetServerIPAddress()
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

void __cdecl CL_StopLogo()
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawLogo()
{	UNIMPLEMENTED();
}

int __cdecl CL_ScaledMilliseconds()
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownRef()
{	UNIMPLEMENTED();
}

int __cdecl CL_IsClientActive(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_RequestAuthorization()
{	UNIMPLEMENTED();
}

void __cdecl CL_ResetSkeletonCache(int localClientNum)
{	UNIMPLEMENTED();
}

char * __cdecl CL_AllocSkelMemory(int localClientNum, unsigned int size)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetSkelTimeStamp(int localClientNum)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddReliableCommand(char const * cmd)
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

bool __cdecl CL_AnyLocalClientChallenging()
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

int __cdecl CL_GetLocalClientActiveCount()
{	UNIMPLEMENTED();
}

bool __cdecl CL_GetLocalClientActive(int clientNum)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetView(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ForwardCommandToServer(char const * string)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClearState()
{	UNIMPLEMENTED();
}

void __cdecl CL_StopRecord_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_WriteDemoMessage(struct msg_t * msg, int headerBytes)
{	UNIMPLEMENTED();
}

bool __cdecl CL_IsRenderingSplitScreen()
{	UNIMPLEMENTED();
}

int __cdecl CL_GetLocalClientControllerIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientViewData(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddDebugLine(float const * const start, float const * const end, float const * const color, int depthTest, int duration, int fromServer)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddDebugString(float const * const xyz, float const * const color, float scale, char const * text, int fromServer)
{	UNIMPLEMENTED();
}

void __cdecl CL_SwitchToLocalClient(int clientNum)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawTextWithCursor(char const * text, int maxChars, struct Font_s * font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, float const * const color, int style, int cursorPos, char cursor)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawText(char const * text, int maxChars, struct Font_s * font, float x, float y, int horzAlign, int vertAlign, float xScale, float yScale, float const * const color, int style)
{	UNIMPLEMENTED();
}

bool __cdecl CL_IsPlayerTalking(int clientIndex)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AllLocalClientsDisconnected()
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateServerInfo(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetPing(int n, char * buf, int buflen, int * pingtime)
{	UNIMPLEMENTED();
}

void __cdecl CL_StopLogoOrCinematic()
{	UNIMPLEMENTED();
}

void __cdecl CL_InitRenderer()
{	UNIMPLEMENTED();
}

int __cdecl CL_UpdateDirtyPings_f(int source)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateInGameState(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Disconnect()
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientActive(int,bool)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetUsernameForLocalClient(int controllerIndex)
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckUserinfo(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_NextDemo(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ToggleMenu_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckTimeout(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckForResend()
{	UNIMPLEMENTED();
}

void __cdecl CL_Disconnect_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_MapLoading(char const * mapname)
{	UNIMPLEMENTED();
}

void __cdecl CL_LocalServers_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_PlayLogo_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_RefPrintf(int print_level, char const * fmt, ...)
{	UNIMPLEMENTED();
}

void __cdecl CL_Configstrings_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_Reconnect_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_Setenv_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_ForwardToServer_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_DemoCompleted()
{	UNIMPLEMENTED();
}

void __cdecl CL_ShowIP_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_VoicePacket(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl CL_Clientinfo_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_DisconnectPacket(struct netadr_t)
{	UNIMPLEMENTED();
}

void __cdecl CL_Record_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_VoiceTransmit()
{	UNIMPLEMENTED();
}

void __cdecl CL_VoiceFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Init()
{	UNIMPLEMENTED();
}

void __cdecl CL_StartHunkUsers()
{	UNIMPLEMENTED();
}

void __cdecl CL_Snd_Restart_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_RunOncePerClientFrame(int msec)
{	UNIMPLEMENTED();
}

void __cdecl CL_startSingleplayer_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownHunkUsers()
{	UNIMPLEMENTED();
}

void __cdecl CL_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownAll()
{	UNIMPLEMENTED();
}

void __cdecl CL_InitRef()
{	UNIMPLEMENTED();
}

void __cdecl CL_Vid_Restart_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_SetupForNewServerMap(char const * pszMapName, char const * pszGametype)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitLoad(char const * mapname, char const * gametype)
{	UNIMPLEMENTED();
}

bool __cdecl CL_ConnectionlessPacket(struct netadr_t from, struct msg_t * msg, int time)
{	UNIMPLEMENTED();
}

void __cdecl CL_DownloadsComplete()
{	UNIMPLEMENTED();
}

bool __cdecl CL_PacketEvent(struct netadr_t from, struct msg_t * msg, int time)
{	UNIMPLEMENTED();
}

void __cdecl CL_ReadDemoMessage()
{	UNIMPLEMENTED();
}

void __cdecl CL_Frame(int msec)
{	UNIMPLEMENTED();
}

void __cdecl CL_PlayDemo_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_InitOnceForAllClients()
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

CL_ShutdownDemo()
{	UNIMPLEMENTED();
}

CL_OpenedIWDList_f()
{	UNIMPLEMENTED();
}

CL_ReferencedIWDList_f()
{	UNIMPLEMENTED();
}

Voice_SendVoiceData()
{	UNIMPLEMENTED();
}

CL_SyncGpu()
{	UNIMPLEMENTED();
}

CL_SetRecommended_f()
{	UNIMPLEMENTED();
}

CL_OpenScriptMenu_f()
{	UNIMPLEMENTED();
}

Client_SendVoiceData(int bytes,  char* enc_buffer)
{	UNIMPLEMENTED();
}

CL_BeginDownload(char const* localName,  char const* remoteName)
{	UNIMPLEMENTED();
}

CL_NextDownload()
{	UNIMPLEMENTED();
}

CL_InitDownloads()
{	UNIMPLEMENTED();
}

