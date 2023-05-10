void __cdecl R_LocateDebugLines(struct trDebugLine_t * lines, int lineCount, int maxLineCount)
{	UNIMPLEMENTED();
}

void __cdecl R_LocateDebugStrings(struct trDebugString_t * strings, int stringCount, int maxStringCount)
{	UNIMPLEMENTED();
}

void __cdecl R_TransferDebugGlobals(struct DebugGlobals * debugGlobalsEntry)
{	UNIMPLEMENTED();
}

void __cdecl R_ShutdownDebugEntry(struct DebugGlobals *)
{	UNIMPLEMENTED();
}

void __cdecl R_InitDebugEntry(struct DebugGlobals * debugGlobalsEntry)
{	UNIMPLEMENTED();
}

void __cdecl R_AddPlume(float const * const origin, int score, float const * const color, int duration)
{	UNIMPLEMENTED();
}

void __cdecl R_ShutdownDebug()
{	UNIMPLEMENTED();
}

void __cdecl R_InitDebug()
{	UNIMPLEMENTED();
}

void __cdecl R_AddDebugString(struct DebugGlobals * debugGlobalsEntry, float const * const origin, float const * const color, float scale, char const * string)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDebugLine(struct DebugGlobals * debugGlobalsEntry, float const * const start, float const * const end, float const * const color)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDebugPolygon(struct DebugGlobals * debugGlobalsEntry, float const * const color, int pointCount, float  points)[3])
{	UNIMPLEMENTED();
}

void __cdecl R_AddScaledDebugString(struct DebugGlobals * debugGlobalsEntry, struct GfxViewParms const * viewParms, float const * const origin, float const * const color, char const * string)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDebugBox(struct DebugGlobals * debugGlobalsEntry, float const * const mins, float const * const maxs, float const * const color)
{	UNIMPLEMENTED();
}

int marker_r_debug;
