int __cdecl Scr_GetClassnumForCharId(char charId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_GetChecksum(int * const)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_FindField(char const *, int *)
{	UNIMPLEMENTED();
}

struct scr_entref_t __cdecl Scr_GetEntityIdRef(unsigned int entId)
{	UNIMPLEMENTED();
}

int __cdecl GetVarType(unsigned int)
{	UNIMPLEMENTED();
}

bool __cdecl IsVarFree(unsigned int id)
{	UNIMPLEMENTED();
}

int __cdecl Scr_GetEntNum(unsigned int)
{	UNIMPLEMENTED();
}

char __cdecl Scr_GetEntClassId(unsigned int)
{	UNIMPLEMENTED();
}

int __cdecl Scr_IsThreadAlive(unsigned int)
{	UNIMPLEMENTED();
}

bool __cdecl IsFieldObject(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindObject(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetVariableName(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindPrevSibling(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindNextSibling(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetArraySize(unsigned int id)
{	UNIMPLEMENTED();
}

union VariableUnion * __cdecl GetVariableValueAddress(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl SetNewVariableValue(unsigned int id, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

struct VariableValue_s __cdecl Scr_GetArrayIndexValue(unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetInternalVariableIndex(unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

bool __cdecl IsValidArrayIndex(unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

void __cdecl AddRefToVector(float const *)
{	UNIMPLEMENTED();
}

int __cdecl Scr_GetRefCountToObject(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl AddRefToObject(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_GetSelf(unsigned int threadId)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetStartLocalId(unsigned int threadId)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetSafeParentLocalId(unsigned int threadId)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetParentLocalId(unsigned int threadId)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_GetThreadWaitTime(unsigned int startLocalId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ClearWaitTime(unsigned int startLocalId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetThreadWaitTime(unsigned int startLocalId, unsigned int waitTime)
{	UNIMPLEMENTED();
}

unsigned short __cdecl Scr_GetThreadNotifyName(unsigned int startLocalId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RemoveThreadEmptyNotifyName(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetThreadNotifyName(unsigned int startLocalId, unsigned int stringValue)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetVariableKeyObject(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_GetNumScriptVars()
{	UNIMPLEMENTED();
}

void __cdecl Scr_DumpScriptVariables()
{	UNIMPLEMENTED();
}

bool __cdecl IsObjectId(unsigned int)
{	UNIMPLEMENTED();
}

bool __cdecl IsObject(struct VariableValueInternal *)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_EvalVariableObject(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl RemoveRefToEmptyObject(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl Var_Init()
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindObjectVariable(unsigned int parentId, unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindVariable(unsigned int parentId, unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

void __cdecl AddRefToValue(int type, union VariableUnion u)
{	UNIMPLEMENTED();
}

int __cdecl Scr_GetOffset(int classnum, char const * name)
{	UNIMPLEMENTED();
}

struct VariableValue_s __cdecl Scr_EvalVariable(unsigned int id)
{	UNIMPLEMENTED();
}

int __cdecl Scr_FindAllVariableField(unsigned int,unsigned int *)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindArrayVariable(unsigned int parentId, int intValue)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindEntityId(int entnum, int classnum)
{	UNIMPLEMENTED();
}

void __cdecl Scr_DumpScriptThreads()
{	UNIMPLEMENTED();
}

unsigned int __cdecl AllocChildThread(unsigned int self, unsigned int parentLocalId)
{	UNIMPLEMENTED();
}

unsigned int __cdecl AllocThread(unsigned int self)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_AllocArray()
{	UNIMPLEMENTED();
}

unsigned int __cdecl AllocObject()
{	UNIMPLEMENTED();
}

unsigned int __cdecl AllocValue()
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_InitStringSet(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetClassMap(int classnum)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetArray(unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetObject(unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewObjectVariableReverse(unsigned int parentId, unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewObjectVariable(unsigned int parentId, unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetObjectVariable(unsigned int parentId, unsigned int id)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewVariable(unsigned int parentId, unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetVariable(unsigned int parentId, unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_GetVariableField(unsigned int parentId, unsigned int name)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewArrayVariable(unsigned int parentId, unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetArrayVariable(unsigned int parentId, unsigned int unsignedValue)
{	UNIMPLEMENTED();
}

void __cdecl RemoveRefToVector(float const * vectorValue)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_EvalArrayIndex(unsigned int parentId, struct VariableValue_s * index)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_GetEntityId(int entnum, int classnum)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AddClassField(int classnum, char const * name, unsigned int offset)
{	UNIMPLEMENTED();
}

void __cdecl RemoveRefToValue(int type, union VariableUnion u)
{	UNIMPLEMENTED();
}

float const * __cdecl Scr_AllocVector(float const * v)
{	UNIMPLEMENTED();
}

void __cdecl FreeValue(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RemoveThreadNotifyName(unsigned int startLocalId)
{	UNIMPLEMENTED();
}

void __cdecl Var_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl Scr_CopyEntityNum(int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ClearVector(struct VariableValue_s *)
{	UNIMPLEMENTED();
}

bool __cdecl Scr_CastString(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CastBool(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalBoolComplement(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalBoolNot(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl ClearVariableValue(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl SetVariableValue(unsigned int id, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl SetEmptyArray(unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_EvalFieldObject(unsigned int tempVariable, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CastVector(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CastDebugString(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl SafeRemoveVariable(unsigned int parentId parentId,  unsigned int unsignedValue unsignedValue)
{	UNIMPLEMENTED();
}

void __cdecl RemoveNextVariable(unsigned int parentId)
{	UNIMPLEMENTED();
}

void __cdecl RemoveVariable(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AllocGameVariable()
{	UNIMPLEMENTED();
}

void __cdecl Scr_UnmatchingTypesError(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl RemoveObjectVariable(unsigned int parentId, unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl ClearObject(unsigned int parentId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_FreeGameVariable(int bComplete)
{	UNIMPLEMENTED();
}

void __cdecl Scr_FreeEntityNum(int entnum, int classnum)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalMod(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalShiftRight(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalShiftLeft(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalAnd(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalExOr(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalOr(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl RemoveRefToObject(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl Scr_KillEndonThread(unsigned int threadId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ShutdownStringSet(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_FreeValue(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalArray(struct VariableValue_s * value, struct VariableValue_s * index)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RemoveClassMap(int classnum)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalDivide(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalMultiply(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalMinus(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalPlus(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalGreater(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalLess(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalEquality(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalSizeValue(struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_KillThread(unsigned int parentId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_StopThread(unsigned int threadId)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalLessEqual(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalGreaterEqual(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalInequality(struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl SetVariableEntityFieldValue(unsigned int entId, unsigned int fieldName, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl ClearVariableField(unsigned int parentId, unsigned int name, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

void __cdecl Scr_FreeObjects()
{	UNIMPLEMENTED();
}

void __cdecl Scr_FreeEntityList()
{	UNIMPLEMENTED();
}

void __cdecl Scr_EvalBinaryOperator(int op, struct VariableValue_s * value1, struct VariableValue_s * value2)
{	UNIMPLEMENTED();
}

void __cdecl SetVariableFieldValue(unsigned int id, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

bool __cdecl Scr_AddStringSet(unsigned int,char const *)
{	UNIMPLEMENTED();
}

void __cdecl ClearArray(unsigned int parentId, struct VariableValue_s * value)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_EvalArrayRef(unsigned int parentId)
{	UNIMPLEMENTED();
}

struct VariableValue_s __cdecl Scr_FindVariableField(unsigned int parentId, unsigned int name)
{	UNIMPLEMENTED();
}

struct VariableValue_s __cdecl Scr_EvalVariableField(unsigned int id)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AddFields(char const * path, char const * extension)
{	UNIMPLEMENTED();
}

struct scr_classStruct_t * g_classMap;
char const * * var_typename;
int marker_scr_variable;
struct scrVarGlob_t scrVarGlob;
struct scrVarDebugPub_t scrVarDebugPub;
struct scrVarPub_t scrVarPub;
float __cdecl Scr_GetEntryUsage(unsigned int,union VariableUnion)
{	UNIMPLEMENTED();
}

void __cdecl FreeVariable(unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindVariableIndexInternal2(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl InitVariables(void)
{	UNIMPLEMENTED();
}

int __cdecl ThreadInfoCompare(void const *,void const *)
{	UNIMPLEMENTED();
}

float __cdecl Scr_GetEntryUsage(struct VariableValueInternal *)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindVariableIndexInternal(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

float __cdecl Scr_GetObjectUsage(unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl FindArrayVariableIndex(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

float __cdecl Scr_GetEndonUsage(unsigned int)
{	UNIMPLEMENTED();
}

float __cdecl Scr_GetThreadUsage(class VariableStackBuffer const *,float *)
{	UNIMPLEMENTED();
}

unsigned short __cdecl AllocVariable(void)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewVariableIndexInternal3(unsigned int,unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl AllocEntity(int,unsigned short)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewVariableIndexReverseInternal2(unsigned int,unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewVariableIndexInternal2(unsigned int,unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetVariableIndexInternal(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewVariableIndexReverseInternal(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewVariableIndexInternal(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl CopyArray(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetNewArrayVariableIndex(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GetArrayVariableIndex(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl CopyEntity(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

float * __cdecl Scr_AllocVector(void)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_FindArrayIndex(unsigned int,struct VariableValue_s *)
{	UNIMPLEMENTED();
}

void __cdecl MakeVariableExternal(struct VariableValueInternal *,struct VariableValueInternal *)
{	UNIMPLEMENTED();
}

void __cdecl SafeRemoveArrayVariable(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl ClearObjectInternal(unsigned int)
{	UNIMPLEMENTED();
}

int __cdecl Scr_MakeValuePrimitive(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl RemoveArrayVariable(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CastWeakerStringPair(struct VariableValue_s *,struct VariableValue_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CastWeakerPair(struct VariableValue_s *,struct VariableValue_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ClearThread(unsigned int)
{	UNIMPLEMENTED();
}

struct VariableValue_s __cdecl Scr_EvalVariableEntityField(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AddFieldsForFile(char const *)
{	UNIMPLEMENTED();
}

GetObjectA(unsigned int id)
{	UNIMPLEMENTED();
}

