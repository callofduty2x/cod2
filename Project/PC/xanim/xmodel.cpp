void __cdecl LocalMatrixTransformVector(float const * const,float const (* const)[3],float * const)
{	UNIMPLEMENTED();
}

void __cdecl LocalMatrixTransposeTransformVector(float const * const,float const (* const)[3],float * const)
{	UNIMPLEMENTED();
}

bool __cdecl Com_ValidXModelName(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl XModelGetMemUsage(struct XModel const * model)
{	UNIMPLEMENTED();
}

struct trXSkin_t const * __cdecl XModelGetSkins(struct XModel const * model)
{	UNIMPLEMENTED();
}

int __cdecl XModelGetCollisionLod(struct XModel const *)
{	UNIMPLEMENTED();
}

int __cdecl XModelGetContents(struct XModel const * model)
{	UNIMPLEMENTED();
}

char const * __cdecl XModelGetLodName(struct XModel const * model, int lod)
{	UNIMPLEMENTED();
}

int __cdecl XModelGetBoneIndex(struct XModel const * model, unsigned int name)
{	UNIMPLEMENTED();
}

unsigned short * __cdecl XModelBoneNames(struct XModel * model)
{	UNIMPLEMENTED();
}

void __cdecl XModelSetOptimize(int)
{	UNIMPLEMENTED();
}

void __cdecl XModelGetBounds(struct XModel const * model, float * const mins, float * const maxs)
{	UNIMPLEMENTED();
}

int __cdecl XModelBad(struct XModel const * model)
{	UNIMPLEMENTED();
}

int __cdecl XModelTraceLine(struct XModel const * model, struct trace_t * results, struct DObjAnimMat_s const * boneMtxList, float * const localStart, float * const localEnd, int contentmask)
{	UNIMPLEMENTED();
}

void __cdecl XModelFree(struct XModel * model)
{	UNIMPLEMENTED();
}

void __cdecl XModelPartsFree(struct XModelParts_s * model)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl XModelPrecache(char const *,void * (__cdecl*)(int),void * (__cdecl*)(int))
{	UNIMPLEMENTED();
}

struct XModel * __cdecl XModelFindExisting(char const *)
{	UNIMPLEMENTED();
}

void __cdecl ReplaceXModel(struct XModel *,struct XModel *)
{	UNIMPLEMENTED();
}

int marker_xmodel;
struct XModelDefault g_default;
struct XModel * __cdecl XModelFindData(char const *)
{	UNIMPLEMENTED();
}

XModelPartsFindData(char const* name)
{	UNIMPLEMENTED();
}

XModelPartsSetData(char const* name,  XModelParts_s* modelParts,  void*  Alloc)(int))
{	UNIMPLEMENTED();
}

XModelSurfsFindData(char const* name)
{	UNIMPLEMENTED();
}

XModelSurfsSetData(char const* name,  XModelSurfs_s* modelSurfs,  void*  Alloc)(int))
{	UNIMPLEMENTED();
}

