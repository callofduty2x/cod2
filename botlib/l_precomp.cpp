int marker_l_precomp;
SourceError(source_s* source,  char* str,  ...)
{	UNIMPLEMENTED();
}

SourceWarning(source_s*,  char*,  ...)
{	UNIMPLEMENTED();
}

PC_StringizeTokens(token_s* tokens,  token_s* token)
{	UNIMPLEMENTED();
}

PC_OperatorPriority(int op)
{	UNIMPLEMENTED();
}

PC_Directive_line(source_s* source)
{	UNIMPLEMENTED();
}

PC_SourceFileAndLine(int handle,  char* filename,  int* line)
{	UNIMPLEMENTED();
}

PC_ReadSourceToken(source_s* source,  token_s* token)
{	UNIMPLEMENTED();
}

PC_Directive_error(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_else(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_endif(source_s* source)
{	UNIMPLEMENTED();
}

PC_EvaluateTokens(source_s* source,  token_s* tokens,  long* intvalue,  double* floatvalue,  int integer)
{	UNIMPLEMENTED();
}

FreeSource(source_s* source)
{	UNIMPLEMENTED();
}

PC_FreeSourceHandle(int handle)
{	UNIMPLEMENTED();
}

PC_ReadDollarDirective(source_s* source)
{	UNIMPLEMENTED();
}

PC_ReadDirective(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_include(source_s* source)
{	UNIMPLEMENTED();
}

PC_ReadDefineParms(source_s* source,  define_s* define,  token_s** parms,  int maxparms)
{	UNIMPLEMENTED();
}

PC_ExpandBuiltinDefine(source_s* source,  token_s* deftoken,  define_s* define,  token_s** firsttoken,  token_s** lasttoken)
{	UNIMPLEMENTED();
}

PC_ExpandDefine(source_s* source,  token_s* deftoken,  define_s* define,  token_s** firsttoken,  token_s** lasttoken)
{	UNIMPLEMENTED();
}

PC_ReadLine(source_s* source,  token_s* token)
{	UNIMPLEMENTED();
}

PC_ReadLineHandle(int handle,  pc_token_s* pc_token)
{	UNIMPLEMENTED();
}

PC_Directive_pragma(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_if_def(source_s* source,  int type)
{	UNIMPLEMENTED();
}

PC_Directive_ifndef(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_ifdef(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_undef(source_s* source)
{	UNIMPLEMENTED();
}

PC_ReadToken(source_s* source,  token_s* token)
{	UNIMPLEMENTED();
}

PC_ReadTokenHandle(int handle,  pc_token_s* pc_token)
{	UNIMPLEMENTED();
}

PC_Directive_define(source_s* source)
{	UNIMPLEMENTED();
}

PC_CopyDefine(source_s* source,  define_s* define)
{	UNIMPLEMENTED();
}

LoadSourceFile(char const* filename)
{	UNIMPLEMENTED();
}

PC_LoadSourceHandle(char const* filename)
{	UNIMPLEMENTED();
}

PC_Evaluate(source_s* source,  long* intvalue,  double* floatvalue,  int integer)
{	UNIMPLEMENTED();
}

PC_Directive_evalfloat(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_eval(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_if(source_s* source)
{	UNIMPLEMENTED();
}

PC_Directive_elif(source_s* source)
{	UNIMPLEMENTED();
}

PC_DollarEvaluate(source_s* source,  long* intvalue,  double* floatvalue,  int integer)
{	UNIMPLEMENTED();
}

PC_DollarDirective_evalfloat(source_s* source)
{	UNIMPLEMENTED();
}

PC_DollarDirective_evalint(source_s* source)
{	UNIMPLEMENTED();
}

