float __cdecl UI_GetBlurRadius(void)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetTopActiveMenuName(void)
{	UNIMPLEMENTED();
}

enum uiMenuCommand_t __cdecl UI_GetActiveMenu(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_MouseEvent(int,int)
{	UNIMPLEMENTED();
}

struct Material * __cdecl UI_FeederItemImage(float,int)
{	UNIMPLEMENTED();
}

int __cdecl UI_OwnerDrawHandleKey(int,int,float *,int)
{	UNIMPLEMENTED();
}

int __cdecl UI_OwnerDrawVisible(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_SetMap(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_UpdateTime(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_SwitchToLocalClient(int)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_ReplaceConversions(char const *,struct ConversionArguments *)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_ReplaceConversionInt(char const *,int)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_ReplaceConversionString(char const *,char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetMapDisplayNameFromPartialLoadNameMatch(char const *,int *)
{	UNIMPLEMENTED();
}

int __cdecl UI_TextHeight(struct Font_s *,float)
{	UNIMPLEMENTED();
}

int __cdecl UI_TextWidth(char const *,int,struct Font_s *,float)
{	UNIMPLEMENTED();
}

void __cdecl UI_AssetCache(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_FeederSelection(float,int)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetGameTypeDisplayName(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetMapDisplayName(char const *)
{	UNIMPLEMENTED();
}

struct Font_s * __cdecl UI_GetFontHandle(int,float)
{	UNIMPLEMENTED();
}

int __cdecl UI_AnyFullScreenMenuVisible(void)
{	UNIMPLEMENTED();
}

int __cdecl UI_IsFullscreen(void)
{	UNIMPLEMENTED();
}

int __cdecl UI_CheckExecKey(int)
{	UNIMPLEMENTED();
}

void __cdecl WM_setVisibility(char *,int)
{	UNIMPLEMENTED();
}

void __cdecl WM_setItemPic(char *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawTextWithCursor(char const *,int,struct Font_s *,float,float,int,int,float,float const * const,int,int,char)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawText(char const *,int,struct Font_s *,float,float,int,int,float,float const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawTopBottom(float,float,float,float,int,int,float,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawSides(float,float,float,float,int,int,float,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseXenonHudWaitScreen(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseMenu(char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseFocusedMenu(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseAll(void)
{	UNIMPLEMENTED();
}

void __cdecl Text_PaintCenter(float,float,struct Font_s *,float,float const * const,char const *,float)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseMenu_f(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_Shutdown(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawRect(float,float,float,float,int,int,float,float const * const)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_SafeTranslateString(char const *)
{	UNIMPLEMENTED();
}

int __cdecl UI_OwnerDrawWidth(int,struct Font_s *,float)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_FeederItemText(float,int,int,struct Material * *)
{	UNIMPLEMENTED();
}

int __cdecl UI_FeederCount(float)
{	UNIMPLEMENTED();
}

void __cdecl UI_OverrideCursorPos(struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl UI_KeyEvent(int,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_Pause(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_RunMenuScript(char const * *)
{	UNIMPLEMENTED();
}

void __cdecl UI_OpenMenu(char const *)
{	UNIMPLEMENTED();
}

int __cdecl UI_SetActiveMenu(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_OpenMenu_f(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_ShowPartyLobby(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_LoadIngameMenus(void)
{	UNIMPLEMENTED();
}

int __cdecl Load_ScriptMenu(char const *,int)
{	UNIMPLEMENTED();
}

int __cdecl String_ParseInternal(char const * *,char const * *)
{	UNIMPLEMENTED();
}

char * __cdecl GetMenuBuffer(char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_OwnerDraw(float,float,float,float,int,int,float,float,int,int,int,float,struct Font_s *,float,float * const,struct Material *,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_Init(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawMapLevelshot(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawConnectScreen(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_Refresh(void)
{	UNIMPLEMENTED();
}

struct uiInfo_t * uiInfo;
struct serverStatusDvar_t * serverStatusDvars;
struct dvar_s const * const ui_mapname;
struct dvar_s const * const ui_netSource;
struct dvar_s const * const ui_bigFont;
struct dvar_s const * const ui_selectedPlayer;
struct dvar_s const * const ui_extraBigFont;
struct dvar_s const * const ui_gametype;
struct dvar_s const * const ui_currentMap;
struct dvar_s const * const ui_smallFont;
struct dvar_s const * const ui_serverStatusTimeOut;
struct uiInfo_t * uiInfoArray;
struct sharedUiInfo_t sharedUiInfo;
void __cdecl UI_InsertServerIntoDisplayList(int,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_StartSkirmish(int)
{	UNIMPLEMENTED();
}

int __cdecl UI_GetPlayerListNumForClientNum(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_UpdatePendingPings(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_ClearDisplayedServers(void)
{	UNIMPLEMENTED();
}

bool __cdecl UI_DvarValueTest(char const *,char const *,char const *,bool)
{	UNIMPLEMENTED();
}

void __cdecl UI_OpenMenuOnDvar(char const *,char const *,char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_BuildPlayerList(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_BinaryServerInsertion(int)
{	UNIMPLEMENTED();
}

int __cdecl UI_ServersQsortCompare(void const *,void const *)
{	UNIMPLEMENTED();
}

int __cdecl UI_GetTalkerClientNum(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseMenuOnDvar(char const *,char const *,char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_ServersSort(int,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawTalkerNum(int,struct rectDef_s *,struct Font_s *,float * const,float,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_VerifyLanguage(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_Update(char const *)
{	UNIMPLEMENTED();
}

struct MenuList * __cdecl Load_ScriptMenuInternal(char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_BuildServerDisplayList(int)
{	UNIMPLEMENTED();
}

bool __cdecl UI_GetOpenOrCloseMenuOnDvarArgs(char const * *,char const *,char * const,char * const,char * const)
{	UNIMPLEMENTED();
}

void __cdecl UI_UpdateDisplayServers(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawPartyStatus(struct rectDef_s *,struct Font_s *,float * const,float,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawKeyBindStatus(struct rectDef_s *,struct Font_s *,float,float * const,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawServerRefreshDate(struct rectDef_s *,struct Font_s *,float,float * const,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_BuildServerStatus(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_StartServerRefresh(int)
{	UNIMPLEMENTED();
}

void __cdecl UI_RegisterDvars(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_StopServerRefresh(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_DoServerRefresh(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_GetGameTypesList(void)
{	UNIMPLEMENTED();
}

