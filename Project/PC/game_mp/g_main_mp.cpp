void __cdecl G_UpdateObjectiveToClients(void)
{	UNIMPLEMENTED();
}

void __cdecl G_LogPrintf(char const *,...)
{	UNIMPLEMENTED();
}

struct clientState_s * __cdecl G_GetClientState(int)
{	UNIMPLEMENTED();
}

void __cdecl G_SetClientArchiveTime(int,int)
{	UNIMPLEMENTED();
}

int __cdecl G_GetClientArchiveTime(int)
{	UNIMPLEMENTED();
}

int __cdecl G_GetClientScore(int)
{	UNIMPLEMENTED();
}

float __cdecl G_GetFogOpaqueDistSqrd(void)
{	UNIMPLEMENTED();
}

void __cdecl G_SetSavePersist(int)
{	UNIMPLEMENTED();
}

int __cdecl G_GetSavePersist(void)
{	UNIMPLEMENTED();
}

void __cdecl G_UpdateHudElemsToClients(void)
{	UNIMPLEMENTED();
}

void __cdecl CalculateRanks(void)
{	UNIMPLEMENTED();
}

void __cdecl G_AddDebugString(float const * const,float const * const,float,char const *)
{	UNIMPLEMENTED();
}

void __cdecl SendScoreboardMessageToAllIntermissionClients(void)
{	UNIMPLEMENTED();
}

void __cdecl ExitLevel(void)
{	UNIMPLEMENTED();
}

void __cdecl G_RunThink(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl CheckVote(void)
{	UNIMPLEMENTED();
}

void * __cdecl Hunk_AllocXAnimServer(int)
{	UNIMPLEMENTED();
}

void __cdecl G_FreeEntities(void)
{	UNIMPLEMENTED();
}

void __cdecl G_ShutdownGame(int)
{	UNIMPLEMENTED();
}

void __cdecl DebugDumpAnims(void)
{	UNIMPLEMENTED();
}

void __cdecl G_SightTrace(int *,float const * const,float const * const,int,int)
{	UNIMPLEMENTED();
}

int __cdecl G_LocationalTracePassed(float const * const,float const * const,int,int)
{	UNIMPLEMENTED();
}

void __cdecl G_LocationalTrace(struct trace_t *,float const * const,float const * const,int,int,unsigned char *)
{	UNIMPLEMENTED();
}

int __cdecl G_TraceCapsuleComplete(float const * const,float const * const,float const * const,float const * const,int,int)
{	UNIMPLEMENTED();
}

void __cdecl G_TraceCapsule(struct trace_t *,float const * const,float const * const,float const * const,float const * const,int,int)
{	UNIMPLEMENTED();
}

void __cdecl G_XAnimUpdateEnt(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl G_RunFrame(int)
{	UNIMPLEMENTED();
}

void __cdecl G_InitGame(int,int,int,int)
{	UNIMPLEMENTED();
}

struct entityHandler_t * entityHandlers;
struct dvar_s const * const g_password;
struct dvar_s const * const g_smoothClients;
struct dvar_s const * const g_voteAbstainWeight;
struct dvar_s const * const g_gravity;
struct dvar_s const * const g_filterBan;
struct dvar_s const * const g_voiceChatsAllowed;
struct dvar_s const * const g_deadChat;
struct dvar_s const * const player_meleeHeight;
struct dvar_s const * const g_dumpAnims;
struct dvar_s const * const g_friendlyfireDist;
struct dvar_s const * const g_dropUpSpeedRand;
struct dvar_s const * const g_maxclients;
struct dvar_s const * const g_TeamName_Allies;
struct dvar_s const * const g_debugBullets;
struct dvar_s const * const g_synchronousClients;
struct dvar_s const * const player_meleeRange;
struct dvar_s const * const g_knockback;
struct dvar_s const * const voice_global;
struct dvar_s const * const g_allowVote;
struct dvar_s const * const g_dedicated;
struct dvar_s const * const g_TeamColor_Allies;
struct dvar_s const * const g_antilag;
struct dvar_s const * const g_playerCollisionEjectSpeed;
struct dvar_s const * const g_useholdspawndelay;
struct dvar_s const * const g_weaponAmmoPools;
struct dvar_s const * const g_ScoresBanner_Axis;
struct dvar_s const * const voice_localEcho;
struct dvar_s const * const g_dropUpSpeedBase;
struct dvar_s const * const g_listEntity;
struct dvar_s const * const g_inactivity;
struct dvar_s const * const voice_deadChat;
struct dvar_s const * const g_cheats;
struct dvar_s const * const g_maxDroppedWeapons;
struct dvar_s const * const g_dropForwardSpeed;
struct dvar_s const * const g_ScoresBanner_None;
struct dvar_s const * const player_meleeWidth;
struct dvar_s const * const g_voiceChatTalkingDuration;
struct dvar_s const * const g_useholdtime;
struct dvar_s const * const g_ScoresBanner_Spectators;
struct dvar_s const * const g_speed;
struct dvar_s const * const g_friendlyNameDist;
struct dvar_s const * const g_log;
struct dvar_s const * const g_TeamName_Axis;
struct dvar_s const * const g_TeamColor_Axis;
struct dvar_s const * const g_NoScriptSpam;
struct dvar_s const * const g_banIPs;
struct dvar_s const * const g_gametype;
struct dvar_s const * const g_debugLocDamage;
struct dvar_s const * const g_logSync;
struct dvar_s const * const g_mantleBlockTimeBuffer;
struct dvar_s const * const g_oldVoting;
struct dvar_s const * const g_ScoresBanner_Allies;
struct dvar_s const * const g_motd;
struct dvar_s const * const g_debugDamage;
struct dvar_s const * const g_clonePlayerMaxVelocity;
struct gentity_s * g_entities;
struct bgs_t level_bgs;
struct level_locals_t level;
int __cdecl SortRanks(void const *,void const *)
{	UNIMPLEMENTED();
}

void __cdecl G_FreeAnimTreeInstances(void)
{	UNIMPLEMENTED();
}

void __cdecl G_LoadAnimTreeInstances(void)
{	UNIMPLEMENTED();
}

void __cdecl G_RegisterDvars(void)
{	UNIMPLEMENTED();
}

void __cdecl G_CreateDObj(struct DObjModel_s *,unsigned short,struct XAnimTree_s *,int,struct clientInfo_t *)
{	UNIMPLEMENTED();
}

void __cdecl G_RunFrameForEntity(struct gentity_s *)
{	UNIMPLEMENTED();
}

