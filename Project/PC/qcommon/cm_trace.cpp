int __cdecl I_side(float)
{	UNIMPLEMENTED();
}

struct cmodel_t * __cdecl CM_ClipHandleToModel(int handle)
{	UNIMPLEMENTED();
}

int __cdecl CM_TempBoxModel(float const * const mins, float const * const maxs, int contents)
{	UNIMPLEMENTED();
}

float __cdecl CM_RadiusOfModel(int handle)
{	UNIMPLEMENTED();
}

int __cdecl CM_ContentsOfModel(int handle)
{	UNIMPLEMENTED();
}

int __cdecl CM_BoxSightTrace(int oldHitNum, float const * const start, float const * const end, float const * const mins, float const * const maxs, int model, int brushmask)
{	UNIMPLEMENTED();
}

void __cdecl CM_TransformedBoxTrace(struct trace_t * results, float const * const start, float const * const end, float const * const mins, float const * const maxs, int model, int brushmask, float const * const origin, float const * const angles)
{	UNIMPLEMENTED();
}

void __cdecl CM_BoxTrace(struct trace_t * results, float const * const start, float const * const end, float const * const mins, float const * const maxs, int model, int brushmask)
{	UNIMPLEMENTED();
}

int __cdecl CM_TransformedBoxSightTrace(int hitNum, float const * const start, float const * const end, float const * const mins, float const * const maxs, int model, int brushmask, float const * const origin, float const * const angles)
{	UNIMPLEMENTED();
}

void __cdecl CM_TransformedBoxTraceExternal(struct trace_t * results, float const * const start, float const * const end, float const * const mins, float const * const maxs, int model, int brushmask, float const * const origin, float const * const angles)
{	UNIMPLEMENTED();
}

int marker_cm_trace;
void __cdecl TransposeMatrix(float (* const)[3],float (* const)[3])
{	UNIMPLEMENTED();
}

void __cdecl CM_GetBox(struct cbrush_t * *,struct cmodel_t * *)
{	UNIMPLEMENTED();
}

void __cdecl CM_GetTrackThreadInfo(struct TraceThreadInfo *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceSphereThroughSphere(struct traceWork_t const *,float const * const,float const * const,float const * const,float,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_SetAxialCullOnly(struct traceWork_t *)
{	UNIMPLEMENTED();
}

void __cdecl RotatePoint(float * const,float (* const)[3])
{	UNIMPLEMENTED();
}

int __cdecl CM_TraceSphereThroughSphere(struct traceWork_t const *,float const * const,float const * const,float const * const,float,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceCylinderThroughCylinder(struct traceWork_t const *,float const * const,float,float,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceThroughBrush(struct traceWork_t const *,struct cbrush_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_TraceCylinderThroughCylinder(struct traceWork_t const *,float const * const,float,float,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TraceThroughBrush(struct traceWork_t const *,struct cbrush_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TestCapsuleInCapsule(struct traceWork_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TestBoxInBrush(struct traceWork_t const *,struct cbrush_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CreateRotationMatrix(float const * const,float (* const)[3])
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceCapsuleThroughCapsule(struct traceWork_t const *,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceThroughLeafBrushNode_r(struct traceWork_t const *,struct cLeafBrushNode_s *,float const * const,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl CM_TraceCapsuleThroughCapsule(struct traceWork_t const *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TraceThroughLeafBrushNode_r(struct traceWork_t const *,struct cLeafBrushNode_s *,float const * const,float const * const,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TestInLeafBrushNode_r(struct traceWork_t const *,struct cLeafBrushNode_s *,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceThroughLeafBrushNode(struct traceWork_t const *,struct cLeaf_t *)
{	UNIMPLEMENTED();
}

bool __cdecl CM_TraceThroughLeafBrushNode(struct traceWork_t const *,struct cLeaf_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_TestInLeafBrushNode(struct traceWork_t *,struct cLeaf_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TraceThroughLeaf(struct traceWork_t const *,struct cLeaf_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TestInLeaf(struct traceWork_t *,struct cLeaf_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceThroughLeaf(struct traceWork_t const *,struct cLeaf_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_TraceThroughTree(struct traceWork_t const *,int,float const * const,float const * const,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_PositionTest(struct traceWork_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_SightTraceThroughTree(struct traceWork_t const *,int,float const * const,float const * const,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_Trace(struct trace_t *,float const * const,float const * const,float const * const,float const * const,int,int)
{	UNIMPLEMENTED();
}

