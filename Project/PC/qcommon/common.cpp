char __cdecl Com_GetDecimalDelimiter()
{	UNIMPLEMENTED();
}

int __cdecl Com_AddToString(char const * add, char * msg, int len, int maxlen, int mayAddQuotes)
{	UNIMPLEMENTED();
}

void __cdecl Com_SetWeaponInfoMemory(int iSource)
{	UNIMPLEMENTED();
}

void __cdecl Field_Clear(struct field_t * edit)
{	UNIMPLEMENTED();
}

void __cdecl Com_CheckSyncFrame(void)
{	UNIMPLEMENTED();
}

float __cdecl Com_GetTimescaleForSnd()
{	UNIMPLEMENTED();
}

void __cdecl Com_SetScriptSettings(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ShutdownEvents()
{	UNIMPLEMENTED();
}

void __cdecl Com_PushEvent(struct sysEvent_t *)
{	UNIMPLEMENTED();
}

void __cdecl Com_InitPushEvent(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ForceSafeMode(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ParseCommandLine(char *)
{	UNIMPLEMENTED();
}

void __cdecl Com_SetTimeScale(float)
{	UNIMPLEMENTED();
}

void __cdecl Com_DPrintf(char const * fmt, ...)
{	UNIMPLEMENTED();
}

void __cdecl Com_LocalizedFloatToString(float f, char * buffer, unsigned int maxlen, unsigned int numDecimalPlaces)
{	UNIMPLEMENTED();
}

void __cdecl Com_CloseLogfiles(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ResetFrametime(void)
{	UNIMPLEMENTED();
}

int __cdecl Com_AddStartupCommands(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_FreeWeaponInfoMemory(int iSource)
{	UNIMPLEMENTED();
}

void __cdecl Com_PumpMessageLoop()
{	UNIMPLEMENTED();
}

int __cdecl Com_Milliseconds()
{	UNIMPLEMENTED();
}

struct sysEvent_t __cdecl Com_GetEvent(void)
{	UNIMPLEMENTED();
}

int __cdecl Com_SafeMode()
{	UNIMPLEMENTED();
}

void * __cdecl MT_AllocAnimTree(int)
{	UNIMPLEMENTED();
}

struct XAnimTree_s * __cdecl Com_XAnimCreateSmallTree(struct XAnim_s *)
{	UNIMPLEMENTED();
}

void __cdecl Com_XAnimFreeSmallTree(struct XAnimTree_s *)
{	UNIMPLEMENTED();
}

void __cdecl Com_RunAutoExec(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ExecStartupConfigs(char const * configFile)
{	UNIMPLEMENTED();
}

int __cdecl Debug_EventLoop()
{	UNIMPLEMENTED();
}

void __cdecl Com_ReadCDKey()
{	UNIMPLEMENTED();
}

void __cdecl Com_PrintMessage(enum print_msg_type_t type, char const * msg)
{	UNIMPLEMENTED();
}

void __cdecl Com_Printf(char const * fmt, ...)
{	UNIMPLEMENTED();
}

void __cdecl Com_WriteDefaultsToFile(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Com_WriteCDKey()
{	UNIMPLEMENTED();
}

void __cdecl Info_Print(char const * s)
{	UNIMPLEMENTED();
}

void __cdecl Com_WriteDefaults_f()
{	UNIMPLEMENTED();
}

void __cdecl Com_WriteConfig_f()
{	UNIMPLEMENTED();
}

void __cdecl Com_WriteConfiguration(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_StartupVariable(char const * match)
{	UNIMPLEMENTED();
}

void __cdecl Com_Close()
{	UNIMPLEMENTED();
}

void __cdecl Com_SyncThreads(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_Restart()
{	UNIMPLEMENTED();
}

void __cdecl Com_AssetLoadUI(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_Quit_f()
{	UNIMPLEMENTED();
}

void __cdecl Com_ShutdownInternal(char * finalmsg)
{	UNIMPLEMENTED();
}

void __cdecl Com_Shutdown(char * finalmsg)
{	UNIMPLEMENTED();
}

int __cdecl Com_EventLoop()
{	UNIMPLEMENTED();
}

void __cdecl Com_Frame_Try_Block_Function()
{	UNIMPLEMENTED();
}

void __cdecl Com_Frame()
{	UNIMPLEMENTED();
}

void __cdecl Com_Init_Try_Block_Function(char * commandLine)
{	UNIMPLEMENTED();
}

void __cdecl Com_Init(char * commandLine)
{	UNIMPLEMENTED();
}

struct GamePadCheat * com_gamePadCheats;
char * cl_cdkey;
char * cl_cdkeychecksum;
struct dvar_s const * const com_developer;
int marker_common;
struct dvar_s const * const com_statmon;
int com_skelTimeStamp;
struct dvar_s const * const com_viewlog;
struct dvar_s const * const com_useConfig;
struct dvar_s const * const com_fixedtime;
struct dvar_s const * const com_logfile;
struct dvar_s const * const cl_paused;
struct dvar_s const * const com_timescale;
struct dvar_s const * const nextmap;
struct dvar_s const * const version;
struct dvar_s const * const com_sv_running;
float com_timescaleValue;
struct _iobuf * debuglogfile;
struct dvar_s const * const ui_errorTitle;
struct dvar_s const * const shortversion;
struct dvar_s const * const com_attractmodeduration;
struct dvar_s const * const com_attractmode;
int com_numConsoleLines;
struct dvar_s const * const sv_paused;
int com_fixedConsolePosition;
struct dvar_s const * const com_animCheck;
struct dvar_s const * const com_developer_script;
int com_argc;
struct dvar_s const * const com_maxfps;
int com_frameTime;
struct dvar_s const * const com_recommendedSet;
struct dvar_s const * const ui_errorMessage;
struct dvar_s const * const com_introPlayed;
int com_errorEntered;
int com_frameNumber;
char * * com_argv;
char * * com_consoleLines;
void __cdecl Com_ClearCDKey(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_Crash_f(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ClearGamePadCheat(struct GamePadCheat *)
{	UNIMPLEMENTED();
}

void __cdecl Com_ClearTempMemory(void)
{	UNIMPLEMENTED();
}

void __cdecl COM_PlayIntroMovies(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_UpdateGamePadCheat(struct GamePadCheat *)
{	UNIMPLEMENTED();
}

void __cdecl Com_UpdateAllGamePadCheats(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_SetErrorMessage(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Com_StartupConfigs(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_CheckStartupMessage(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_Statmon(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_Error_f(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_InitDvars(void)
{	UNIMPLEMENTED();
}

int __cdecl Com_ModifyMsec(int)
{	UNIMPLEMENTED();
}

void __cdecl Com_WriteConfigToFile(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Com_Freeze_f(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_AttractMode(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_DedicatedModified(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_ErrorCleanup(void)
{	UNIMPLEMENTED();
}

void __cdecl Com_StartHunkUsers(void)
{	UNIMPLEMENTED();
}

Com_BeginRedirect(char* buffer,  int buffersize,  void  flush)(char*))
{	UNIMPLEMENTED();
}

Com_EndRedirect()
{	UNIMPLEMENTED();
}

Com_SetRecommended(int restart)
{	UNIMPLEMENTED();
}

Com_CheckSetRecommended()
{	UNIMPLEMENTED();
}

