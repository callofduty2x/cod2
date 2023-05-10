char * __cdecl strchr(char *,int)
{	UNIMPLEMENTED();
}

char * __cdecl Key_GetBinding(int keynum)
{	UNIMPLEMENTED();
}

bool __cdecl Key_IsValidGamePadChar(char)
{	UNIMPLEMENTED();
}

int __cdecl Key_IsDown(int)
{	UNIMPLEMENTED();
}

void __cdecl Key_SetOverstrikeMode(int state)
{	UNIMPLEMENTED();
}

int __cdecl Key_GetOverstrikeMode()
{	UNIMPLEMENTED();
}

void __cdecl CL_Keys_SwitchToLocalClient(int)
{	UNIMPLEMENTED();
}

char * __cdecl Key_KeynumToString(int keynum, int translate)
{	UNIMPLEMENTED();
}

void __cdecl Key_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl Key_AppendBindingsToConfig(char *)
{	UNIMPLEMENTED();
}

void __cdecl Key_WriteBindings(int f)
{	UNIMPLEMENTED();
}

int __cdecl Key_GetKey(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Key_SetBinding(int keynum, char const * binding)
{	UNIMPLEMENTED();
}

void __cdecl Field_AdjustScroll(struct field_t * edit)
{	UNIMPLEMENTED();
}

void __cdecl Field_Draw(struct field_t * edit, int x, int y, int horzAlign, int vertAlign, int showCursor)
{	UNIMPLEMENTED();
}

void __cdecl Key_Unbindall_f()
{	UNIMPLEMENTED();
}

void __cdecl Field_CharEvent(struct field_t * edit, int ch)
{	UNIMPLEMENTED();
}

void __cdecl Field_Paste(struct field_t *)
{	UNIMPLEMENTED();
}

void __cdecl Field_KeyDownEvent(struct field_t * edit, int key)
{	UNIMPLEMENTED();
}

void __cdecl Message_Key(int key)
{	UNIMPLEMENTED();
}

void __cdecl Console_Key(int key)
{	UNIMPLEMENTED();
}

void __cdecl CL_CharEvent(int key)
{	UNIMPLEMENTED();
}

void __cdecl CL_KeyEvent(int key, int down, unsigned int time)
{	UNIMPLEMENTED();
}

void __cdecl Key_ClearStates()
{	UNIMPLEMENTED();
}

void __cdecl Key_Bindlist_f()
{	UNIMPLEMENTED();
}

void __cdecl Key_Bind_f()
{	UNIMPLEMENTED();
}

void __cdecl Key_Unbind_f()
{	UNIMPLEMENTED();
}

void __cdecl CL_InitKeyCommands()
{	UNIMPLEMENTED();
}

struct field_t * chatField;
int * chat_team;
int * key_overstrikeMode;
int * anykeydown;
struct qkey_t * keys;
struct keyname_t * keynames;
struct keyname_t * keynames_localized;
char * * frenchNumberKeysMap;
int historyLine;
int nextHistoryLine;
struct field_t g_consoleField;
struct PlayerKeyState * playerKeys;
struct field_t * historyEditLines;
void __cdecl CompleteCmdArgument(void)
{	UNIMPLEMENTED();
}

void __cdecl ReplaceConsoleInputArgument(int,char const *)
{	UNIMPLEMENTED();
}

bool __cdecl Console_IsRconCmd(char const *)
{	UNIMPLEMENTED();
}

void __cdecl keyConcatArgs(void)
{	UNIMPLEMENTED();
}

void __cdecl PrintMatches(char const *)
{	UNIMPLEMENTED();
}

void __cdecl FindMatches(char const *)
{	UNIMPLEMENTED();
}

int __cdecl Key_StringToKeynum(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ConcatRemaining(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl CompleteDvarArgument(void)
{	UNIMPLEMENTED();
}

void __cdecl CompleteCommand(void)
{	UNIMPLEMENTED();
}

