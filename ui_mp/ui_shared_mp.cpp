int __cdecl Window_GetOffsetTime(struct windowDef_t const *)
{	UNIMPLEMENTED();
}

struct rectDef_s const * __cdecl Window_GetRectEffects0(struct windowDef_t const *)
{	UNIMPLEMENTED();
}

struct rectDef_s const * __cdecl Window_GetRectEffects1(struct windowDef_t const *)
{	UNIMPLEMENTED();
}

bool __cdecl Window_IsHorizontal(struct windowDef_t const *)
{	UNIMPLEMENTED();
}

bool __cdecl Window_HasFocus(struct windowDef_t const *)
{	UNIMPLEMENTED();
}

int __cdecl Menu_Count(struct displayContextDef_s * dc)
{	UNIMPLEMENTED();
}

int __cdecl Display_KeyBindPending()
{	UNIMPLEMENTED();
}

void __cdecl Controls_SetDefaults()
{	UNIMPLEMENTED();
}

void __cdecl Item_Action(struct displayContextDef_s *,struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Item_StopCapture(struct itemDef_s *)
{	UNIMPLEMENTED();
}

int __cdecl IsVisible(int)
{	UNIMPLEMENTED();
}

void __cdecl Fade(int *,float *,float,int *,int,int,float,float,struct displayContextDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl GradientBar_Paint(struct rectDef_s *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl LerpColor(float * const a, float * const b, float * const c, float t)
{	UNIMPLEMENTED();
}

int __cdecl Item_OwnerDraw_HandleKey(struct itemDef_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl GetCommandHasBinding(char const * command)
{	UNIMPLEMENTED();
}

int __cdecl BindingIDFromName(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ToWindowCoords(float *,float *,struct windowDef_t *)
{	UNIMPLEMENTED();
}

int __cdecl Display_VisibleMenuCount(struct displayContextDef_s *)
{	UNIMPLEMENTED();
}

float __cdecl Item_Slider_ThumbPosition(struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Script_ShowGamerCard(struct displayContextDef_s *,struct itemDef_s *,char const * *)
{	UNIMPLEMENTED();
}

struct menuDef_t * __cdecl Menus_FindByName(struct displayContextDef_s * dc, char const * p)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_FindItemByName(struct menuDef_t *,char const *)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_GetMatchingItemByNumber(struct menuDef_t * menu, int index, char const * name)
{	UNIMPLEMENTED();
}

int __cdecl Menu_ItemsMatchingGroup(struct menuDef_t * menu, char const * name)
{	UNIMPLEMENTED();
}

int __cdecl Menus_AnyFullScreenVisible(struct displayContextDef_s * dc)
{	UNIMPLEMENTED();
}

int __cdecl GetKeyBindings(char const * command, char  bindings)[128])
{	UNIMPLEMENTED();
}

void __cdecl Controls_GetConfig()
{	UNIMPLEMENTED();
}

void __cdecl Item_SetMouseOver(struct itemDef_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl Menu_FadeItemByName(struct menuDef_t * menu, char const * p, int fadeOut)
{	UNIMPLEMENTED();
}

void __cdecl Menu_ShowItemByName(struct menuDef_t * menu, char const * p, int bShow)
{	UNIMPLEMENTED();
}

void __cdecl Item_UpdatePosition(struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Menu_Setup(struct displayContextDef_s * dc)
{	UNIMPLEMENTED();
}

struct menuDef_t * __cdecl Menu_GetFocused(struct displayContextDef_s * dc)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_GetFocusedItem(struct menuDef_t *)
{	UNIMPLEMENTED();
}

void __cdecl Menu_OrbitItemByName(struct menuDef_t * menu, char const * p, float x, float y, float cx, float cy, int time)
{	UNIMPLEMENTED();
}

void __cdecl Menu_TransitionItemByName(struct menuDef_t * menu, char const * p, struct rectDef_s rectFrom, struct rectDef_s rectTo, int time, float amt)
{	UNIMPLEMENTED();
}

void __cdecl Menus_Close(struct displayContextDef_s * dc, struct menuDef_t * menu)
{	UNIMPLEMENTED();
}

int __cdecl Rect_ContainsPoint(struct rectDef_s const *,float,float)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_ClearFocus(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

void __cdecl Menu_SetFeederSelection(struct displayContextDef_s * dc, struct menuDef_t * menu, int feeder, int index, char const * name)
{	UNIMPLEMENTED();
}

void __cdecl Item_Text_Wrapped_Paint(struct itemDef_s * item, char const * textPtr, float * const color)
{	UNIMPLEMENTED();
}

void __cdecl Item_Text_AutoWrapped_Paint(struct itemDef_s * item, char const * textPtr, float * const color)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_HitTest(struct menuDef_t *,float,float)
{	UNIMPLEMENTED();
}

int __cdecl Item_Slider_OverSlider(struct itemDef_s *,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Menus_CloseAll(struct displayContextDef_s * dc)
{	UNIMPLEMENTED();
}

void __cdecl Menus_CloseByName(struct displayContextDef_s * dc, char const * p)
{	UNIMPLEMENTED();
}

int __cdecl Color_Parse(char const * *,float (*)[4])
{	UNIMPLEMENTED();
}

int __cdecl Item_YesNo_HandleKey(struct displayContextDef_s * dc, struct itemDef_s * item, int key)
{	UNIMPLEMENTED();
}

struct MenuList * __cdecl UI_LoadMenu(char const *,int)
{	UNIMPLEMENTED();
}

struct MenuList * __cdecl UI_LoadMenus(char const *,int)
{	UNIMPLEMENTED();
}

int __cdecl Item_Slider_HandleKey(struct displayContextDef_s * dc, struct itemDef_s * item, int key, int down)
{	UNIMPLEMENTED();
}

int __cdecl String_Parse(char const * * p, char * out, int len)
{	UNIMPLEMENTED();
}

int __cdecl GetKeyBindingLocalizedString(char const * command, char * const keys)
{	UNIMPLEMENTED();
}

void __cdecl BindingFromName(char const * dvar, char * const nameBind)
{	UNIMPLEMENTED();
}

void __cdecl Item_TextColor(struct displayContextDef_s * dc, struct itemDef_s * item, float  newColor)[4])
{	UNIMPLEMENTED();
}

void __cdecl Item_SetTextExtents(struct itemDef_s * item, int * width, int * height, char const * text)
{	UNIMPLEMENTED();
}

int __cdecl Menu_CheckOnKey(struct displayContextDef_s * dc, struct menuDef_t * menu, int key)
{	UNIMPLEMENTED();
}

int __cdecl Item_SetFocus(struct displayContextDef_s * dc, struct itemDef_s * item, float x, float y)
{	UNIMPLEMENTED();
}

void __cdecl Script_Play(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_SetDvar(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Orbit(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Transition(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_InGameClose(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Close(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_CloseForGameType(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_FadeOut(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_FadeIn(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Hide(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Show(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_SetItemColor(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_SetBackground(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_SetColor(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Controls_SetConfig(int restart)
{	UNIMPLEMENTED();
}

void __cdecl Item_Text_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_SetNextCursorItem(struct displayContextDef_s * dc, struct menuDef_t * menu)
{	UNIMPLEMENTED();
}

struct itemDef_s * __cdecl Menu_SetPrevCursorItem(struct displayContextDef_s * dc, struct menuDef_t * menu)
{	UNIMPLEMENTED();
}

int __cdecl Item_TextField_HandleKey(struct displayContextDef_s * dc, struct itemDef_s * item, int key)
{	UNIMPLEMENTED();
}

int __cdecl Item_ListBox_MaxScroll(struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Script_ScriptMenuResponse(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

int __cdecl Item_Bind_HandleKey(struct displayContextDef_s * dc, struct itemDef_s * item, int key, int down)
{	UNIMPLEMENTED();
}

void __cdecl Item_Bind_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_Slider_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_YesNo_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_TextField_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

int __cdecl Item_ListBox_HandleKey(struct displayContextDef_s * dc, struct itemDef_s * item, int key, int down, int force)
{	UNIMPLEMENTED();
}

int __cdecl Item_ListBox_ThumbPosition(struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecNowOnDvarFloatValue(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecNowOnDvarIntValue(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecNowOnDvarStringValue(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecOnDvarFloatValue(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecOnDvarIntValue(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecOnDvarStringValue(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecNow(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Exec(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Menu_ScrollFeeder(struct displayContextDef_s *,struct menuDef_t *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl Item_ListBox_OverLB(struct itemDef_s * item, float x, float y)
{	UNIMPLEMENTED();
}

int __cdecl Item_ListBox_ThumbDrawPosition(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_ListBox_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_ListBox_MouseEnter(struct itemDef_s * item, float x, float y)
{	UNIMPLEMENTED();
}

int __cdecl Item_HandleKey(struct displayContextDef_s * dc, struct itemDef_s * item, int key, int down)
{	UNIMPLEMENTED();
}

void __cdecl Menu_HandleKey(struct displayContextDef_s * dc, struct menuDef_t * menu, int key, int down)
{	UNIMPLEMENTED();
}

void __cdecl Item_RunScript(struct displayContextDef_s * dc, struct itemDef_s * item, char const * s)
{	UNIMPLEMENTED();
}

void __cdecl Menus_Open(struct displayContextDef_s * dc, struct menuDef_t * menu)
{	UNIMPLEMENTED();
}

void __cdecl Item_MouseLeave(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_MouseEnter(struct displayContextDef_s * dc, struct itemDef_s * item, float x, float y)
{	UNIMPLEMENTED();
}

int __cdecl Menus_OpenByName(struct displayContextDef_s * dc, char const * p)
{	UNIMPLEMENTED();
}

void __cdecl Script_InGameOpen(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_OpenForGameType(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_Open(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Script_SetFocusByDvar(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl UI_AddMenuList(struct displayContextDef_s * dc, struct MenuList * menuList)
{	UNIMPLEMENTED();
}

void __cdecl Script_SetFocus(struct displayContextDef_s * dc, struct itemDef_s * item, char const * * args)
{	UNIMPLEMENTED();
}

void __cdecl Window_Paint(struct displayContextDef_s * dc, struct windowDef_t * w, float fadeAmount, float fadeInAmount, float fadeClamp, float fadeCycle)
{	UNIMPLEMENTED();
}

void __cdecl Item_OwnerDraw_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Item_Paint(struct displayContextDef_s * dc, struct itemDef_s * item)
{	UNIMPLEMENTED();
}

void __cdecl Menu_Paint(struct displayContextDef_s * dc, struct menuDef_t * menu, int forcePaint)
{	UNIMPLEMENTED();
}

void __cdecl Menu_PaintAll(struct displayContextDef_s * dc)
{	UNIMPLEMENTED();
}

int scriptCommandCount;
struct commandDef_t * commandList;
int g_waitingForKey;
int g_editingField;
struct itemDef_s * g_editItem;
void __cdecl GetPlatformCommand(char const *,char const * *)
{	UNIMPLEMENTED();
}

bool __cdecl Item_IsTextField(struct itemDef_s *)
{	UNIMPLEMENTED();
}

int __cdecl Item_List_NextEntryForKey(int,int,int)
{	UNIMPLEMENTED();
}

int __cdecl Item_DvarEnum_CountSettings(struct itemDef_s *)
{	UNIMPLEMENTED();
}

bool __cdecl Script_ExecIfIntsEqual(char const *,char const *)
{	UNIMPLEMENTED();
}

int __cdecl Menus_MenuIsInStack(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

int __cdecl Menus_RemoveFromStack(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

int __cdecl Menus_IsMenuOnStack(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

void __cdecl Window_CloseCinematic(struct windowDef_t *)
{	UNIMPLEMENTED();
}

int __cdecl Item_Multi_CountSettings(struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Menus_AddToStack(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

void __cdecl Controls_GetKeyAssignment(char *,int *)
{	UNIMPLEMENTED();
}

struct rectDef_s * __cdecl Item_CorrectedTextRect(struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Menu_CloseCinematics(struct menuDef_t *)
{	UNIMPLEMENTED();
}

void __cdecl Item_TextField_BeginEdit(struct itemDef_s *)
{	UNIMPLEMENTED();
}

int __cdecl Item_DvarEnum_EnumIndex(struct itemDef_s *)
{	UNIMPLEMENTED();
}

char const * __cdecl Item_Multi_Setting(struct itemDef_s *)
{	UNIMPLEMENTED();
}

int __cdecl Item_Multi_FindDvarByValue(struct itemDef_s *)
{	UNIMPLEMENTED();
}

bool __cdecl Script_ExecIfStringsEqual(char const *,char const *)
{	UNIMPLEMENTED();
}

struct Font_s * __cdecl Item_GetFont(struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Display_CloseCinematics(struct displayContextDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Item_TextField_EnsureCursorVisible(struct itemDef_s *,char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Item_DvarEnum_Setting(struct itemDef_s *)
{	UNIMPLEMENTED();
}

bool __cdecl Script_ExecIfFloatsEqual(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Menu_RunCloseScript(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

void __cdecl Scroll_Slider_SetThumbPos(struct displayContextDef_s *,struct itemDef_s *)
{	UNIMPLEMENTED();
}

int __cdecl Item_DvarEnum_HandleKey(struct displayContextDef_s *,struct itemDef_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl Item_Multi_HandleKey(struct displayContextDef_s *,struct itemDef_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl Scroll_Slider_ThumbFunc(struct displayContextDef_s *,void *)
{	UNIMPLEMENTED();
}

void __cdecl Script_ConditionalExecHandler(int,struct itemDef_s *,char const * *,bool (__cdecl*)(char const *,char const *))
{	UNIMPLEMENTED();
}

void __cdecl Script_ExecHandler(int,struct itemDef_s *,char const * *)
{	UNIMPLEMENTED();
}

void __cdecl Item_List_Paint(struct displayContextDef_s *,struct itemDef_s *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Item_DvarEnum_Paint(struct displayContextDef_s *,struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Item_Multi_Paint(struct displayContextDef_s *,struct itemDef_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scroll_ListBox_ThumbFunc(struct displayContextDef_s *,void *)
{	UNIMPLEMENTED();
}

void __cdecl Scroll_ListBox_AutoFunc(struct displayContextDef_s *,void *)
{	UNIMPLEMENTED();
}

void __cdecl Item_StartCapture(struct displayContextDef_s *,struct itemDef_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl UI_AddMenu(struct displayContextDef_s *,struct menuDef_t *)
{	UNIMPLEMENTED();
}

Menu_HandleMouseMove(displayContextDef_s* dc,  menuDef_t* menu,  float x,  float y)
{	UNIMPLEMENTED();
}

Display_MouseMove(displayContextDef_s* dc,  void* p,  int x,  int y)
{	UNIMPLEMENTED();
}

Menus_HandleOOBClick(displayContextDef_s* dc,  menuDef_t* menu,  int key,  int down)
{	UNIMPLEMENTED();
}

