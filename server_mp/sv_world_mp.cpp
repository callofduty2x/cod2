int __cdecl SV_ClipHandleForEntity(struct gentity_s const * ent)
{	UNIMPLEMENTED();
}

int __cdecl SV_PointContents(float const * const p, int passEntityNum, int contentmask)
{	UNIMPLEMENTED();
}

void __cdecl SV_ClipMoveToEntity(struct moveclip_t const * clip, struct svEntity_s * check, struct trace_t * trace)
{	UNIMPLEMENTED();
}

int __cdecl SV_SightTraceToEntity(float const * const start, float const * const mins, float const * const maxs, float const * const end, int entityNum, int contentmask)
{	UNIMPLEMENTED();
}

int __cdecl SV_ClipSightToEntity(struct sightclip_t const * clip, struct svEntity_s * check)
{	UNIMPLEMENTED();
}

void __cdecl SV_LinkEntity(struct gentity_s * gEnt)
{	UNIMPLEMENTED();
}

void __cdecl SV_UnlinkEntity(struct gentity_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_PointSightTraceToEntity(struct sightpointtrace_t const * clip, struct svEntity_s * check)
{	UNIMPLEMENTED();
}

void __cdecl SV_PointTraceToEntity(struct pointtrace_t const * clip, struct svEntity_s * check, struct trace_t * trace)
{	UNIMPLEMENTED();
}

void __cdecl SV_LocationalTraceToEntity(struct trace_t *,float const * const,float const * const,int,int,unsigned char *)
{	UNIMPLEMENTED();
}

void __cdecl SV_SightTrace(int * hitNum, float const * const start, float const * const mins, float const * const maxs, float const * const end, int passEntityNum0, int passEntityNum1, int contentmask)
{	UNIMPLEMENTED();
}

int __cdecl SV_TracePassed(float const * const start, float const * const mins, float const * const maxs, float const * const end, int passEntityNum0, int passEntityNum1, int contentmask, int locational, int staticmodels)
{	UNIMPLEMENTED();
}

void __cdecl SV_Trace(struct trace_t * results, float const * const start, float const * const mins, float const * const maxs, float const * const end, int passEntityNum, int contentmask, int locational, unsigned char * priorityMap, int staticmodels)
{	UNIMPLEMENTED();
}

void __cdecl SnapAngles(float * const)
{	UNIMPLEMENTED();
}

