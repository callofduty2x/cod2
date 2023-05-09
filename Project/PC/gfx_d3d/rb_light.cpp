void __cdecl RB_ShowLightVisCachePoints(float const * const,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

float __cdecl RB_GetLightingAtPoint(struct GfxLightGrid const *,float const * const,float (* const)[4])
{	UNIMPLEMENTED();
}

void __cdecl RB_SetupEntityLighting(struct GfxEntity const *,struct GfxEntityLighting *)
{	UNIMPLEMENTED();
}

void __cdecl RB_InitLightVisHistory(char const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SaveLightVisHistory(void)
{	UNIMPLEMENTED();
}

int marker_rb_light;
void __cdecl RB_WeightedAccumulateLightGridColors(struct GfxLightGridColors const *,float,float (* const)[4])
{	UNIMPLEMENTED();
}

void __cdecl RB_PackLightGridPosition(int,int,int,unsigned int *,unsigned char *)
{	UNIMPLEMENTED();
}

bool __cdecl RB_AddSortedHistoryEntry(int,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_NoLightingAtPoint(float (* const)[4])
{	UNIMPLEMENTED();
}

void __cdecl RB_ScaleLightGridColors(float,float (* const)[4])
{	UNIMPLEMENTED();
}

bool __cdecl RB_FindNearestLightGridSample(struct GfxLightGrid const *,int,int,int,int *)
{	UNIMPLEMENTED();
}

int __cdecl RB_SortedHistoryEntry(int,int,int,enum GfxSortedHistoryAdd)
{	UNIMPLEMENTED();
}

bool __cdecl RB_ExtrapolateLightingAtPoint(struct GfxLightGrid const *,int,int,int,float (* const)[4],float *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowCornerSample(float const * const,float,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowGridBox(int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowGridOrigin(float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl RB_IsValidLightGridSample(struct GfxLightGridPoint *,int,float const * const,float const * const)
{	UNIMPLEMENTED();
}

struct GfxLightGridPoint * __cdecl RB_GetLightGridSample(struct GfxLightGrid const *,int,int,int,int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_LightVisHistoryFilename(char const *,char * const)
{	UNIMPLEMENTED();
}

