void __cdecl Byte4UnpackRgba(unsigned char const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Byte4UnpackNativeColor(unsigned char const * const,float * const)
{	UNIMPLEMENTED();
}

int __cdecl R_DecomposeSortEntityIndex(unsigned int)
{	UNIMPLEMENTED();
}

struct Material const * __cdecl R_DecomposeSortMaterial(unsigned int)
{	UNIMPLEMENTED();
}

bool __cdecl R_UsingAntialiasing(void)
{	UNIMPLEMENTED();
}

enum ShadowType __cdecl R_DynamicShadowType(struct GfxPostProcessParms const *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddLightmappedDrawSurf(enum surfaceType_t const *,int,struct Material const *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_SetupViewProjectionMatrices(struct GfxViewParms *)
{	UNIMPLEMENTED();
}

void __cdecl R_DefaultVertexFrames(int vertCount, struct GfxWorldVertex * const verts)
{	UNIMPLEMENTED();
}

void __cdecl R_InitSceneEntity(struct GfxSceneEntity *)
{	UNIMPLEMENTED();
}

void __cdecl R_GetClearColor(float * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDrawSurfForSurface(struct GfxSurface * surf, int entIndex)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDrawSurf(enum surfaceType_t const *,int,struct Material const *)
{	UNIMPLEMENTED();
}

void __cdecl R_DecomposeSort(unsigned int, int *, struct Material const * *, int *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddLightToScene(float const * const org, float radius, float r, float g, float b)
{	UNIMPLEMENTED();
}

void __cdecl R_AddPolyToScene(struct Material * materialHandle, unsigned short lmapIndex, unsigned short vertCount, struct GfxWorldVertex const * const verts)
{	UNIMPLEMENTED();
}

int __cdecl R_AddStaticModelToScene(int smodelIndex)
{	UNIMPLEMENTED();
}

void __cdecl R_AddBModelSurfaces(struct GfxSceneEntity * sceneEnt, int entIndex)
{	UNIMPLEMENTED();
}

void __cdecl qsortDrawSurfs(struct GfxDrawSurf * drawSurfs, int drawSurfCount)
{	UNIMPLEMENTED();
}

float __cdecl R_GetDefaultNearClip(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddXModelSurfaces(int entIndex)
{	UNIMPLEMENTED();
}

void __cdecl R_SortDrawSurfs(struct GfxDrawSurf *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_SetLodOrigin(struct refdef_s const * refdef)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateGfxEntityBounds(struct GfxEntity * ent)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinGfxEntity(struct GfxEntity *)
{	UNIMPLEMENTED();
}

struct GfxEntity * __cdecl R_AddRefEntityToScene(struct GfxEntity const * refEnt, union GfxModel sceneModel, struct centity_s const * cent)
{	UNIMPLEMENTED();
}

void __cdecl R_ClearScene()
{	UNIMPLEMENTED();
}

void __cdecl R_GenerateDrawSurfsForView(struct GfxViewParms const *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_RenderScene(struct refdef_s const * refdef)
{	UNIMPLEMENTED();
}

int marker_r_scene;
struct GfxScene scene;
void __cdecl R_SetPostProcessParms(struct refdef_s const *,struct GfxPostProcessParms *)
{	UNIMPLEMENTED();
}

bool __cdecl R_ShouldDrawDLights(void)
{	UNIMPLEMENTED();
}

void __cdecl swapDrawSurfs(struct GfxDrawSurf *,struct GfxDrawSurf *)
{	UNIMPLEMENTED();
}

unsigned char __cdecl LerpByte(unsigned char,unsigned char,float)
{	UNIMPLEMENTED();
}

int __cdecl R_AllocSceneEntity(void)
{	UNIMPLEMENTED();
}

int __cdecl R_CompareDumpSceneEntities(void const *,void const *)
{	UNIMPLEMENTED();
}

void __cdecl R_InitGfxEntity(struct GfxEntity *)
{	UNIMPLEMENTED();
}

enum MaterialTechniqueType __cdecl R_EmissiveTechniqueType(struct GfxPostProcessParms const *)
{	UNIMPLEMENTED();
}

void __cdecl shortsortDrawSurfs(struct GfxDrawSurf *,struct GfxDrawSurf *)
{	UNIMPLEMENTED();
}

void __cdecl R_SetFrameFog(struct GfxViewParms const *)
{	UNIMPLEMENTED();
}

int __cdecl R_CountSameSceneEntity(int * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_SetSceneRefEntity(int,struct GfxEntity const *,union GfxModel)
{	UNIMPLEMENTED();
}

void __cdecl R_AddClearCommandsForFloatZ(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddClearCommandsForFrameBuffer(enum ShadowType)
{	UNIMPLEMENTED();
}

void __cdecl R_SetupProjection(float,float,float,struct GfxViewParms *)
{	UNIMPLEMENTED();
}

void __cdecl R_SetViewParmsForScene(struct refdef_s const *,struct GfxViewParms *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDebugShaderDrawCommands(int,struct GfxViewParms const *,struct GfxDrawSurf *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddFullbrightDrawCommands(int,struct GfxViewParms const *,struct GfxDrawSurf *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDepthPrepassCommands(int,struct GfxViewParms const *,struct GfxDrawSurf *,int,enum ShadowType)
{	UNIMPLEMENTED();
}

void __cdecl R_AddClearCommandsForFrameBufferIfNeeded(enum ShadowType)
{	UNIMPLEMENTED();
}

void __cdecl R_DrawPointLitSurfs(int,struct PointLightPartition const *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddStandardDrawCommands(int,struct GfxViewParms const *,struct GfxPostProcessParms const *,struct GfxDrawSurf *,int,enum ShadowType,struct ShadowCookieList *,struct PointLightPartition * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddDrawCommands(int,struct GfxViewParms const *,struct GfxPostProcessParms const *,struct GfxDrawSurf *,int,enum ShadowType,struct ShadowCookieList *,struct PointLightPartition * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_DumpSceneEntities(void)
{	UNIMPLEMENTED();
}

struct GfxEntity * __cdecl R_AddGfxModelToScene(struct GfxEntity const *,union GfxModel,struct centity_s const *)
{	UNIMPLEMENTED();
}

void __cdecl R_GenerateSortedDrawSurfs(int,struct GfxViewParms const *,struct GfxViewParms const *,struct GfxPostProcessParms const *)
{	UNIMPLEMENTED();
}

