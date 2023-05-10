public: __cdecl _XMMATRIX::_XMMATRIX(void)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMLoadVector3(void const *)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMLoadFloat3(struct _XMFLOAT3 const *)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMLoadVector4A(void const *)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMLoadFloat4A(struct _XMFLOAT4 const *)
{	UNIMPLEMENTED();
}

struct _XMMATRIX __cdecl XMLoadFloat4x4A(struct _XMFLOAT4X4 const *)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMLoadFloat4A16(struct _XMFLOAT4 const *)
{	UNIMPLEMENTED();
}

struct _XMMATRIX __cdecl XMLoadFloat4x4A16(struct _XMFLOAT4X4 const *)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMVectorAdd(struct __vector4,struct __vector4)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMVectorMultiply(struct __vector4,struct __vector4)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMVector3Transform(struct __vector4,struct _XMMATRIX)
{	UNIMPLEMENTED();
}

struct __vector4 __cdecl XMVector3TransformNormal(struct __vector4,struct _XMMATRIX)
{	UNIMPLEMENTED();
}

struct __vector4 & __cdecl operator+=(struct __vector4 &,struct __vector4)
{	UNIMPLEMENTED();
}

public: struct _XMMATRIX & __cdecl _XMMATRIX::operator=(struct _XMMATRIX const &)
{	UNIMPLEMENTED();
}

int __cdecl FloatAsInt(float const *)
{	UNIMPLEMENTED();
}

void __cdecl LocalConvertQuatToSkelMat(struct DObjAnimMat_s const *,struct DObjSkelMat_s *)
{	UNIMPLEMENTED();
}

int __cdecl Com_InitPrefetch(int,void const *)
{	UNIMPLEMENTED();
}

void __cdecl MatrixTransformVertexAndBasis(float const *,float const *,float const *,float const *,struct DObjSkelMat_s const *,struct GfxVertex *)
{	UNIMPLEMENTED();
}

void __cdecl LocalAddScaledMatrixTransformVector43(float const * const,float,struct DObjSkelMat_s const *,float * const)
{	UNIMPLEMENTED();
}

struct DObj_s * __cdecl R_GetGfxEntityDObj(struct GfxSceneEntity *, struct GfxEntity *)
{	UNIMPLEMENTED();
}

int __cdecl R_GetIgnorePrecacheErrors()
{	UNIMPLEMENTED();
}

void __cdecl R_SetIgnorePrecacheErrors(int ignore)
{	UNIMPLEMENTED();
}

struct GfxBrushModel * __cdecl R_RegisterInlineModel(int)
{	UNIMPLEMENTED();
}

void __cdecl R_GetRigidTransform(struct DObjSkelMat_s const *,float const * const,float const (* const)[3],float,float (* const)[3])
{	UNIMPLEMENTED();
}

void __cdecl R_ModelBounds(struct GfxBrushModel * bmodel, float * const mins, float * const maxs)
{	UNIMPLEMENTED();
}

float __cdecl R_GetLodDist(float const * const,float)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinRigidXModelCmd(struct SkinRigidXModelCmd * skinRigidCmd)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinXModelCmd(struct SkinXModelCmd * skinCmd, int context)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl R_RegisterModel(char const * name)
{	UNIMPLEMENTED();
}

void __cdecl R_DObjReplaceMaterial(struct DObj_s * obj, int lod, int surfaceIndex, struct Material * material)
{	UNIMPLEMENTED();
}

void __cdecl R_DObjGetSurfMaterials(struct DObj_s * obj, int lod, struct Material * * matHandleArray)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateXModelBounds(struct GfxSceneEntity * sceneEnt, struct GfxEntity * ent)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinSceneDObj(struct GfxSceneEntity * sceneEnt, struct GfxEntity * ent)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinStaticModel(struct GfxSceneEntity * sceneEnt, struct GfxEntity * ent, int smodelIndex)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinSceneEnt(struct GfxSceneEntity * sceneEnt, struct GfxEntity * ent)
{	UNIMPLEMENTED();
}

int marker_r_model;
void __cdecl R_PostXModelBounds(struct GfxSceneEntity *)
{	UNIMPLEMENTED();
}

void __cdecl R_PostSkinXModel(struct GfxSceneEntity *)
{	UNIMPLEMENTED();
}

struct trXSkin_t const * __cdecl R_DObjGetXSkins(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl LocalExpandRotatedBounds(float const (* const)[3],float const * const,float const (* const)[3],float (* const)[3])
{	UNIMPLEMENTED();
}

void __cdecl R_SetNoBounds(struct GfxSceneEntity *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinXSurfaceRigid(struct GfxVertex *,struct XSurface_s const *,struct DObjSkelMat_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinXSurfaceWeight(struct GfxVertex *,struct XSurface_s const *,struct DObjSkelMat_s const *)
{	UNIMPLEMENTED();
}

int __cdecl R_AllocSkinnedCachedVerts(int)
{	UNIMPLEMENTED();
}

void __cdecl R_CalcXModelMatArray(struct SkinXModelCmd *,struct DObjSkelMat_s *)
{	UNIMPLEMENTED();
}

int __cdecl R_PreSkinXSurface(struct GfxSceneEntity *,struct DObj_s const *,struct DSurface_s *,int,char * const,unsigned char *)
{	UNIMPLEMENTED();
}

void __cdecl R_GetRigidXSurfaceTransform(struct XSurface_s const *,struct DObjSkelMat_s const * const,float const * const,float const (* const)[3],float,float (* const)[3])
{	UNIMPLEMENTED();
}

enum surfaceType_t * __cdecl R_SkinRigidXSurface(struct GfxEntity *,struct DObjSkelMat_s *,enum surfaceType_t *)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinXSurfaceWeightAltivec(struct GfxVertex *,struct XSurface_s const *,struct DObjSkelMat_s const *)
{	UNIMPLEMENTED();
}

int __cdecl R_PreSkinStaticSurface(struct GfxSceneEntity *,struct GfxEntity *,int,struct XModel const *,struct XSurface_s *,int,int,int *,unsigned char *)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinXSurfaceSkinned(struct GfxModelSkinnedSurface *,struct DObjSkelMat_s const *)
{	UNIMPLEMENTED();
}

enum surfaceType_t * __cdecl R_SkinXSurface(struct GfxEntity *,int,struct DObjSkelMat_s *,enum surfaceType_t *)
{	UNIMPLEMENTED();
}

void * __cdecl Hunk_AllocXModelPrecacheColl(int)
{	UNIMPLEMENTED();
}

void * __cdecl Hunk_AllocXModelPrecache(int)
{	UNIMPLEMENTED();
}

int __cdecl R_GetSurfaceData(struct GfxEntity *,struct DObj_s const *,struct DSurface_s *,int * const,char * const)
{	UNIMPLEMENTED();
}

void __cdecl R_DObjCalcPose(struct GfxSceneEntity const *,struct DObj_s const *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl R_XModelDebugAxes(struct GfxSceneEntity *,struct GfxEntity *,struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl R_XModelDebugBoxes(struct GfxSceneEntity *,struct GfxEntity *,struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl R_XModelDebug(struct GfxSceneEntity *,struct GfxEntity *,struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinXModel(struct GfxSceneEntity *,struct GfxEntity *,int)
{	UNIMPLEMENTED();
}

R_UnlockSkinnedCache()
{	UNIMPLEMENTED();
}

R_OptimizeAllModels()
{	UNIMPLEMENTED();
}

R_ReleaseAllModels()
{	UNIMPLEMENTED();
}

Model_Alloc(int size)
{	UNIMPLEMENTED();
}

R_LockSkinnedCache(GfxLockType lockType)
{	UNIMPLEMENTED();
}

R_ShutdownModels()
{	UNIMPLEMENTED();
}

R_FinishLoadingModels()
{	UNIMPLEMENTED();
}

