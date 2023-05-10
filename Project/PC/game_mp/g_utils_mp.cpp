int __cdecl DebugLine(float * const,float * const,int)
{	UNIMPLEMENTED();
}

void __cdecl G_AddEvent(struct gentity_s * ent, int event, int eventParm)
{	UNIMPLEMENTED();
}

int __cdecl G_GetPlayerCorpseIndex(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl G_FreeEntityRefs(struct gentity_s *)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl G_Find(struct gentity_s *,int,unsigned short)
{	UNIMPLEMENTED();
}

int __cdecl G_EntIsLinkedTo(struct gentity_s *,struct gentity_s *)
{	UNIMPLEMENTED();
}

char const * __cdecl G_ModelName(int index)
{	UNIMPLEMENTED();
}

void __cdecl G_SetAngle(struct gentity_s * ent, float const * const angle)
{	UNIMPLEMENTED();
}

void __cdecl G_SetOrigin(struct gentity_s * ent, float const * const origin)
{	UNIMPLEMENTED();
}

void __cdecl G_PlaySoundAliasAsMaster(struct gentity_s *,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl G_PlaySoundAlias(struct gentity_s * ent, unsigned char index)
{	UNIMPLEMENTED();
}

void __cdecl G_AddPredictableEvent(struct gentity_s * ent, int event, int eventParm)
{	UNIMPLEMENTED();
}

void __cdecl PlayerCorpse_Free(struct gentity_s *)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl G_FindStr(struct gentity_s *,int,char const *)
{	UNIMPLEMENTED();
}

int __cdecl G_XModelBad(int index)
{	UNIMPLEMENTED();
}

int __cdecl infront(struct gentity_s *,struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl G_SetConstString(unsigned short * to, char const * from)
{	UNIMPLEMENTED();
}

void __cdecl G_InitGentity(struct gentity_s * e)
{	UNIMPLEMENTED();
}

void __cdecl G_SafeDObjFree(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl G_EntUnlink(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl G_UpdateTagInfo(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl G_EntLinkToWithOffset(struct gentity_s * ent, struct gentity_s * parent, unsigned int tagName, float const * const originOffset, float const * const anglesOffset)
{	UNIMPLEMENTED();
}

void __cdecl G_UpdateTagInfoOfChildren(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl G_OverrideModel(int modelindex, char const * defaultModelName)
{	UNIMPLEMENTED();
}

int __cdecl G_FindConfigstringIndex(char const * name, int start, int max, int create, char const * errormsg)
{	UNIMPLEMENTED();
}

int __cdecl G_RumbleIndex(char const *)
{	UNIMPLEMENTED();
}

unsigned char __cdecl G_SoundAliasIndex(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl G_ShellShockIndex(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl G_EffectIndex(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl G_TagIndex(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl G_ModelIndex(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl G_ShaderIndex(char const * name)
{	UNIMPLEMENTED();
}

int __cdecl G_LocalizedStringIndex(char const * string)
{	UNIMPLEMENTED();
}

int __cdecl G_AnimScriptSound(int client, struct snd_alias_list_t * aliasList)
{	UNIMPLEMENTED();
}

void __cdecl G_SetModel(struct gentity_s * ent, char const * modelName)
{	UNIMPLEMENTED();
}

void __cdecl G_FreeEntity(struct gentity_s * ed)
{	UNIMPLEMENTED();
}

int __cdecl G_GetFreePlayerCorpseIndex()
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl G_SpawnPlayerClone()
{	UNIMPLEMENTED();
}

void __cdecl G_PrintEntities()
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl G_PickTarget(unsigned short)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl G_Spawn()
{	UNIMPLEMENTED();
}

void __cdecl G_DObjUpdate(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl G_TempEntity(float const * const origin, int event)
{	UNIMPLEMENTED();
}

void __cdecl G_DObjCalcBone(struct gentity_s * ent, int boneIndex)
{	UNIMPLEMENTED();
}

void __cdecl G_DObjCalcPose(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl G_CalcTagParentAxis(struct gentity_s * ent, float  parentAxis)[3])
{	UNIMPLEMENTED();
}

void __cdecl G_EntDetachAll(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

int __cdecl G_EntDetach(struct gentity_s * ent, char const * modelName, unsigned int tagName)
{	UNIMPLEMENTED();
}

int __cdecl G_EntAttach(struct gentity_s * ent, char const * modelName, unsigned int tagName, int ignoreCollision)
{	UNIMPLEMENTED();
}

void __cdecl G_PlaySoundAliasAtPoint(float const * const,unsigned char)
{	UNIMPLEMENTED();
}

struct DObjAnimMat_s * __cdecl G_DObjGetLocalTagMatrix(struct gentity_s * ent, unsigned int tagName)
{	UNIMPLEMENTED();
}

void __cdecl G_SetFixedLink(struct gentity_s * ent, int eAngles)
{	UNIMPLEMENTED();
}

void __cdecl G_CalcTagAxis(struct gentity_s * ent, int bAnglesOnly)
{	UNIMPLEMENTED();
}

void __cdecl G_CalcTagParentRelAxis(struct gentity_s *,float (* const)[3])
{	UNIMPLEMENTED();
}

int __cdecl G_EntLinkTo(struct gentity_s * ent, struct gentity_s * parent, unsigned int tagName)
{	UNIMPLEMENTED();
}

int __cdecl G_DObjGetWorldTagPos(struct gentity_s * ent, unsigned int tagName, float * const pos)
{	UNIMPLEMENTED();
}

int __cdecl G_DObjGetWorldTagMatrix(struct gentity_s * ent, unsigned int tagName, float  tagMat)[3])
{	UNIMPLEMENTED();
}

void __cdecl G_GeneralLink(struct gentity_s * ent)
{	UNIMPLEMENTED();
}

void __cdecl G_FreeEntityDelay(struct gentity_s * ed)
{	UNIMPLEMENTED();
}

void __cdecl G_KillBox(struct gentity_s *)
{	UNIMPLEMENTED();
}

int __cdecl G_DObjUpdateServerTime(struct gentity_s * ent, int bNotify)
{	UNIMPLEMENTED();
}

bool __cdecl G_MaySpawnEntity(struct gentity_s *)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl G_GetModel(int)
{	UNIMPLEMENTED();
}

int __cdecl G_EntLinkToInternal(struct gentity_s *,struct gentity_s *,unsigned int)
{	UNIMPLEMENTED();
}

