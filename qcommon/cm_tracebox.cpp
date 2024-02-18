#include "qcommon.h"
#include "sys_thread.h"

void __cdecl CM_CalcTraceEntents(struct TraceExtents * extents)
{	UNIMPLEMENTED();
}

qboolean CM_TraceBox(TraceExtents *extents, const float *mins, const float *maxs, float fraction)
{
	float lfraction = fraction;

	if(CM_TraceBoxInternal(extents, mins, -1.0, &lfraction) == qtrue)
	{
		return qtrue;
	}
	if(CM_TraceBoxInternal(extents, maxs, 1.0, &lfraction) == qtrue)
	{
		return qtrue;
	}

	return qfalse;
}
