float __cdecl ceil(float)
{	UNIMPLEMENTED();
}

void __cdecl Vec4Scale(float const * const,float,float * const)
{	UNIMPLEMENTED();
}

int __cdecl I_strlen(char const *)
{	UNIMPLEMENTED();
}

bool __cdecl Con_IsActive()
{	UNIMPLEMENTED();
}

void __cdecl Con_Bottom()
{	UNIMPLEMENTED();
}

void __cdecl Con_Top()
{	UNIMPLEMENTED();
}

void __cdecl Con_PageDown()
{	UNIMPLEMENTED();
}

void __cdecl Con_PageUp()
{	UNIMPLEMENTED();
}

void __cdecl Con_ToggleConsoleOutput()
{	UNIMPLEMENTED();
}

bool __cdecl Con_AnySpaceAfterCommand()
{	UNIMPLEMENTED();
}

void __cdecl Con_AutoCompleteFromList(char const * * const strings, int stringCount, char const * prefix, char * const completed, int sizeofCompleted)
{	UNIMPLEMENTED();
}

void __cdecl CL_ConsoleFixPosition()
{	UNIMPLEMENTED();
}

void __cdecl Con_OpenConsoleOutput(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_ToggleConsole_f()
{	UNIMPLEMENTED();
}

void __cdecl Con_SwitchToLocalClient(int)
{	UNIMPLEMENTED();
}

unsigned char __cdecl CL_GetHudMsgIconMaterialIndex(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetHudMsgIconMaterialName(unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl Con_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl Con_ClearSubtitles()
{	UNIMPLEMENTED();
}

void __cdecl Con_ClearNotify()
{	UNIMPLEMENTED();
}

void __cdecl Con_CloseConsole(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_OpenConsole(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_Close()
{	UNIMPLEMENTED();
}

char const * __cdecl Con_TokenizeInput()
{	UNIMPLEMENTED();
}

void __cdecl CL_RegisterHudMsgIconMaterial(char const * name)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawSolidConsole(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawSubtitles(int xPos, int yPos, int charHeight, float alpha, enum msgwnd_mode_t mode)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawMiniConsole(int xPos, int yPos, float alpha)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawBoldMessages(int xPos, int yPos, float alpha, enum msgwnd_mode_t mode)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawNotify(int xPos, int yPos, float alpha, enum msgwnd_mode_t mode)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawConsole()
{	UNIMPLEMENTED();
}

void __cdecl CL_DeathMessagePrint(char const * attackerName, float const * const attackerColor, char const * victimName, float const * const victimColor, char const * iconShader, float iconWidth, float iconHeight, float const * const iconColor, bool horzFlipIcon)
{	UNIMPLEMENTED();
}

void __cdecl CL_ConsolePrint(enum print_msg_type_t type, char const * txt, int duration, int linewidth)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawSay(int y)
{	UNIMPLEMENTED();
}

void __cdecl Con_Init()
{	UNIMPLEMENTED();
}

int g_console_field_width;
float g_console_char_height;
struct dvar_s const * const con_restricted;
struct dvar_s const * const con_boldgamemessagetime;
struct dvar_s const * const con_gamemessagetime;
struct dvar_s const * const con_minicontime;
struct dvar_s const * const con_miniconlines;
int __cdecl ConDrawInput_TextFieldFirstArgChar(void)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_Over(int)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_Newline(void)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_TextLimitChars(char const *,int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_Text(char const *,float const * const)
{	UNIMPLEMENTED();
}

int __cdecl ConDrawInput_TextWidth(char const *)
{	UNIMPLEMENTED();
}

int __cdecl ConDrawInput_TextHeight(struct Font_s *)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddDeathMessageText(char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddConsoleInfoChar(int,int)
{	UNIMPLEMENTED();
}

void __cdecl Con_CopyCurrentConsoleLineText(struct MessageLine *)
{	UNIMPLEMENTED();
}

void __cdecl Con_InitMessageWindow(struct MessageWindow *,struct MessageLine *,int,int,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Con_ClearMessageWindow(struct MessageWindow *)
{	UNIMPLEMENTED();
}

void __cdecl Con_Clear_f(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_ChatModeTeam_f(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_ChatModePublic_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownHudMsgIconMaterials(void)
{	UNIMPLEMENTED();
}

char const * __cdecl Con_GetVersionString(void)
{	UNIMPLEMENTED();
}

bool __cdecl ConDrawInput_StringMatchesInputText(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ConDraw_Box(float,float,float,float,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_TextAndOver(char const *,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl Con_InitMessageBuffer(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_UpdateMessageWindowLine(struct MessageWindow *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Con_ClearMiniConsole(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawOutputVersion(float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawOutputText(float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawOutputScrollBar(float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_CmdMatch(char const *)
{	UNIMPLEMENTED();
}

int __cdecl ConDrawInput_CompareStrings(void const *,void const *)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_DvarMatch(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_IncrMatchCounter(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_Box(int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddConsoleInfoColor(int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl Con_UpdateNotifyLine(enum print_msg_type_t,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Con_CheckResize(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawOuputWindow(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawStringOnHUD(int,int,int,int,int,short const *,int,float,float,int)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_DetailedCmdMatch(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_AutoCompleteArg(char const * * const,int)
{	UNIMPLEMENTED();
}

void __cdecl Con_Linefeed(enum print_msg_type_t,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitHudMsgIconMaterials(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawMessageWindowBottomUp(struct MessageWindow *,int,int,int,int,int,float,float,int)
{	UNIMPLEMENTED();
}

void __cdecl ConDrawInput_DetailedDvarMatch(char const *)
{	UNIMPLEMENTED();
}

int __cdecl CL_ConsolePrint_AddLine(enum print_msg_type_t,char const *,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawMessageWindow(struct MessageWindow *,int,int,int,int,int,float,float,enum msgwnd_mode_t)
{	UNIMPLEMENTED();
}

void __cdecl Con_DrawInput(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_OneTimeInit(void)
{	UNIMPLEMENTED();
}

void __cdecl Con_Dump_f(void)
{	UNIMPLEMENTED();
}

