void __cdecl AddRefToValue(struct VariableValue_s *)
{	UNIMPLEMENTED();
}

void __cdecl RemoveRefToValue(struct VariableValue_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CompileShutdown(void)
{	UNIMPLEMENTED();
}

int __cdecl CompareCaseInfo(void const *,void const *)
{	UNIMPLEMENTED();
}

int __cdecl GetExpressionCount(union sval_u)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Scr_GetBuiltin(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CompileStatement(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl ScriptCompile(union sval_u,unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

struct scrCompileDebugPub_t scrCompileDebugPub;
int marker_scr_compiler;
void __cdecl EmitBreakpointStatement(union sval_u)
{	UNIMPLEMENTED();
}

bool __cdecl Scr_IsLastStatement(union sval_u *)
{	UNIMPLEMENTED();
}

bool __cdecl IsUndefinedPrimitiveExpression(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsArrayPrimitiveExpressionRef(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

int __cdecl Scr_GetUncacheType(int)
{	UNIMPLEMENTED();
}

int __cdecl Scr_GetCacheType(int)
{	UNIMPLEMENTED();
}

union sval_u * __cdecl GetSingleParameter(union sval_u)
{	UNIMPLEMENTED();
}

int __cdecl EmitExpressionList(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsArrayVariableRef(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PopValue(void)
{	UNIMPLEMENTED();
}

void __cdecl EvalIString(unsigned int,union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EvalString(unsigned int,union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_InitFromChildBlocks(struct scr_block_s * * const,int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

int __cdecl Scr_FindLocalVar(struct scr_block_s *,int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl EvalFloat(float,union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EvalInteger(int,union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EvalUndefined(union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

bool __cdecl IsUndefinedExpression(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AppendChildBlocks(struct scr_block_s * * const,int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl AddExpressionListOpcodePos(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetUndefined(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CompileRemoveRefToString(unsigned int)
{	UNIMPLEMENTED();
}

unsigned int __cdecl AddFilePrecache(unsigned int,unsigned int,bool)
{	UNIMPLEMENTED();
}

void __cdecl CompileTransferRefToString(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl EmitCaseStatementInfo(unsigned int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitDefaultStatement(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl ConnectContinueStatements(void)
{	UNIMPLEMENTED();
}

void __cdecl ConnectBreakStatements(void)
{	UNIMPLEMENTED();
}

void __cdecl SetThreadPosition(unsigned int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_BeginDevScript(int *,char * *)
{	UNIMPLEMENTED();
}

unsigned int __cdecl AddFunction(int,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CopyBlock(struct scr_block_s *,struct scr_block_s * *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CheckLocalVarsCount(int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CheckMaxSwitchCases(int)
{	UNIMPLEMENTED();
}

void __cdecl EmitByte(unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl EmitInclude(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AddContinueBlock(struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AddBreakBlock(struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_EndDevScript(int,char * *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_TransferBlock(struct scr_block_s *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_MergeChildBlocks(struct scr_block_s * * const,int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RegisterLocalVar(unsigned int,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCodepos(char const *)
{	UNIMPLEMENTED();
}

void __cdecl EmitString(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl EmitFloat(float)
{	UNIMPLEMENTED();
}

void __cdecl EmitUnsignedShort(unsigned short)
{	UNIMPLEMENTED();
}

void __cdecl EmitShort(short)
{	UNIMPLEMENTED();
}

void __cdecl EmitInteger(int)
{	UNIMPLEMENTED();
}

void __cdecl EmitCanonicalString(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl EmitIncludeList(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsDeveloperStatementList(union sval_u,struct scr_block_s *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsSwitchStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsIfElseStatement(union sval_u,union sval_u,struct scr_block_s *,union sval_u *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsIfStatement(union sval_u,struct scr_block_s *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsLocalVariableRef(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetVector(float const *,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetIString(unsigned int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetString(unsigned int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsSafeSetVariableField(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetFloat(float,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetInteger(int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitCanonicalStringConst(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsFormalParameterListInternal(union sval_u *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsVariableExpressionRef(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsBinaryEqualsOperatorExpression(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitValue(struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EmitOpcode(unsigned int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsFormalParameterList(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitProfStatement(union sval_u,union sval_u,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsWaittillStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsIncStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitWaittillFrameEnd(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsAssignmentStatement(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitPrimitiveExpression(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCallBuiltinMethodOpcode(int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitCallBuiltinOpcode(int,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitPreFunctionCall(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostScriptThreadPointer(union sval_u,int,bool,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostScriptFunctionPointer(union sval_u,int,bool,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCastFieldObject(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitDecTop(void)
{	UNIMPLEMENTED();
}

void __cdecl EmitEmptyArray(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitClearArray(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitEvalArrayRef(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitEvalArray(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGameRef(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitAnimObject(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitLevelObject(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitSelfObject(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitAnim(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGame(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitLevel(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitSelf(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitSize(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitBoolComplement(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitBoolNot(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitCastBool(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitRemoveLocalVars(struct scr_block_s *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCreateLocalVars(struct scr_block_s *,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitSetVariableField(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitReturn(void)
{	UNIMPLEMENTED();
}

void __cdecl EmitEnd(void)
{	UNIMPLEMENTED();
}

void __cdecl InitThread(int)
{	UNIMPLEMENTED();
}

void __cdecl EmitProfEndStatement(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitProfBeginStatement(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitEndStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitBoolAndExpression(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitBoolOrExpression(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitArrayVariable(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitNOP2(bool,unsigned int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitDeveloperStatementList(union sval_u,union sval_u,struct scr_block_s *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitContinueStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitBreakStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCaseStatement(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitExpressionFieldObject(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitArrayPrimitiveExpressionRef(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EvalBinaryOperatorExpression(union sval_u,union sval_u,union sval_u,union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EmitExpressionListFieldObject(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CreateVector(struct VariableCompileValue * const,struct VariableValue_s *)
{	UNIMPLEMENTED();
}

unsigned int __cdecl SpecifyThreadPosition(unsigned int,unsigned int,unsigned int,int)
{	UNIMPLEMENTED();
}

void __cdecl LinkThread(unsigned int,struct VariableValue_s *,bool)
{	UNIMPLEMENTED();
}

void __cdecl EmitFunction(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitObject(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PushValue(struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

int __cdecl Scr_FindLocalVarIndex(unsigned int,union sval_u,bool,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitAnimTree(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl SpecifyThread(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitSwitchStatementList(union sval_u,bool,unsigned int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EmitOrEvalBinaryOperatorExpression(union sval_u,union sval_u,union sval_u,union sval_u,struct VariableCompileValue *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EmitOrEvalPrimitiveExpressionList(union sval_u,union sval_u,struct VariableCompileValue *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EvalPrimitiveExpressionList(union sval_u,union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl LinkFile(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostScriptThread(union sval_u,int,bool,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostScriptFunction(union sval_u,int,bool,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitGetFunction(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitAnimation(union sval_u,union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitLocalVariableRef(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitLocalVariable(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitSafeSetWaittillVariableField(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitSafeSetVariableField(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitFormalWaittillParameterListRefInternal(union sval_u *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitFormalParameterListInternal(union sval_u *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EvalPrimitiveExpression(union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostScriptThreadCall(union sval_u,int,bool,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostScriptFunctionCall(union sval_u,int,bool,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitFormalParameterList(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EvalExpression(union sval_u,struct VariableCompileValue *)
{	UNIMPLEMENTED();
}

void __cdecl EmitPostFunctionCall(union sval_u,int,bool,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsForStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *,union sval_u *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsWhileStatement(union sval_u,union sval_u,struct scr_block_s *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitMethod(union sval_u,union sval_u,union sval_u,union sval_u,bool,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCall(union sval_u,union sval_u,bool,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCallExpressionFieldObject(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCallExpression(union sval_u,bool,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsStatementList(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitCallExpressionStatement(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitPrimitiveExpressionFieldObject(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitClearFieldVariable(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitFieldVariableRef(union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitFieldVariable(union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_CalcLocalVarsThread(union sval_u,union sval_u,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitVariableExpression(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EmitOrEvalPrimitiveExpression(union sval_u,struct VariableCompileValue *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EmitOrEvalExpression(union sval_u,struct VariableCompileValue *,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitForStatement(union sval_u,union sval_u,union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *,union sval_u *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitWhileStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitExpression(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitClearArrayVariable(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitArrayVariableRef(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitSwitchStatement(union sval_u,union sval_u,union sval_u,bool,unsigned int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitEndOnStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitNotifyStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitWaittillmatchStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitWaittillStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitIfElseStatement(union sval_u,union sval_u,union sval_u,union sval_u,union sval_u,bool,unsigned int,struct scr_block_s *,union sval_u *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitIfStatement(union sval_u,union sval_u,union sval_u,bool,unsigned int,struct scr_block_s *,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitWaitStatement(union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitReturnStatement(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

bool __cdecl EmitClearVariableExpression(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitVariableExpressionRef(union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitBinaryEqualsOperatorExpression(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitDecStatement(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitIncStatement(union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitAssignmentStatement(union sval_u,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitStatement(union sval_u,bool,unsigned int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitStatementList(union sval_u,bool,unsigned int,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitThreadInternal(unsigned int,union sval_u,union sval_u,union sval_u,struct scr_block_s *)
{	UNIMPLEMENTED();
}

void __cdecl EmitDeveloperThread(union sval_u,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitNormalThread(union sval_u,union sval_u *)
{	UNIMPLEMENTED();
}

void __cdecl EmitThread(union sval_u)
{	UNIMPLEMENTED();
}

void __cdecl EmitThreadList(union sval_u)
{	UNIMPLEMENTED();
}

