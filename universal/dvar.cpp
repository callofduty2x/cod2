bool __cdecl Vec2Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl Vec4Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl Byte4Compare(unsigned char const * const,unsigned char const * const)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ResetScriptInfo()
{	UNIMPLEMENTED();
}

void __cdecl Dvar_AddFlags(struct dvar_s const * dvar, int flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterString(char const * dvarName, char const * value, unsigned short flags)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetModified(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ClearModified(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_FindVar(char const * dvarName)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_EnumToString(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_IsValidName(char const * dvarName)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_IsSystemActive()
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetInAutoExec(bool inAutoExec)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_GetString(char const * dvarName)
{	UNIMPLEMENTED();
}

float __cdecl Dvar_GetFloat(char const * dvarName)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_GetInt(char const * dvarName)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_GetBool(char const * dvarName)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_IndexStringToEnumString(struct dvar_s const * dvar, char const * indexString)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_GetVariantString(char const * dvarName)
{	UNIMPLEMENTED();
}

float const * __cdecl Dvar_GetFloat4(char const *)
{	UNIMPLEMENTED();
}

float const * __cdecl Dvar_GetFloat3(char const *)
{	UNIMPLEMENTED();
}

float const * __cdecl Dvar_GetFloat2(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UpdateEnumDomain(struct dvar_s const * dvar, char const * * const stringTable)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_IsAtDefaultValue(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_HasLatchedValue(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DomainToString_GetLines(unsigned char type, union DvarLimits domain, char * outBuffer, int outBufferLen, int * outLineCount)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DomainToString(unsigned char,union DvarLimits,char *,int)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DisplayableLatchedValue(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DisplayableResetValue(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DisplayableValue(struct dvar_s const * dvar)
{	UNIMPLEMENTED();
}

int __cdecl Com_SaveDvarsToBuffer(char const * * const dvarnames, int numDvars, char * buffer, int bufsize)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_SerializeDvars(char *,unsigned int)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_AnyLatchedValues()
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl Dvar_PrintDomain(unsigned char type, union DvarLimits domain)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_GetUnpackedColor(struct dvar_s const * dvar, float * const expandedColor)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_GetUnpackedColorByName(char const * dvarName, float * const expandedColor)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ClearLatchedValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ChangeResetValue(struct dvar_s const * dvar, union DvarValue value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Unregister(struct dvar_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetCheatState()
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Reset(struct dvar_s const * dvar, enum DvarSetSource setSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColorFromSource(struct dvar_s const * dvar, float r, float g, float b, float a, enum DvarSetSource source)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec4FromSource(struct dvar_s const *,float,float,float,float,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec3FromSource(struct dvar_s const *,float,float,float,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec2FromSource(struct dvar_s const *,float,float,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFloatFromSource(struct dvar_s const * dvar, float value, enum DvarSetSource source)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetIntFromSource(struct dvar_s const * dvar, int value, enum DvarSetSource source)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBoolFromSource(struct dvar_s const * dvar, bool value, enum DvarSetSource source)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_MakeLatchedValueCurrent(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UnregisterSystem(int sysFlag)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ResetDvars(unsigned int filter, enum DvarSetSource setSource)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_SetFromStringByNameFromSource(char const * dvarName, char const * string, enum DvarSetSource source)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFromString(struct dvar_s const * dvar, char const * string)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColor(struct dvar_s const * dvar, float r, float g, float b, float a)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetString(struct dvar_s const * dvar, char const * value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec4(struct dvar_s const * dvar, float x, float y, float z, float w)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec3(struct dvar_s const * dvar, float x, float y, float z)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec2(struct dvar_s const * dvar, float x, float y)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFloat(struct dvar_s const * dvar, float value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetInt(struct dvar_s const * dvar, int value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBool(struct dvar_s const * dvar, bool value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetCommand(char const * dvarName, char const * string)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFromStringByName(char const * dvarName, char const * string)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColorByName(char const * dvarName, unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetStringByName(char const * dvarName, char const * value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec4ByName(char const * dvarName, float x, float y, float z, float w)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec3ByName(char const * dvarName, float x, float y, float z)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec2ByName(char const * dvarName, float x, float y)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFloatByName(char const * dvarName, float value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetIntByName(char const * dvarName, int value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBoolByName(char const * dvarName, bool value)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_DeserializeDvars(char const *,int)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterColor(char const * dvarName, float r, float g, float b, float a, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterEnum(char const * dvarName, char const * * const valueList, int defaultIndex, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVec4(char const * dvarName, float x, float y, float z, float w, float min, float max, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVec3(char const * dvarName, float x, float y, float z, float min, float max, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVec2(char const * dvarName, float x, float y, float min, float max, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterFloat(char const * dvarName, float value, float min, float max, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterInt(char const * dvarName, int value, int min, int max, unsigned short flags)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterBool(char const * dvarName, bool value, unsigned short flags)
{	UNIMPLEMENTED();
}

int __cdecl Com_LoadDvarsFromBuffer(char const * * const dvarnames, int numDvars, char const * buffer, char const * filename)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Init()
{	UNIMPLEMENTED();
}

int dvar_modifiedFlags;
int dvarCount;
int marker_dvar;
struct dvar_s * sortedDvars;
void __cdecl Dvar_UpdateSystems(struct dvar_s *,char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

union DvarValue __cdecl Dvar_GetReinterpretedResetValue(struct dvar_s *,union DvarValue,unsigned char,unsigned short,union DvarLimits)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_VectorDomainToString(int,union DvarLimits,char *,int)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_VectorInDomain(float const *,int,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ClampVectorToDomain(float *,int,float,float)
{	UNIMPLEMENTED();
}

float __cdecl Dvar_StringToFloat(char const *)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_StringToInt(char const *)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_StringToBool(char const *)
{	UNIMPLEMENTED();
}

float * __cdecl Dvar_TempVec(int)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_ValuesEqual(unsigned char,union DvarValue,union DvarValue)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_DomainToString_Internal(unsigned char,union DvarLimits,char *,int,int *)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_ValueInDomain(unsigned char,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

union DvarValue __cdecl Dvar_ClampValueToDomain(unsigned char,union DvarValue,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_StringToEnum(union DvarLimits const *,char const *)
{	UNIMPLEMENTED();
}

float * __cdecl Dvar_StringToVec4(char const *)
{	UNIMPLEMENTED();
}

float * __cdecl Dvar_StringToVec3(char const *)
{	UNIMPLEMENTED();
}

float * __cdecl Dvar_StringToVec2(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_ValueToString(struct dvar_s const *,union DvarValue)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeString(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeNameString(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeVectorMemory(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeResetString(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeLatchedString(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_FreeCurrentString(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_StringToColor(char const *,unsigned char * const)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_AllocVectorMemory(struct dvar_s *)
{	UNIMPLEMENTED();
}

union DvarValue __cdecl Dvar_StringToValue(unsigned char,union DvarLimits,char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_CopyString(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_AllocNameString(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_AssignResetString(struct dvar_s *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_AssignLatchedString(struct dvar_s *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_AssignCurrentString(struct dvar_s *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UpdateValue(struct dvar_s *,union DvarValue)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UpdateResetValue(struct dvar_s *,union DvarValue)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_PerformUnregistration(struct dvar_s *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetLatchedValue(struct dvar_s *,union DvarValue)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_MakeExplicitType(struct dvar_s *,char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVariant(struct dvar_s *,union DvarValue,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFromStringFromSource(struct dvar_s const *,char const *,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetStringFromSource(struct dvar_s const *,char const *,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ReinterpretDvar(struct dvar_s *,char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Reregister(struct dvar_s *,char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

long __cdecl generateHashValue(char const *)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterNew(char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

struct dvar_s * __cdecl Dvar_FindMalleableVar(char const *)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVariant(char const *,unsigned char,unsigned short,union DvarValue,union DvarLimits)
{	UNIMPLEMENTED();
}

