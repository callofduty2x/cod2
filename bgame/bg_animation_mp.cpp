float __cdecl I_rsqrt(float)
{	UNIMPLEMENTED();
}

bool __cdecl Com_BitCheck(int const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl Com_BitSet(int * const,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_PlayAnim(struct playerState_s * ps, int animNum, enum animBodyPart_t bodyPart, int forceDuration, int setTimer, int isContinue, int force)
{	UNIMPLEMENTED();
}

void __cdecl BG_LerpOffset(float * const offset_goal, float maxOffsetChange, float * const offset)
{	UNIMPLEMENTED();
}

void __cdecl BG_UpdateConditionValue(int client, int condition, int value, int checkConversion)
{	UNIMPLEMENTED();
}

int __cdecl BG_ExecuteCommand(struct playerState_s * ps, struct animScriptCommand_t * scriptCommand, int setTimer, int isContinue, int force)
{	UNIMPLEMENTED();
}

void __cdecl BG_InitWeaponString(int index, char const * name)
{	UNIMPLEMENTED();
}

void __cdecl BG_AnimUpdatePlayerStateConditions(struct pmove_t * pmove)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetAnimScriptEvent(struct playerState_s *,enum scriptAnimEventTypes_t)
{	UNIMPLEMENTED();
}

int __cdecl BG_AnimScriptEvent(struct playerState_s * ps, enum scriptAnimEventTypes_t event, int isContinue, int force)
{	UNIMPLEMENTED();
}

int __cdecl BG_AnimScriptStateChange(struct playerState_s *,enum aistateEnum_t,enum aistateEnum_t)
{	UNIMPLEMENTED();
}

int __cdecl BG_AnimScriptAnimation(struct playerState_s * ps, enum aistateEnum_t state, enum scriptAnimMoveTypes_t movetype, int isContinue)
{	UNIMPLEMENTED();
}

void __cdecl BG_InitWeaponStrings()
{	UNIMPLEMENTED();
}

void __cdecl BG_Player_DoControllers(struct DObj_s const * pDObj, struct entityState_s const * es, int * const partBits, struct clientInfo_t * ci, int frametime)
{	UNIMPLEMENTED();
}

void __cdecl BG_UpdatePlayerDObj(struct DObj_s * pDObj, struct entityState_s * es, struct clientInfo_t * ci, int attachIgnoreCollision)
{	UNIMPLEMENTED();
}

struct animation_s * __cdecl BG_GetAnimationForIndex(int,int)
{	UNIMPLEMENTED();
}

struct animation_s * __cdecl BG_AnimationForString(char const *)
{	UNIMPLEMENTED();
}

void __cdecl BG_AnimParseError(char const * msg, ...)
{	UNIMPLEMENTED();
}

int __cdecl BG_IsMantleAnim(struct clientInfo_t *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_IsProneAnim(struct clientInfo_t *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_IsCrouchingAnim(struct clientInfo_t *,int)
{	UNIMPLEMENTED();
}

char * __cdecl BG_GetAnimString(int,int)
{	UNIMPLEMENTED();
}

char * __cdecl BG_CopyStringIntoBuffer(char const *,char *,int,int *)
{	UNIMPLEMENTED();
}

int __cdecl BG_IndexForString(char const * token, struct animStringItem_t * strings, int allowFail)
{	UNIMPLEMENTED();
}

int __cdecl BG_AnimationIndexForString(char const * string)
{	UNIMPLEMENTED();
}

int __cdecl BG_PlayAnimName(struct playerState_s *,char *,enum animBodyPart_t,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl BG_ParseCommands(char const * * input, struct animScriptItem_t * scriptItem, struct animScriptData_t * scriptData)
{	UNIMPLEMENTED();
}

void __cdecl BG_PlayerAnimation(struct DObj_s const * pDObj, struct entityState_s * es, struct clientInfo_t * ci)
{	UNIMPLEMENTED();
}

void __cdecl BG_LoadAnim()
{	UNIMPLEMENTED();
}

struct bgs_t * bgs;
void __cdecl BG_LerpAngles(float * const,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_PlayerAnimation_VerifyAnim(struct XAnimTree_s *,struct lerpFrame_t *)
{	UNIMPLEMENTED();
}

int __cdecl BG_EvaluateConditions(struct clientInfo_t *,struct animScriptItem_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_SetupAnimNoteTypes(struct animScriptData_t *)
{	UNIMPLEMENTED();
}

long __cdecl BG_StringHashValue(char const *)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetConditionValue(struct clientInfo_t *,int,int)
{	UNIMPLEMENTED();
}

struct animScriptItem_t * __cdecl BG_FirstValidItem(int,struct animScript_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_AnimPlayerConditions(struct entityState_s *,struct clientInfo_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_Player_DoControllersInternal(struct DObj_s const *,struct entityState_s const *,int * const,struct clientInfo_t *,struct controller_info_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_SwingAngles(float,float,float,float,float *,int *)
{	UNIMPLEMENTED();
}

void __cdecl BG_PlayerAngles(struct entityState_s *,struct clientInfo_t *)
{	UNIMPLEMENTED();
}

struct loadAnim_t * __cdecl BG_LoadAnimForAnimIndex(int)
{	UNIMPLEMENTED();
}

struct scr_animtree_t __cdecl BG_FindAnimTree(char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl BG_ParseConditionBits(char const * *,struct animStringItem_t *,int,int * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_FindAnimTrees(void)
{	UNIMPLEMENTED();
}

void __cdecl BG_FindAnims(void)
{	UNIMPLEMENTED();
}

void __cdecl BG_SetNewAnimation(struct clientInfo_t *,struct lerpFrame_t *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_ParseConditions(char const * *,struct animScriptItem_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_RunLerpFrameRate(struct clientInfo_t *,struct lerpFrame_t *,int,struct entityState_s *)
{	UNIMPLEMENTED();
}

void __cdecl BG_AnimParseAnimScript(struct animScriptData_t *,struct loadAnim_t *,int *)
{	UNIMPLEMENTED();
}

void __cdecl BG_FinalizePlayerAnims(void)
{	UNIMPLEMENTED();
}

