int __cdecl SV_GetClientPing(int)
{	UNIMPLEMENTED();
}

int __cdecl SV_GetGuid(int)
{	UNIMPLEMENTED();
}

int __cdecl SV_MapExists(char const *)
{	UNIMPLEMENTED();
}

void __cdecl SV_ResetSkeletonCache(void)
{	UNIMPLEMENTED();
}

void __cdecl SV_GetUsercmd(int,struct usercmd_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_LocateGameData(struct gentity_s *,int,int,struct playerState_s *,int)
{	UNIMPLEMENTED();
}

struct playerState_s * __cdecl SV_GameClientNum(int)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl SV_GentityNum(int)
{	UNIMPLEMENTED();
}

int __cdecl SV_NumForGentity(struct gentity_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_IsLocalClient(int)
{	UNIMPLEMENTED();
}

void __cdecl SV_SetWeaponInfoMemory(void)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjExists(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_ResetEntityParsePoint(void)
{	UNIMPLEMENTED();
}

struct XAnimTree_s * __cdecl SV_DObjGetTree(struct gentity_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjSetControlRotTransIndex(struct gentity_s *,int * const,int)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjSetRotTransIndex(struct gentity_s *,int * const,int)
{	UNIMPLEMENTED();
}

struct DObjAnimMat_s * __cdecl SV_DObjGetRotTransArray(struct gentity_s *)
{	UNIMPLEMENTED();
}

struct DObjAnimMat_s * __cdecl SV_DObjGetMatrixArray(struct gentity_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjGetBoneIndex(struct gentity_s *,unsigned int)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjNumBones(struct gentity_s *)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl SV_GEntityForSvEntity(struct svEntity_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_FreeWeaponInfoMemory(void)
{	UNIMPLEMENTED();
}

int __cdecl SV_GetEntityToken(char *,int)
{	UNIMPLEMENTED();
}

void __cdecl SV_XModelDebugBoxes(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_GameSendServerCommand(int,enum svscmd_type,char const *)
{	UNIMPLEMENTED();
}

int __cdecl SV_EntityContact(float const * const,float const * const,struct gentity_s const *)
{	UNIMPLEMENTED();
}

int __cdecl SV_GameCommand(void)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjInitServerTime(struct gentity_s *,float)
{	UNIMPLEMENTED();
}

void __cdecl SV_Hunk_FreeTempMemoryInternal(void *)
{	UNIMPLEMENTED();
}

void * __cdecl SV_Hunk_AllocateTempMemoryInternal(int)
{	UNIMPLEMENTED();
}

void * __cdecl SV_Hunk_AllocAlignInternal(int,int)
{	UNIMPLEMENTED();
}

void * __cdecl SV_Hunk_AllocInternal(int)
{	UNIMPLEMENTED();
}

void __cdecl SV_GetServerinfo(char *,int)
{	UNIMPLEMENTED();
}

struct svEntity_s * __cdecl SV_SvEntityForGentity(struct gentity_s const *)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl SV_XModelGet(char const *)
{	UNIMPLEMENTED();
}

int __cdecl SV_inSnapshot(float const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl SV_SetBrushModel(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_SetGametype(void)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjDumpInfo(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjDisplayAnim(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjCalcSkel(struct gentity_s *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjCalcAnim(struct gentity_s *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjGetHierarchyBits(struct gentity_s *,int,int * const)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjCreateSkelForBones(struct gentity_s *,int * const)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjCreateSkelForBone(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjUpdateServerTime(struct gentity_s *,float,int)
{	UNIMPLEMENTED();
}

void __cdecl SV_GameDropClient(int,char const *)
{	UNIMPLEMENTED();
}

void __cdecl SV_ShutdownGameProgs(void)
{	UNIMPLEMENTED();
}

void __cdecl SV_InitGameProgs(int)
{	UNIMPLEMENTED();
}

void __cdecl SV_RestartGameProgs(int)
{	UNIMPLEMENTED();
}

int gameInitialized;
void * __cdecl SV_AllocXModelPrecacheColl(int)
{	UNIMPLEMENTED();
}

void * __cdecl SV_AllocXModelPrecache(int)
{	UNIMPLEMENTED();
}

char * __cdecl SV_AllocSkelMemory(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl SV_InitGameVM(int,int)
{	UNIMPLEMENTED();
}

