public: long __cdecl D3DDevice::AcquireThreadOwnership(void)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::ReleaseThreadOwnership(void)
{	UNIMPLEMENTED();
}

public: int __cdecl D3DDevice::IsFencePending(unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl Vec4Clear(float * const)
{	UNIMPLEMENTED();
}

bool __cdecl R_HaveFloatZ(void)
{	UNIMPLEMENTED();
}

bool __cdecl R_NeedFloatZ(void)
{	UNIMPLEMENTED();
}

void __cdecl R_BeginDebugFrame(void)
{	UNIMPLEMENTED();
}

struct GfxViewParms * __cdecl R_AllocViewParms(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ToggleSmpFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddFrontendCmd(int,void *)
{	UNIMPLEMENTED();
}

void __cdecl R_EndRemoteScreenUpdate(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawTriangles(struct Material *,enum MaterialTechniqueType,short,unsigned short const * const,short,float const (* const)[4],float const (* const)[3],unsigned char const (* const)[4],float const (* const)[2])
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBlendSavedScreen(int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSaveScreen(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdClearScreen(int,float const * const,float,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBlurShadowCookie(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSunPostEffects(int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdApplyLatePostEffects(float)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdApplyEarlyPostEffects(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetViewport(int,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBeginView(int,struct GfxSceneDef const *,struct GfxViewParms const *,struct GfxLodParms const *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdShadowCookie(struct _D3DMATRIX const *,float)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdClipPlanes(int,float const (* const)[4])
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetStencilPlanes(float,int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetStencilRefValue(int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSun(int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdResolveRenderTarget(int,enum _D3DFORMAT,float const * const,float,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetRenderTarget(enum GfxRenderTargetId)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdResumeUntiledRendering(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdEndTiling(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBeginTiling(enum GfxTileOrder,enum GfxRenderTargetId,enum GfxRenderTargetId)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdPreTessGroupCompleted(int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdLightProperties(int,struct GfxLight const *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetMaterialColor(float const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawFullScreenColoredQuad(float,float,float,float,float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSprite(struct Material * const,unsigned char const * const,float const * const,float,float,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawQuadPic(float const (*)[2],float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawTextInSpace(char const *,struct Font_s *,float const * const,float const * const,float const * const,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawTextWithCursor(char const *,int,struct Font_s *,float,float,float,float,float const * const,int,int,char)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawStretchRaw(int,int,int,int,int,int,unsigned char const *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawStretchPicRotate(float,float,float,float,float,float,float,float,float,float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawStretchPic(float,float,float,float,float,float,float,float,float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl R_IssueDelayedDrawing(int)
{	UNIMPLEMENTED();
}

void __cdecl R_EndDelayedDrawing(int)
{	UNIMPLEMENTED();
}

int __cdecl R_BeginDelayedDrawing(void)
{	UNIMPLEMENTED();
}

void __cdecl R_SkinGfxEntityDelayed(struct GfxEntity *)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateXModelBoundsDelayed(struct GfxEntity *)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateEffectsNonBolt(void)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateEffectsBolt(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ShutdownBackendData(void)
{	UNIMPLEMENTED();
}

void __cdecl R_InitBackendData(void)
{	UNIMPLEMENTED();
}

int __cdecl R_ForceEndRemoteScreenUpdate(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawLines(short,short,struct GfxPointVertex const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawPoints(short,short,struct GfxPointVertex const * const)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSurfsReversed(struct GfxDrawSurf *,int,enum MaterialTechniqueType)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSurfs(struct GfxDrawSurf *,int,enum MaterialTechniqueType)
{	UNIMPLEMENTED();
}

void __cdecl R_SyncRenderThread(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AbortRenderCommands(void)
{	UNIMPLEMENTED();
}

void __cdecl R_BeginFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ReleaseThreadOwnership(void)
{	UNIMPLEMENTED();
}

void __cdecl R_BeginRemoteScreenUpdate(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ForceBeginRemoteScreenUpdate(int)
{	UNIMPLEMENTED();
}

int __cdecl R_ProcessFrontendCmd(int,int)
{	UNIMPLEMENTED();
}

void __cdecl R_ProcessFrontendCmdsForBackend(void)
{	UNIMPLEMENTED();
}

int __cdecl R_ProcessNonSkinFrontendCmds(int)
{	UNIMPLEMENTED();
}

void __cdecl R_EndDebugFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl R_WaitNonSkinFrontendCmds(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ProcessFrontendCmds(int)
{	UNIMPLEMENTED();
}

void __cdecl R_WaitFrontendCmds(void)
{	UNIMPLEMENTED();
}

void __cdecl R_InitFrontendThread(void)
{	UNIMPLEMENTED();
}

void __cdecl R_EndFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl R_InitRenderThread(void)
{	UNIMPLEMENTED();
}

struct GfxBackEndData * frontEndDataOut;
long volatile g_frontendCmdProcessCount;
int marker_r_rendercmds;
int volatile g_freezeFrontedCmds;
struct SkinBuffers * g_skinBuffers;
void __cdecl R_SetTestLods(void)
{	UNIMPLEMENTED();
}

bool __cdecl R_CheckDvarModified(struct dvar_s const *)
{	UNIMPLEMENTED();
}

void * __cdecl R_GetCommandBuffer(enum GfxRenderCommand,int)
{	UNIMPLEMENTED();
}

int __cdecl R_IsPendingNonSkinFrontendCmds(void)
{	UNIMPLEMENTED();
}

int __cdecl R_IsPendingFrontendCmds(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ClearCmdList(void)
{	UNIMPLEMENTED();
}

void __cdecl R_InitFrontendCmdsPos(void)
{	UNIMPLEMENTED();
}

void __cdecl R_PerformanceCounters(void)
{	UNIMPLEMENTED();
}

bool __cdecl R_LightTweaksModified(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSurfsInOrder(struct GfxDrawSurf *,int,enum MaterialTechniqueType,enum GfxDrawSurfOrder)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdEndOfList(void)
{	UNIMPLEMENTED();
}

void * __cdecl R_GrowCommandBuffer(int)
{	UNIMPLEMENTED();
}

void __cdecl R_InitFrontendCmds(void)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateFrontEndDvarOptions(void)
{	UNIMPLEMENTED();
}

void __cdecl R_ProcessFrontendCmdInternal(int,void *,int)
{	UNIMPLEMENTED();
}

void __cdecl R_ToggleSmpFrameCmd(void)
{	UNIMPLEMENTED();
}

void __cdecl R_FrontendThread2(void)
{	UNIMPLEMENTED();
}

void __cdecl R_FrontendThread(void)
{	UNIMPLEMENTED();
}

void __cdecl R_IssueRenderCommands(void)
{	UNIMPLEMENTED();
}

