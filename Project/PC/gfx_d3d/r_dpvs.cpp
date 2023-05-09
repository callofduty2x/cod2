void __cdecl R_SetDpvsPlaneSides(struct DpvsPlane *)
{	UNIMPLEMENTED();
}

void __cdecl R_SetDpvsPlaneDist(float const * const,float,struct DpvsPlane *)
{	UNIMPLEMENTED();
}

void __cdecl R_FinishBuildingDpvsPlane(float const * const,float,struct DpvsPlane *)
{	UNIMPLEMENTED();
}

float __cdecl R_DpvsPlaneDistToPoint(struct DpvsPlane const *,float const * const)
{	UNIMPLEMENTED();
}

float __cdecl R_DpvsPlaneMaxSignedDistToBox(struct DpvsPlane const *,float const *)
{	UNIMPLEMENTED();
}

float __cdecl R_DpvsPlaneMinSignedDistToBox(struct DpvsPlane const *,float const *)
{	UNIMPLEMENTED();
}

void __cdecl R_SetCullDist(float)
{	UNIMPLEMENTED();
}

float __cdecl R_GetFarPlaneDist(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ClearDpvsScene(void)
{	UNIMPLEMENTED();
}

void __cdecl R_CullDLightsInFrustum(struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_XModelWorldBounds(int,float * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl R_FrustumClipPlanes(struct _D3DMATRIX const *,float const (* const)[4],int,struct DpvsPlane * const)
{	UNIMPLEMENTED();
}

int __cdecl R_CellForPoint(float const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_DrawModel(int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddWorldSurfacesDpvs(struct GfxViewParms const *,int)
{	UNIMPLEMENTED();
}

int marker_r_dpvs;
void __cdecl R_SetAncestorListStatus(struct GfxPortal *,bool)
{	UNIMPLEMENTED();
}

int __cdecl R_AddCellToList(struct GfxCell const *,struct GfxCell const * * const,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_IsCellInList(struct GfxCell const *,struct GfxCell const * * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_FreeHullPoints(float (*)[2])
{	UNIMPLEMENTED();
}

void __cdecl R_AssertValidQueue(void)
{	UNIMPLEMENTED();
}

int __cdecl R_FirstChildHeapIndex(int)
{	UNIMPLEMENTED();
}

int __cdecl R_ParentHeapIndex(int)
{	UNIMPLEMENTED();
}

bool __cdecl R_XModelIsHuge(float const * const,float const * const)
{	UNIMPLEMENTED();
}

int __cdecl R_AddNearAndFarClipPlanes(struct DpvsPlane * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_ClearRecursionAncestors(struct GfxPortal *)
{	UNIMPLEMENTED();
}

void __cdecl R_SetRecursionAncestors(struct GfxPortal *)
{	UNIMPLEMENTED();
}

struct GfxPortal * __cdecl R_NextQueuedPortal(void)
{	UNIMPLEMENTED();
}

void __cdecl R_BModelWorldBounds(struct GfxEntity const *,struct GfxBrushModel const *,float * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddEntityToCell(struct GfxCell *,int,float const * const,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_ProjectPortal(int,float const (* const)[3],float * const,float * const,enum DpvsClipChildren *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddWorldSurfaceNoCull(int)
{	UNIMPLEMENTED();
}

bool __cdecl R_BoxPartiallyInFrontOfPlane(float const *,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

bool __cdecl R_BoxEntirelyInFrontOfPlane(float const *,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

bool __cdecl R_BoxEntirelyBehindPlane(float const *,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

void __cdecl R_GetSidePlaneNormals(float const (* const)[3],int,float (* const)[3])
{	UNIMPLEMENTED();
}

float __cdecl R_DpvsPlaneDistToEye(struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

int __cdecl R_FilterEntityIntoCells_r(struct mnode_t *,int,float const * const,float const * const)
{	UNIMPLEMENTED();
}

float (* __cdecl R_ChopPortalWinding(float (*)[3],int *,struct DpvsPlane const *,float (*)[3]))[3]
{	UNIMPLEMENTED();
}

bool __cdecl R_PortalBehindPlane(struct GfxPortal const *,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

bool __cdecl R_CullOccluderByPlane(struct GfxOccluder const *,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

float __cdecl R_NearestPointOnWinding(float const (* const)[3],int,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

float __cdecl R_FurthestPointOnWinding(float const (* const)[3],int,struct DpvsPlane const *)
{	UNIMPLEMENTED();
}

bool __cdecl R_ClipBoxDpvs(float const *,struct DpvsPlane const * const,int,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_CullBoxHierarchy(float const *,struct DpvsPlane const * const,int,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_CullBoxDpvs(float const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_CullBoxLeaf(float const *,struct DpvsPlane const * const,int,int)
{	UNIMPLEMENTED();
}

void __cdecl R_SetupDpvsForDir(struct GfxViewParms const *)
{	UNIMPLEMENTED();
}

void __cdecl R_SetupDpvsForPoint(struct GfxViewParms const *)
{	UNIMPLEMENTED();
}

int __cdecl R_ChopPortal(struct GfxPortal *,struct DpvsPlane const *,struct DpvsPlane const * const,int,float (* const)[128][3],float (* *)[3])
{	UNIMPLEMENTED();
}

float (* __cdecl R_AllocHullPoints(void))[2]
{	UNIMPLEMENTED();
}

void __cdecl R_EnqueuePortal(struct GfxPortal *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCullGroupSurfaces(int,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_FilterBModelIntoCells(int,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddWorldSurfaceWithCull(int,struct DpvsPlane const * const,int,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_PortalBehindAllPlanes(struct GfxPortal const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_PortalBehindAnyPlane(struct GfxPortal const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_CullOccluder(struct GfxOccluder const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

int __cdecl R_AddBevelPlanes(struct DpvsPlane * const,int,float const (* const)[3],float const (* const)[3],float const * const,float const * const,enum DpvsForceBevels)
{	UNIMPLEMENTED();
}

void __cdecl R_DpvsPlaneFromEdge(float const * const,float const * const,struct DpvsPlane *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddSkySurfacesDpvs(struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_SetupDpvs(struct GfxViewParms const *,float const (* const)[4],int,struct DpvsPlane * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddVertToPortalHullPoints(struct GfxPortal *,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl R_PortalOccluded(struct GfxPortal const *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCellCullGroups(struct GfxCell const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCellOccluders(struct GfxCell const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

int __cdecl R_PortalClipPlanes(struct DpvsPlane * const,int,float const (* const)[3],struct GfxCell *,enum DpvsClipChildren *)
{	UNIMPLEMENTED();
}

bool __cdecl R_ChopPortalAndAddHullPoints(struct GfxPortal *,struct DpvsPlane const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

bool __cdecl R_ShouldSkipPortal(struct GfxPortal const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

int __cdecl R_GetFurtherCellList_r(struct GfxCell const *,struct DpvsPlane const *,struct DpvsPlane const * const,int,float (* const)[128][3],struct GfxCell const * * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddStaticModelWithCull(int,struct DpvsPlane const * const,int,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddStaticModelNoCull(int)
{	UNIMPLEMENTED();
}

void __cdecl R_FilterXModelIntoCells(int,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_CullModels(struct GfxCell const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddAabbTreeSurfaces_r(struct GfxAabbTree const *,struct DpvsPlane const * const,int,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCellSurfaces(struct GfxCell const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_FilterEntitiesIntoCells(struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddVisibleSurfacesInCell(struct GfxCell const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_VisitAllFurtherCells(struct GfxCell const *,struct DpvsPlane const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_VisitPortalsForCell(struct GfxCell const *,struct GfxPortal *,struct DpvsPlane const *,struct DpvsPlane const * const,int,enum DpvsClipChildren)
{	UNIMPLEMENTED();
}

void __cdecl R_VisitPortals(struct GfxCell const *,struct DpvsPlane const *,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddWorldSurfacesPortalWalk(int,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddWorldSurfacesInFrustum(int,struct DpvsPlane const * const,int)
{	UNIMPLEMENTED();
}

