void __cdecl CM_UnlinkEntity(struct svEntity_s * ent)
{	UNIMPLEMENTED();
}

int __cdecl CM_AreaEntities(float const * const mins, float const * const maxs, int * entityList, int maxcount, int contentmask)
{	UNIMPLEMENTED();
}

void __cdecl CM_LinkEntity(struct svEntity_s * ent, float * const absmin, float * const absmax, int clipHandle)
{	UNIMPLEMENTED();
}

void __cdecl CM_LinkWorld()
{	UNIMPLEMENTED();
}

int __cdecl CM_PointTraceStaticModelsComplete(float const * const start, float const * const end, int contentmask)
{	UNIMPLEMENTED();
}

void __cdecl CM_PointTraceStaticModels(struct trace_t * results, float const * const start, float const * const end, int contentmask)
{	UNIMPLEMENTED();
}

void __cdecl CM_ClipMoveToEntities(struct moveclip_t * clip, struct trace_t * trace)
{	UNIMPLEMENTED();
}

int __cdecl CM_ClipSightTraceToEntities(struct sightclip_t * clip)
{	UNIMPLEMENTED();
}

int __cdecl CM_PointSightTraceToEntities(struct sightpointtrace_t * clip)
{	UNIMPLEMENTED();
}

void __cdecl CM_PointTraceToEntities(struct pointtrace_t * clip, struct trace_t * trace)
{	UNIMPLEMENTED();
}

int marker_cm_world;
void __cdecl CM_AddStaticModelToNode(struct cStaticModel_s *,unsigned short)
{	UNIMPLEMENTED();
}

void __cdecl CM_AddEntityToNode(struct svEntity_s *,unsigned short)
{	UNIMPLEMENTED();
}

void __cdecl CM_AreaEntities_r(unsigned short,struct areaParms_t *)
{	UNIMPLEMENTED();
}

unsigned short __cdecl CM_AllocWorldSector(float * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CM_SortNode(unsigned short,float * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CM_ClearWorld(void)
{	UNIMPLEMENTED();
}

void __cdecl CM_LinkStaticModel(struct cStaticModel_s *)
{	UNIMPLEMENTED();
}

int __cdecl CM_PointTraceStaticModelsComplete_r(struct staticmodeltrace_t const *,unsigned short,float const * const,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl CM_PointTraceStaticModels_r(struct locTraceWork_t *,unsigned short,float const * const,float const * const,struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl CM_LinkStaticModels(void)
{	UNIMPLEMENTED();
}

void __cdecl CM_ClipMoveToEntities_r(struct moveclip_t const *,unsigned short,float const * const,float const * const,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl CM_ClipSightTraceToEntities_r(struct sightclip_t const *,unsigned short,float const * const,float const * const)
{	UNIMPLEMENTED();
}

int __cdecl CM_PointSightTraceToEntities_r(struct sightpointtrace_t *,unsigned short,float const * const,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl CM_PointTraceToEntities_r(struct pointtrace_t *,unsigned short,float const * const,float const * const,struct trace_t *)
{	UNIMPLEMENTED();
}

