float __cdecl UI_GetBlurRadius()
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetTopActiveMenuName(void)
{	UNIMPLEMENTED();
}

enum uiMenuCommand_t __cdecl UI_GetActiveMenu()
{	UNIMPLEMENTED();
}

void __cdecl UI_MouseEvent(int dx, int dy)
{	UNIMPLEMENTED();
}

struct Material * __cdecl UI_FeederItemImage(float feederID, int index)
{	UNIMPLEMENTED();
}

int __cdecl UI_OwnerDrawHandleKey(int ownerDraw, int flags, float * special, int key)
{	UNIMPLEMENTED();
}

int __cdecl UI_OwnerDrawVisible(int flags)
{	UNIMPLEMENTED();
}

void __cdecl UI_SetMap(char const * mapname, char const * gametype)
{	UNIMPLEMENTED();
}

void __cdecl UI_UpdateTime(int realtime)
{	UNIMPLEMENTED();
}

void __cdecl UI_SwitchToLocalClient(int)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_ReplaceConversions(char const * sourceString, struct ConversionArguments * arguments)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_ReplaceConversionInt(char const *,int)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_ReplaceConversionString(char const * sourceString, char const * replaceString)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetMapDisplayNameFromPartialLoadNameMatch(char const * pszMap, int * mapLoadNameLen)
{	UNIMPLEMENTED();
}

int __cdecl UI_TextHeight(struct Font_s * font, float scale)
{	UNIMPLEMENTED();
}

int __cdecl UI_TextWidth(char const * text, int maxChars, struct Font_s * font, float scale)
{	UNIMPLEMENTED();
}

void __cdecl UI_AssetCache()
{	UNIMPLEMENTED();
}

void __cdecl UI_FeederSelection(float feederID, int index)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetGameTypeDisplayName(char const * pszGameType)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_GetMapDisplayName(char const * pszMap)
{	UNIMPLEMENTED();
}

struct Font_s * __cdecl UI_GetFontHandle(int fontEnum, float scale)
{	UNIMPLEMENTED();
}

int __cdecl UI_AnyFullScreenMenuVisible()
{	UNIMPLEMENTED();
}

int __cdecl UI_IsFullscreen()
{	UNIMPLEMENTED();
}

int __cdecl UI_CheckExecKey(int key)
{	UNIMPLEMENTED();
}

void __cdecl WM_setVisibility(char *,int)
{	UNIMPLEMENTED();
}

void __cdecl WM_setItemPic(char *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawTextWithCursor(char const * text, int maxChars, struct Font_s * font, float x, float y, int horzAlign, int vertAlign, float scale, float const * const color, int style, int cursorPos, char cursor)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawText(char const * text, int maxChars, struct Font_s * font, float x, float y, int horzAlign, int vertAlign, float scale, float const * const color, int style)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawTopBottom(float x, float y, float w, float h, int horzAlign, int vertAlign, float size, float const * const color)
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawSides(float x, float y, float w, float h, int horzAlign, int vertAlign, float size, float const * const color)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseXenonHudWaitScreen(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseMenu(char const *)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseFocusedMenu()
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseAll()
{	UNIMPLEMENTED();
}

void __cdecl Text_PaintCenter(float,float,struct Font_s *,float,float const * const,char const *,float)
{	UNIMPLEMENTED();
}

void __cdecl UI_CloseMenu_f()
{	UNIMPLEMENTED();
}

void __cdecl UI_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawRect(float x, float y, float width, float height, int horzAlign, int vertAlign, float size, float const * const color)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_SafeTranslateString(char const * reference)
{	UNIMPLEMENTED();
}

int __cdecl UI_OwnerDrawWidth(int ownerDraw, struct Font_s * font, float scale)
{	UNIMPLEMENTED();
}

char const * __cdecl UI_FeederItemText(float feederID, int index, int column, struct Material * * handle)
{	UNIMPLEMENTED();
}

int __cdecl UI_FeederCount(float feederID)
{	UNIMPLEMENTED();
}

void __cdecl UI_OverrideCursorPos(struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl UI_KeyEvent(int key, int down)
{	UNIMPLEMENTED();
}

void __cdecl UI_Pause(int b)
{	UNIMPLEMENTED();
}

void __cdecl UI_RunMenuScript(char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl UI_OpenMenu(char const *)
{	UNIMPLEMENTED();
}

int __cdecl UI_SetActiveMenu(int menu)
{	UNIMPLEMENTED();
}

void __cdecl UI_OpenMenu_f()
{	UNIMPLEMENTED();
}

void __cdecl UI_ShowPartyLobby(void)
{	UNIMPLEMENTED();
}

void __cdecl UI_LoadIngameMenus()
{	UNIMPLEMENTED();
}

int __cdecl Load_ScriptMenu(char const * pszMenu, int imageTrack)
{	UNIMPLEMENTED();
}

int __cdecl String_ParseInternal(char const * *,char const * *)
{	UNIMPLEMENTED();
}

char * __cdecl GetMenuBuffer(char const * filename)
{	UNIMPLEMENTED();
}

void __cdecl UI_OwnerDraw(float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, float special, struct Font_s * font, float scale, float * const color, struct Material * material, int textStyle)
{	UNIMPLEMENTED();
}

void __cdecl UI_Init()
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawMapLevelshot()
{	UNIMPLEMENTED();
}

void __cdecl UI_DrawConnectScreen()
{	UNIMPLEMENTED();
}

void __cdecl UI_Refresh()
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

UI_DrawRecordLevel(rectDef_s* rect)
{	UNIMPLEMENTED();
}

