bool __cdecl Vec2Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl Vec4Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

float const * __cdecl Dvar_GetFloat2(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UpdateEnumDomain(struct dvar_s const *,char const * * const)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DomainToString_GetLines(unsigned char,union DvarLimits,char *,int,int *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DomainToString(unsigned char,union DvarLimits,char *,int)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DisplayableLatchedValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DisplayableResetValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Shutdown(void)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_PrintDomain(unsigned char,union DvarLimits)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_GetUnpackedColor(struct dvar_s const *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ClearLatchedValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetCheatState(void)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UnregisterSystem(int)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_SetFromStringByNameFromSource(char const *,char const *,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFromString(struct dvar_s const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColor(struct dvar_s const *,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetString(struct dvar_s const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec4(struct dvar_s const *,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetCommand(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColorByName(char const *,unsigned char,unsigned char,unsigned char,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec4ByName(char const *,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec2ByName(char const *,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFloatByName(char const *,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBoolByName(char const *,bool)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVec3(char const *,float,float,float,float,float,unsigned short)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVec2(char const *,float,float,float,float,unsigned short)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterFloat(char const *,float,float,float,unsigned short)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterBool(char const *,bool,unsigned short)
{	UNIMPLEMENTED();
}

int __cdecl Com_LoadDvarsFromBuffer(char const * * const,int,char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Init(void)
{	UNIMPLEMENTED();
}

int dvar_modifiedFlags;
int dvarCount;
bool __cdecl Dvar_ValuesEqual(unsigned char,union DvarValue,union DvarValue)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_ValueInDomain(unsigned char,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_StringToEnum(union DvarLimits const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeResetString(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeCurrentString(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_StringToColor(char const *,unsigned char * const)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetLatchedValue(struct dvar_s *,union DvarValue)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVariant(struct dvar_s *,union DvarValue,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFromStringFromSource(struct dvar_s const *,char const *,enum DvarSetSource)
{	UNIMPLEMENTED();
}

long __cdecl generateHashValue(char const *)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterNew(char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

