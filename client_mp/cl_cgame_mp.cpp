void __cdecl CL_SetLodOrigin(struct refdef_s const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetADS(bool ads)
{	UNIMPLEMENTED();
}

void __cdecl LoadWorld(char const * mapname)
{	UNIMPLEMENTED();
}

void __cdecl CL_CapTurnRate(float maxPitchSpeed, float maxYawSpeed)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetWeaponInfoMemory()
{	UNIMPLEMENTED();
}

int __cdecl CL_PickMaterial(float const * const, float const * const, char *, char *, char *, int)
{	UNIMPLEMENTED();
}

void __cdecl CL_TrackStatistics(struct trStatistics_t *)
{	UNIMPLEMENTED();
}

int __cdecl CL_MarkFragments(float const (* const)[3],float const * const,float const (* const)[3],float,int,struct GfxWorldVertex * const,int,struct GfxMarkFragment * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ModelBounds(struct GfxBrushModel * model, float * const mins, float * const maxs)
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawSprite(struct Material * material, unsigned char const * const rgbaColor, float const * const pos, float radius, float minScreenRadius, int renderFxFlags)
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

void __cdecl CL_DrawStretchPicPhysical(float x, float y, float w, float h, float s1, float t1, float s2, float t2, float const * const color, struct Material * material)
{	UNIMPLEMENTED();
}

void __cdecl CL_BlendSavedScreen(int fadeMsec)
{	UNIMPLEMENTED();
}

void __cdecl CL_SaveScreen()
{	UNIMPLEMENTED();
}

void __cdecl CL_SetViewport(int x, int y, int width, int height)
{	UNIMPLEMENTED();
}

void __cdecl CL_IssueDelayedDrawing(int marker)
{	UNIMPLEMENTED();
}

void __cdecl CL_EndDelayedDrawing(int marker)
{	UNIMPLEMENTED();
}

int __cdecl CL_BeginDelayedDrawing()
{	UNIMPLEMENTED();
}

void __cdecl CL_RenderScene(struct refdef_s const * fd)
{	UNIMPLEMENTED();
}

void __cdecl CL_SwitchFog(int,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetFog(int fogvar, float start, float end, unsigned char r, unsigned char g, unsigned char b, float density)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddLightToScene(float const * const org, float radius, float r, float g, float b)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddPolyToScene(struct Material *, unsigned short, unsigned short, struct GfxWorldVertex const * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_DefaultVertexFrames(int vertCount, struct GfxWorldVertex * const verts)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClearScene()
{	UNIMPLEMENTED();
}

struct Material * __cdecl CL_RegisterMaterialNoMip(char const * name, int imageTrack)
{	UNIMPLEMENTED();
}

struct Material * __cdecl CL_RegisterMaterial(char const * name, int imageTrack)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetIgnorePrecacheErrors(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_FinishLoadingModels()
{	UNIMPLEMENTED();
}

struct GfxBrushModel * __cdecl CL_RegisterInlineModel(int modelIndex)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl CL_RegisterModel(char const *)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetConfigString(int index)
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

void __cdecl CL_SetUserCmdInShellshock(int shocked)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetUserCmdValue(int userCmdValue, int holdableValue, float sensitivityScale)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetCurrentSnapshotNumber(int * snapshotNumber, int * serverTime)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetCurrentCmdNumber()
{	UNIMPLEMENTED();
}

void __cdecl CL_GetScreenDimensions(int *, int *, float *)
{	UNIMPLEMENTED();
}

void __cdecl CL_GetGameState(struct gameState_t *)
{	UNIMPLEMENTED();
}

void __cdecl CL_LookupColor(unsigned char c, float * const color)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetViewAngles(float * const)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetUserCmdAimValues(float * const kickAngles)
{	UNIMPLEMENTED();
}

void __cdecl CL_FreeWeaponInfoMemory()
{	UNIMPLEMENTED();
}

void __cdecl CL_ArchiveClientState(struct MemoryFile * memFile)
{	UNIMPLEMENTED();
}

int __cdecl CL_GameCommand()
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawStretchPic(float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, float const * const color, struct Material * material)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetFullScreenViewport()
{	UNIMPLEMENTED();
}

void __cdecl CL_DrawString(int x, int y, char const * pszString, int bShadow, int iCharHeight)
{	UNIMPLEMENTED();
}

void __cdecl CL_CloseInGameMenu()
{	UNIMPLEMENTED();
}

void __cdecl CL_ClosePopup(char const * menu)
{	UNIMPLEMENTED();
}

void __cdecl CL_UpdateColor()
{	UNIMPLEMENTED();
}

void __cdecl CL_FX_AdjustCamera(struct refdef_s * refdef)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl CL_PickSoundAlias(char const * aliasname)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownCGame()
{	UNIMPLEMENTED();
}

void __cdecl CL_CloseAllMenus()
{	UNIMPLEMENTED();
}

int __cdecl CL_Popup(char const * menu)
{	UNIMPLEMENTED();
}

void __cdecl CL_ConfigstringModified()
{	UNIMPLEMENTED();
}

int __cdecl CL_GetUserCmd(int cmdNumber, struct usercmd_s * ucmd)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetSnapshot(int snapshotNumber, struct snapshot_t * snapshot)
{	UNIMPLEMENTED();
}

void __cdecl CL_CM_LoadMap(char const * mapname)
{	UNIMPLEMENTED();
}

void __cdecl CL_AdjustTimeDelta()
{	UNIMPLEMENTED();
}

void __cdecl CL_SubtitlePrint(char const * pszText, int iDuration, int iLineWidth)
{	UNIMPLEMENTED();
}

int __cdecl CL_DObjCreateSkelForBones(struct DObj_s const * obj, int * const partBits, int localClientNum)
{	UNIMPLEMENTED();
}

int __cdecl CL_DObjCreateSkelForBone(struct DObj_s * obj, int boneIndex, int localClientNum)
{	UNIMPLEMENTED();
}

void __cdecl CL_AddCgameCommand(char const * cmdName)
{	UNIMPLEMENTED();
}

void __cdecl CL_FirstSnapshot(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SyncTimes()
{	UNIMPLEMENTED();
}

void __cdecl CL_DObjCreate(struct DObjModel_s *,unsigned short,struct XAnimTree_s *,char *)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetServerCommand(int serverCommandNumber)
{	UNIMPLEMENTED();
}

void __cdecl CL_InitCGame()
{	UNIMPLEMENTED();
}

void __cdecl CL_StartLoading(char const * mapname, char const * gametype)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetCGameTime()
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

CL_SetExpectedHunkUsage(char const* mapname)
{	UNIMPLEMENTED();
}

CL_Material_Duplicate(Material* mtlCopy,  char const* name)
{	UNIMPLEMENTED();
}

CL_DuplicateFont(Font_s* fontCopy,  char const* name)
{	UNIMPLEMENTED();
}

CL_LoadSoundAliases(char const* loadspec)
{	UNIMPLEMENTED();
}

CL_UpdateLevelHunkUsage()
{	UNIMPLEMENTED();
}

