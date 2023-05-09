float __cdecl asin(float)
{	UNIMPLEMENTED();
}

void * __cdecl Scr_LoadRead(int)
{	UNIMPLEMENTED();
}

void (__cdecl*__cdecl Scr_GetFunction(char const * *,int *))(void)
{	UNIMPLEMENTED();
}

int __cdecl ObjectiveStateIndexFromString(enum objectiveState_t *,unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetHealth(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetAngles(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

void (__cdecl*__cdecl Scr_GetMethod(char const * *,int *))(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl G_InitObjectives(void)
{	UNIMPLEMENTED();
}

char const * __cdecl Scr_GetGameTypeNameForScript(char const *)
{	UNIMPLEMENTED();
}

int __cdecl Scr_IsValidGameType(char const *)
{	UNIMPLEMENTED();
}

void __cdecl GScr_DisableAimAssist(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_EnableAimAssist(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_DisableGrenadeBounce(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_EnableGrenadeBounce(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_DisableGrenadeTouchDamage(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_EnableGrenadeTouchDamage(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_ShowToPlayer(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_Hide(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_Show(struct scr_entref_t)
{	UNIMPLEMENTED();
}

unsigned int __cdecl GScr_AllocString(char const *)
{	UNIMPLEMENTED();
}

void __cdecl GScr_FreeScripts(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_LocalizationError(int,char const *)
{	UNIMPLEMENTED();
}

int __cdecl GScr_GetHeadIconIndex(char const *)
{	UNIMPLEMENTED();
}

int __cdecl GScr_GetStatusIconIndex(char const *)
{	UNIMPLEMENTED();
}

int __cdecl GScr_GetScriptMenuIndex(char const *)
{	UNIMPLEMENTED();
}

int __cdecl G_GetHintStringIndex(int *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl GScr_AddVector(float const * const)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetOrigin(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetPartName(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetNumParts(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_AddEntity(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ParseGameTypeList(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ConstructMessageString(int,int,char const *,char *,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_MakeGameMessage(int,char const *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayerVote(struct gentity_s *,char *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_VoteCalled(struct gentity_s *,char *,char *,char *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayerKilled(struct gentity_s *,struct gentity_s *,struct gentity_s *,int,int,int,float const * const,enum hitLocation_t,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayerDamage(struct gentity_s *,struct gentity_s *,struct gentity_s *,int,int,int,int,float const * const,float const * const,enum hitLocation_t,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayerDisconnect(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayerConnect(struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl Scr_StartupGameType(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_LoadGameType(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_LoadLevel(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SightTracePassed(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_LoadGameTypeScript(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_LoadScripts(void)
{	UNIMPLEMENTED();
}

struct BuiltinFunctionDef * functions;
struct scr_data_t g_scr_data;
void (__cdecl*__cdecl BuiltIn_GetMethod(char const * *,int *))(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_MatchEnd(void)
{	UNIMPLEMENTED();
}

void __cdecl ClearObjective_OnEntity(struct objective_t *)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetPlayerIgnoreRadiusDamage(void)
{	UNIMPLEMENTED();
}

void __cdecl ClearObjective(struct objective_t *)
{	UNIMPLEMENTED();
}

void __cdecl assertCmd(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetArchive(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_Current(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_OnEntity(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_Position(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_Delete(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ValidateLocalizedStringRef(int,char const *,int)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl GetEntity(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ReleaseClaimedTrigger(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ClientReleaseTrigger(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ClientClaimTrigger(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetBottomArc(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetTopArc(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetLeftArc(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetRightArc(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetStableMissile(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_StopLoopSound(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_EnableLinkTo(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_line(void)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl GetPlayerEntity(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ViewKick(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_StopShellShock(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SendXboxLiveRanks(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_UpdateScores(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SoundFade(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_MusicStop(void)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_Unlink(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetTeamForTrigger(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetClientNameMode(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetTeamScore(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_Objective_Team(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ClientPrint(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_AllClientsPrint(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_MusicPlay(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_LogPrint(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_State(void)
{	UNIMPLEMENTED();
}

void __cdecl assertmsgCmd(void)
{	UNIMPLEMENTED();
}

void __cdecl assertexCmd(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_print3d(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_BanPlayer(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_KickPlayer(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_LoadMap(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_MapRestart(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ExitLevel(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetVoteNoCount(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetVoteYesCount(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetVoteTime(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetVoteString(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ShellShock(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetWinningTeam(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetWinningPlayer(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayFX_Error(char *,int)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AmbientStop(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AmbientPlay(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_PrecacheHeadIcon(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_PrecacheStatusIcon(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_PrecacheMenu(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_IsSplitscreen(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_IsValidGameType(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_MapExists(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_LocalToWorldCoords(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetTeamPlayersAlive(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_UpdateClientNames(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetTeamScore(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_IsPlayerNumber(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_IsPlayer(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetFog(char const *,float,float,float,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Scr_LoadFX(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetNorthYaw(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetAngleDelta(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetMoveDelta(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PrecacheRumble(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PrecacheString(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PrecacheShader(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PrecacheShellShock(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PrecacheModel(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_StrTok(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_ToLower(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_GetSubStr(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_IsSubStr(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AnglesToForward(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AnglesToRight(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_AnglesToUp(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_VectorToAngles(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_VectorNormalize(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_VectorDot(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Closer(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_LengthSquared(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Length(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_DistanceSquared(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Distance(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_CastInt(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_atan(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_acos(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_asin(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_tan(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_cos(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_sin(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RandomFloat(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_getStartTime(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_positionWouldTelefrag(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_WorldEntNumber(void)
{	UNIMPLEMENTED();
}

void __cdecl SetObjectiveIcon(struct objective_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetEntityNumber(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_SetContents(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetNormalHealth(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_StopRumble(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_PlayRumbleInternal(struct scr_entref_t,int)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_PlayLoopSound(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_SoundExists(void)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_IsTouching(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetEye(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetOrigin(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetAttachIgnoreCollision(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetAttachTagName(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetAttachModelName(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetAttachSize(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetBrushModelCenter(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_AnimHasNotetrack(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetAnimLength(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetTime(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetDvarFloat(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetDvarInt(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetDvar(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_IsAlive(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_IsString(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_IsDefined(void)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetClanURL(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetClanDescription(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetClanMotto(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetClanName(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_GetClanId(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetExponentialFog(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_SetLinearFog(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_Icon(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_Objective_Add(void)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_PlayLoopRumble(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_PlayRumble(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_GetEntByNum(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_PrecacheTurret(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_GetAmmoCount(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PrecacheItem(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_FGetArg(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_FReadLn(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_FPrintln(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_CloseFile(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RandomFloatRange(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RandomIntRange(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_RandomInt(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetCursorHint(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_SetNormalHealth(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_GetWeaponModel(void)
{	UNIMPLEMENTED();
}

void __cdecl print(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetPlayerTeamRank(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_OpenFile(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_MakeDvarServerInfo(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_ClientAnnouncement(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_Announcement(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayLoopedFX(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayFXOnTag(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetHintString(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_SetModel(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SetDvar(void)
{	UNIMPLEMENTED();
}

void __cdecl println(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_StopAllRumbles(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayRumbleOnPosInternal(int)
{	UNIMPLEMENTED();
}

void __cdecl GScr_Earthquake(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayFX(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_Obituary(void)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_PlaySoundAsMaster(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_PlaySound(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_detachAll(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_detach(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_attach(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_SpawnTurret(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_Spawn(void)
{	UNIMPLEMENTED();
}

void __cdecl iprintlnbold(void)
{	UNIMPLEMENTED();
}

void __cdecl iprintln(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_PostLoadScripts(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayLoopRumbleOnPos(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PlayRumbleOnPos(void)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_Delete(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_UseBy(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl ScrCmd_LinkTo(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl GScr_PlaceSpawnPoint(struct scr_entref_t)
{	UNIMPLEMENTED();
}

void __cdecl Scr_GrenadeExplosionEffect(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_PhysicsTrace(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_BulletTracePassed(void)
{	UNIMPLEMENTED();
}

void __cdecl Scr_BulletTrace(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_RadiusDamage(void)
{	UNIMPLEMENTED();
}

void __cdecl GScr_AddTestClient(void)
{	UNIMPLEMENTED();
}

int __cdecl GScr_LoadScriptAndLabel(char const *,char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl GScr_LoadLevelScript(void)
{	UNIMPLEMENTED();
}

