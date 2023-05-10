float const * const colorBlack;
float const * const colorRed;
float const * const colorGreen;
float const * const colorLtGreen;
float const * const colorBlue;
float const * const colorLtBlue;
float const * const colorYellow;
float const * const colorLtYellow;
float const * const colorMdYellow;
float const * const colorMagenta;
float const * const colorCyan;
float const * const colorLtCyan;
float const * const colorMdCyan;
float const * const colorDkCyan;
float const * const colorWhite;
float const * const colorLtGrey;
float const * const colorMdGrey;
float const * const colorDkGrey;
float const * const colorOrange;
float const * const colorLtOrange;
float __cdecl IntAsFloat(int)
{	UNIMPLEMENTED();
}

int __cdecl Info_Validate(char const * s)
{	UNIMPLEMENTED();
}

void __cdecl Info_RemoveKey(char * s, char const * key)
{	UNIMPLEMENTED();
}

void __cdecl Info_NextPair(char const * * head, char * key, char * value)
{	UNIMPLEMENTED();
}

void __cdecl ConvertWCharToChar(unsigned short const *,char *,int)
{	UNIMPLEMENTED();
}

int __cdecl Com_sprintf(char * dest, int size, char const * fmt, ...)
{	UNIMPLEMENTED();
}

char __cdecl I_CleanChar(char character)
{	UNIMPLEMENTED();
}

char * __cdecl I_CleanStr(char * string)
{	UNIMPLEMENTED();
}

int __cdecl I_DrawStrlen(char const * str)
{	UNIMPLEMENTED();
}

void __cdecl I_strncpyz(char * dest, char const * src, int destsize)
{	UNIMPLEMENTED();
}

bool __cdecl I_isdigit(int c)
{	UNIMPLEMENTED();
}

bool __cdecl I_isalpha(int)
{	UNIMPLEMENTED();
}

bool __cdecl I_isupper(int c)
{	UNIMPLEMENTED();
}

bool __cdecl I_islower(int c)
{	UNIMPLEMENTED();
}

bool __cdecl I_isprint(int)
{	UNIMPLEMENTED();
}

int __cdecl FloatWriteSwap(float f)
{	UNIMPLEMENTED();
}

float __cdecl FloatReadSwap(int n)
{	UNIMPLEMENTED();
}

unsigned __int64 __cdecl Long64NoSwap(unsigned __int64 ll)
{	UNIMPLEMENTED();
}

unsigned __int64 __cdecl Long64Swap(unsigned __int64 l)
{	UNIMPLEMENTED();
}

int __cdecl LongNoSwap(int l)
{	UNIMPLEMENTED();
}

int __cdecl LongSwap(int l)
{	UNIMPLEMENTED();
}

short __cdecl ShortNoSwap(short l)
{	UNIMPLEMENTED();
}

short __cdecl ShortSwap(short l)
{	UNIMPLEMENTED();
}

int __cdecl LittleFloatWrite_Util(float)
{	UNIMPLEMENTED();
}

float __cdecl LittleFloatRead_Util(int)
{	UNIMPLEMENTED();
}

unsigned __int64 __cdecl LittleLong64(unsigned __int64)
{	UNIMPLEMENTED();
}

void __cdecl Com_DefaultExtension(char * path, int maxSize, char const * extension)
{	UNIMPLEMENTED();
}

char const * __cdecl Com_GetExtensionSubString(char const * filename)
{	UNIMPLEMENTED();
}

char * __cdecl Com_SkipPath(char * pathname)
{	UNIMPLEMENTED();
}

unsigned char __cdecl ColorIndex(unsigned char c)
{	UNIMPLEMENTED();
}

float __cdecl UnGetLeanFraction(float fFrac)
{	UNIMPLEMENTED();
}

void __cdecl Info_SetValueForKey(char * s, char const * key, char const * value)
{	UNIMPLEMENTED();
}

void __cdecl Com_InitThreadData(int threadContext)
{	UNIMPLEMENTED();
}

void __cdecl I_strncat(char * dest, int size, char const * src)
{	UNIMPLEMENTED();
}

char * __cdecl I_strupr(char * s)
{	UNIMPLEMENTED();
}

char * __cdecl I_strlwr(char * s)
{	UNIMPLEMENTED();
}

bool __cdecl I_isalnum(int)
{	UNIMPLEMENTED();
}

int __cdecl FloatWriteNoSwap(float f)
{	UNIMPLEMENTED();
}

float __cdecl FloatReadNoSwap(int n)
{	UNIMPLEMENTED();
}

void __cdecl Com_StripFilename(char const *,char *)
{	UNIMPLEMENTED();
}

void __cdecl Com_StripExtension(char const * in, char * out)
{	UNIMPLEMENTED();
}

bool __cdecl I_isforfilename(int c)
{	UNIMPLEMENTED();
}

float __cdecl GetLeanFraction(float)
{	UNIMPLEMENTED();
}

char * __cdecl Info_ValueForKey(char const * s, char const * key)
{	UNIMPLEMENTED();
}

void __cdecl AddLeanToPosition(float * const position, float fViewYaw, float fLeanFrac, float fViewRoll, float fLeanDist)
{	UNIMPLEMENTED();
}

int __cdecl ParseConfigStringToStruct(unsigned char *,struct cspField_t const *,int,char const *,int,int (__cdecl*)(unsigned char *,char const *,int),void (__cdecl*)(unsigned char *,char const *))
{	UNIMPLEMENTED();
}

void __cdecl Info_RemoveKey_Big(char * s, char const * key)
{	UNIMPLEMENTED();
}

void __cdecl Com_AssembleFilepath(char const *,char const *,char const *,char *,int)
{	UNIMPLEMENTED();
}

void __cdecl Info_SetValueForKey_Big(char * s, char const * key, char const * value)
{	UNIMPLEMENTED();
}

int marker_q_shared;
struct TraceThreadInfo * g_traceThreadInfo;
