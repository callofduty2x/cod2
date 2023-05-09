float __cdecl SIGN(float)
{	UNIMPLEMENTED();
}

void __cdecl NormalizeQuatTrans(struct DObjAnimMat_s *)
{	UNIMPLEMENTED();
}

void __cdecl LocalMatrixTransformVectorQuatTransEquals(float * const,struct DObjAnimMat_s const *)
{	UNIMPLEMENTED();
}

void __cdecl LocalQuatMultiplyEquals(float * const,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl LocalQuatMultiplyReverseEquals(float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl DObjUnlock(struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl DObjLock(struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl DObjSetModel(struct DObj_s *,struct XModel const *)
{	UNIMPLEMENTED();
}

int __cdecl DObjHasContents(struct DObj_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl DObjNumBones(struct DObj_s const *)
{	UNIMPLEMENTED();
}

struct XAnimTree_s * __cdecl DObjGetTree(struct DObj_s const *)
{	UNIMPLEMENTED();
}

struct XSurface_s * __cdecl DObjGetSurface(struct DObj_s const *,int,int,int)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetNumSurfaces(struct DObj_s const *,char *)
{	UNIMPLEMENTED();
}

int __cdecl DObjSetControlRotTransIndex(struct DObj_s const *,int * const,int)
{	UNIMPLEMENTED();
}

int __cdecl DObjSetRotTransIndex(struct DObj_s const *,int * const,int)
{	UNIMPLEMENTED();
}

void __cdecl DObjGetBoneInfo(struct DObj_s const *,struct XBoneInfo_s * *)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetMatOffset(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

struct DObjAnimMat_s * __cdecl DObjGetRotTransArray(struct DObj_s const *)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl DObjGetModel(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetNumModels(struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl DObjCreateSkel(struct DObj_s const *,char *,int)
{	UNIMPLEMENTED();
}

void __cdecl DObjSkelClear(struct DObj_s const *)
{	UNIMPLEMENTED();
}

int __cdecl DObjSkelExistsConst(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl DObjSkelExists(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetAllocSkelSize(struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl DObjSetTree(struct DObj_s *,struct XAnimTree_s *)
{	UNIMPLEMENTED();
}

int __cdecl DObjSkelAreBonesUpToDate(struct DObj_s const *,int * const)
{	UNIMPLEMENTED();
}

int __cdecl DObjSkelIsBoneUpToDate(struct DObj_s *,int)
{	UNIMPLEMENTED();
}

bool __cdecl DObjIgnoreCollision(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl DObjAbort(void)
{	UNIMPLEMENTED();
}

float __cdecl DObjGetLodOutDist(struct DObj_s const *)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetLodForDist(struct DObj_s const *,int,float)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetBoneIndex(struct DObj_s const *,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl DObjGetBounds(struct DObj_s const *,float * const,float * const)
{	UNIMPLEMENTED();
}

char const * __cdecl DObjGetBoneName(struct DObj_s const *,int)
{	UNIMPLEMENTED();
}

char const * __cdecl DObjGetSurfaceName(struct DObj_s *,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl DObjGetCreateParms(struct DObj_s const *,struct DObjModel_s * const,unsigned short *,struct XAnimTree_s * *,unsigned short *)
{	UNIMPLEMENTED();
}

void __cdecl DObjClone(struct DObj_s const *,struct XAnimTree_s *,char *)
{	UNIMPLEMENTED();
}

void __cdecl DObjSetLocalTagInternal(struct DObj_s const *,float const * const,float const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl DObjGeomTraceline(struct DObj_s *,float * const,float * const,int,struct DObjTrace_s *)
{	UNIMPLEMENTED();
}

void __cdecl DObjTraceline(struct DObj_s *,float * const,float * const,unsigned char *,struct DObjTrace_s *)
{	UNIMPLEMENTED();
}

int __cdecl DObjSetLocalBoneIndex(struct DObj_s *,int * const,int,float const * const,float const * const)
{	UNIMPLEMENTED();
}

int __cdecl DObjSetLocalTag(struct DObj_s const *,int * const,unsigned int,float const * const,float const * const)
{	UNIMPLEMENTED();
}

int __cdecl DObjSetControlTagAngles(struct DObj_s const *,int * const,unsigned int,float * const)
{	UNIMPLEMENTED();
}

void __cdecl DObjInit(void)
{	UNIMPLEMENTED();
}

void __cdecl DObjFree(struct DObj_s *)
{	UNIMPLEMENTED();
}

void __cdecl DObjShutdown(void)
{	UNIMPLEMENTED();
}

int __cdecl DObjGetSurfaces(struct DObj_s const *,struct DSurface_s *,int * const,char *)
{	UNIMPLEMENTED();
}

void __cdecl DObjCreate(struct DObjModel_s *,unsigned int,struct XAnimTree_s *,char *,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl DObjDumpInfo(struct DObj_s const *)
{	UNIMPLEMENTED();
}

void __cdecl DObjCalcSkel(struct DObj_s const *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl DObjCompleteHierarchyBits(struct DObj_s const *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl DObjGetHierarchyBits(struct DObj_s *,int,int * const)
{	UNIMPLEMENTED();
}

int marker_dobj;
int __cdecl DObjGetBoneIndexInternal(struct DObj_s const *,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl DObjComputeBounds(struct DObj_s *)
{	UNIMPLEMENTED();
}

void __cdecl LocalInvMatrixTransformVectorQuatTrans(float const * const,struct DObjAnimMat_s const *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl DObjCreateDuplicateParts(struct DObj_s const *)
{	UNIMPLEMENTED();
}

