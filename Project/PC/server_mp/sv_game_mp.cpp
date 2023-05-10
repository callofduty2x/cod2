int __cdecl SV_GetClientPing(int clientNum)
{	UNIMPLEMENTED();
}

int __cdecl SV_GetGuid(int clientNum)
{	UNIMPLEMENTED();
}

int __cdecl SV_MapExists(char const * name)
{	UNIMPLEMENTED();
}

void __cdecl SV_ResetSkeletonCache()
{	UNIMPLEMENTED();
}

void __cdecl SV_GetUsercmd(int clientNum, struct usercmd_s * cmd)
{	UNIMPLEMENTED();
}

void __cdecl SV_LocateGameData(struct gentity_s * gEnts, int numGEntities, int sizeofGEntity_t, struct playerState_s * clients, int sizeofGameClient)
{	UNIMPLEMENTED();
}

struct playerState_s * __cdecl SV_GameClientNum(int num)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl SV_GentityNum(int)
{	UNIMPLEMENTED();
}

int __cdecl SV_NumForGentity(struct gentity_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_IsLocalClient(int clientNum)
{	UNIMPLEMENTED();
}

void __cdecl SV_SetWeaponInfoMemory()
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjExists(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl SV_ResetEntityParsePoint()
{	UNIMPLEMENTED();
}

struct XAnimTree_s * __cdecl SV_DObjGetTree(struct gentity_s * ent)
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

struct DObjAnimMat_s * __cdecl SV_DObjGetMatrixArray(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjGetBoneIndex(struct gentity_s * ent, unsigned int boneName)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjNumBones(struct gentity_s *)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl SV_GEntityForSvEntity(struct svEntity_s * svEnt)
{	UNIMPLEMENTED();
}

void __cdecl SV_FreeWeaponInfoMemory(void)
{	UNIMPLEMENTED();
}

int __cdecl SV_GetEntityToken(char * buffer, int bufferSize)
{	UNIMPLEMENTED();
}

void __cdecl SV_XModelDebugBoxes(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl SV_GameSendServerCommand(int clientNum, enum svscmd_type type, char const * text)
{	UNIMPLEMENTED();
}

int __cdecl SV_EntityContact(float const * const mins, float const * const maxs, struct gentity_s const * gEnt)
{	UNIMPLEMENTED();
}

int __cdecl SV_GameCommand()
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjInitServerTime(struct gentity_s * ent, float dtime)
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

void __cdecl SV_GetServerinfo(char * buffer, int bufferSize)
{	UNIMPLEMENTED();
}

struct svEntity_s * __cdecl SV_SvEntityForGentity(struct gentity_s const *)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl SV_XModelGet(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl SV_inSnapshot(float const * const origin, int iEntityNum)
{	UNIMPLEMENTED();
}

void __cdecl SV_SetBrushModel(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl SV_SetGametype()
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjDumpInfo(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjDisplayAnim(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjCalcSkel(struct gentity_s * ent, int * const partBits)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjCalcAnim(struct gentity_s * ent, int * const partBits)
{	UNIMPLEMENTED();
}

void __cdecl SV_DObjGetHierarchyBits(struct gentity_s * ent, int boneIndex, int * const partBits)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjCreateSkelForBones(struct gentity_s * ent, int * const partBits)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjCreateSkelForBone(struct gentity_s * ent, int boneIndex)
{	UNIMPLEMENTED();
}

int __cdecl SV_DObjUpdateServerTime(struct gentity_s * ent, float dtime, int bNotify)
{	UNIMPLEMENTED();
}

void __cdecl SV_GameDropClient(int, char const *)
{	UNIMPLEMENTED();
}

void __cdecl SV_ShutdownGameProgs()
{	UNIMPLEMENTED();
}

void __cdecl SV_InitGameProgs(int savepersist)
{	UNIMPLEMENTED();
}

void __cdecl SV_RestartGameProgs(int savepersist)
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

