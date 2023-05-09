void __cdecl CL_SetLodOrigin(struct refdef_s const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetADS(bool)
{	UNIMPLEMENTED();
}

void __cdecl LoadWorld(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_CapTurnRate(float,float)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetWeaponInfoMemory(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_PickMaterial(float const * const,float const * const,char *,char *,char *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_TrackStatistics(struct trStatistics_t *)
{	UNIMPLEMENTED();
}

int __cdecl CL_MarkFragments(float const (* const)[3],float const * const,float const (* const)[3],float,int,struct GfxWorldVertex * const,int,struct GfxMarkFragment * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ModelBounds(struct GfxBrushModel *,float * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawSprite(struct Material *,unsigned char const * const,float const * const,float,float,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawQuadPic(float const (*)[2],float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetWorldBounds(float * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawStretchPicRotate(float,float,float,float,float,float,float,float,float,float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawStretchPicPhysical(float,float,float,float,float,float,float,float,float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CL_BlendSavedScreen(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SaveScreen(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetViewport(int,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_IssueDelayedDrawing(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_EndDelayedDrawing(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_BeginDelayedDrawing(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_RenderScene(struct refdef_s const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_SwitchFog(int,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetFog(int,float,float,unsigned char,unsigned char,unsigned char,float)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddLightToScene(float const * const,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddPolyToScene(struct Material *,unsigned short,unsigned short,struct GfxWorldVertex const * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_DefaultVertexFrames(int,struct GfxWorldVertex * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClearScene(void)
{	UNIMPLEMENTED();
}

struct Material * __cdecl CL_RegisterMaterialNoMip(char const *,int)
{	UNIMPLEMENTED();
}

struct Material * __cdecl CL_RegisterMaterial(char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetIgnorePrecacheErrors(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_FinishLoadingModels(void)
{	UNIMPLEMENTED();
}

struct GfxBrushModel * __cdecl CL_RegisterInlineModel(int)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl CL_RegisterModel(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetConfigString(int)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_SurfaceTypeToName(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_SurfaceTypeFromName(char const *)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetUserCmdInShellshock(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetUserCmdInShellshock(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetUserCmdValue(int,int,float)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetCurrentSnapshotNumber(int *,int *)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetCurrentCmdNumber(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetScreenDimensions(int *,int *,float *)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetGameState(struct gameState_t *)
{	UNIMPLEMENTED();
}

void __cdecl CL_LookupColor(unsigned char,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetViewAngles(float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetUserCmdAimValues(float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_FreeWeaponInfoMemory(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ArchiveClientState(struct MemoryFile *)
{	UNIMPLEMENTED();
}

int __cdecl CL_GameCommand(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawStretchPic(float,float,float,float,int,int,float,float,float,float,float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetFullScreenViewport(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawString(int,int,char const *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_CloseInGameMenu(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClosePopup(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateColor(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_FX_AdjustCamera(struct refdef_s *)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl CL_PickSoundAlias(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownCGame(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_CloseAllMenus(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_Popup(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ConfigstringModified(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetUserCmd(int,struct usercmd_s *)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetSnapshot(int,struct snapshot_t *)
{	UNIMPLEMENTED();
}

void __cdecl CL_CM_LoadMap(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_AdjustTimeDelta(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SubtitlePrint(char const *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl CL_DObjCreateSkelForBones(struct DObj_s const *,int * const,int)
{	UNIMPLEMENTED();
}

int __cdecl CL_DObjCreateSkelForBone(struct DObj_s *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddCgameCommand(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_FirstSnapshot(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SyncTimes(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DObjCreate(struct DObjModel_s *,unsigned short,struct XAnimTree_s *,char *)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetServerCommand(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitCGame(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_StartLoading(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetCGameTime(void)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_TimeDemoLogBaseName(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateColorInternal(char const *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateTimeDemo(void)
{	UNIMPLEMENTED();
}

