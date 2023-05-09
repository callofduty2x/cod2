bool __cdecl Vec2Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl Vec4Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl Byte4Compare(unsigned char const * const,unsigned char const * const)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ResetScriptInfo(void)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_AddFlags(struct dvar_s const *,int)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterString(char const *,char const *,unsigned short)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetModified(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ClearModified(struct dvar_s const *)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_FindVar(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_EnumToString(struct dvar_s const *)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_IsValidName(char const *)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_IsSystemActive(void)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetInAutoExec(bool)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_GetString(char const *)
{	UNIMPLEMENTED();
}

float __cdecl Dvar_GetFloat(char const *)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_GetInt(char const *)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_GetBool(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_IndexStringToEnumString(struct dvar_s const *,char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Dvar_GetVariantString(char const *)
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

void __cdecl Dvar_UpdateEnumDomain(struct dvar_s const *,char const * * const)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_IsAtDefaultValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_HasLatchedValue(struct dvar_s const *)
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

char const * __cdecl Dvar_DisplayableValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

int __cdecl Com_SaveDvarsToBuffer(char const * * const,int,char *,int)
{	UNIMPLEMENTED();
}

int __cdecl Dvar_SerializeDvars(char *,unsigned int)
{	UNIMPLEMENTED();
}

bool __cdecl Dvar_AnyLatchedValues(void)
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

void __cdecl Dvar_GetUnpackedColorByName(char const *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ClearLatchedValue(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ChangeResetValue(struct dvar_s const *,union DvarValue)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Unregister(struct dvar_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetCheatState(void)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_Reset(struct dvar_s const *,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColorFromSource(struct dvar_s const *,float,float,float,float,enum DvarSetSource)
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

void __cdecl Dvar_SetFloatFromSource(struct dvar_s const *,float,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetIntFromSource(struct dvar_s const *,int,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBoolFromSource(struct dvar_s const *,bool,enum DvarSetSource)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_MakeLatchedValueCurrent(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_UnregisterSystem(int)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_ResetDvars(unsigned int,enum DvarSetSource)
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

void __cdecl Dvar_SetVec3(struct dvar_s const *,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec2(struct dvar_s const *,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFloat(struct dvar_s const *,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetInt(struct dvar_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBool(struct dvar_s const *,bool)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetCommand(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFromStringByName(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetColorByName(char const *,unsigned char,unsigned char,unsigned char,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetStringByName(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec4ByName(char const *,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec3ByName(char const *,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetVec2ByName(char const *,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetFloatByName(char const *,float)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetIntByName(char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_SetBoolByName(char const *,bool)
{	UNIMPLEMENTED();
}

void __cdecl Dvar_DeserializeDvars(char const *,int)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterColor(char const *,float,float,float,float,unsigned short)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterEnum(char const *,char const * * const,int,unsigned short)
{	UNIMPLEMENTED();
}

struct dvar_s const * __cdecl Dvar_RegisterVec4(char const *,float,float,float,float,float,float,unsigned short)
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

struct dvar_s const * __cdecl Dvar_RegisterInt(char const *,int,int,int,unsigned short)
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

