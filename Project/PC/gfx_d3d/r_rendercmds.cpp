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

void __cdecl R_BeginDebugFrame()
{	UNIMPLEMENTED();
}

struct GfxViewParms * __cdecl R_AllocViewParms()
{	UNIMPLEMENTED();
}

void __cdecl R_ToggleSmpFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddFrontendCmd(int type, void * data)
{	UNIMPLEMENTED();
}

void __cdecl R_EndRemoteScreenUpdate(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawTriangles(struct Material *,enum MaterialTechniqueType,short,unsigned short const * const,short,float const (* const)[4],float const (* const)[3],unsigned char const (* const)[4],float const (* const)[2])
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBlendSavedScreen(int fadeMsec)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSaveScreen()
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdClearScreen(int whichToClear, float const * const color, float depth, unsigned char stencil)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBlurShadowCookie(void)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSunPostEffects(int viewIndex)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdApplyLatePostEffects(float blurRadius)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdApplyEarlyPostEffects()
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetViewport(int x, int y, int width, int height)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdBeginView(int viewCount, struct GfxSceneDef const * sceneDef, struct GfxViewParms const * viewParms, struct GfxLodParms const * lodParms)
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

void __cdecl R_AddCmdDrawSun(int viewIndex)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdResolveRenderTarget(int,enum _D3DFORMAT,float const * const,float,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetRenderTarget(enum GfxRenderTargetId renderTargetId)
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

void __cdecl R_AddCmdLightProperties(int lightIndex, struct GfxLight const * light)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdSetMaterialColor(float const * const color)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawFullScreenColoredQuad(float s0, float t0, float s1, float t1, float const * const color, struct Material * material)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawSprite(struct Material * const material, unsigned char const * const rgbaColor, float const * const pos, float radius, float minScreenRadius, int renderFxFlags)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawQuadPic(float const (*)[2],float const * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawTextInSpace(char const * text, struct Font_s * font, float const * const org, float const * const xPixelStep, float const * const yPixelStep, float const * const color)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawTextWithCursor(char const * text, int maxChars, struct Font_s * font, float x, float y, float xScale, float yScale, float const * const color, int style, int cursorPos, char cursor)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawStretchRaw(int x, int y, int w, int h, int cols, int rows, unsigned char const * data, int client, int dirty)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawStretchPicRotate(float x, float y, float w, float h, float s0, float t0, float s1, float t1, float angle, float const * const color, struct Material * material)
{	UNIMPLEMENTED();
}

void __cdecl R_AddCmdDrawStretchPic(float x, float y, float w, float h, float s0, float t0, float s1, float t1, float const * const color, struct Material * material)
{	UNIMPLEMENTED();
}

void __cdecl R_IssueDelayedDrawing(int marker)
{	UNIMPLEMENTED();
}

void __cdecl R_EndDelayedDrawing(int marker)
{	UNIMPLEMENTED();
}

int __cdecl R_BeginDelayedDrawing()
{	UNIMPLEMENTED();
}

void __cdecl R_SkinGfxEntityDelayed(struct GfxEntity *)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateXModelBoundsDelayed(struct GfxEntity * ent)
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateEffectsNonBolt()
{	UNIMPLEMENTED();
}

void __cdecl R_UpdateEffectsBolt()
{	UNIMPLEMENTED();
}

void __cdecl R_ShutdownBackendData()
{	UNIMPLEMENTED();
}

void __cdecl R_InitBackendData()
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

void __cdecl R_AddCmdDrawSurfs(struct GfxDrawSurf * drawSurfs, int drawSurfCount, enum MaterialTechniqueType techType)
{	UNIMPLEMENTED();
}

void __cdecl R_SyncRenderThread()
{	UNIMPLEMENTED();
}

void __cdecl R_AbortRenderCommands()
{	UNIMPLEMENTED();
}

void __cdecl R_BeginFrame()
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

void __cdecl R_EndDebugFrame()
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

void __cdecl R_EndFrame()
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

R_AddCmdTouchAllImages()
{	UNIMPLEMENTED();
}

