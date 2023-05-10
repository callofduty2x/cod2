public: void __cdecl D3DDevice::SetGammaRamp(unsigned int,unsigned long,struct _D3DGAMMARAMP const *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::BeginScene(void)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::ClearF(unsigned long,struct _D3DRECT const *,struct __vector4 const *,float,unsigned long)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SynchronizeToPresentationInterval(void)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::Swap(struct D3DBaseTexture *,struct _D3DVIDEO_SCALER_PARAMETERS const *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetClipPlane(unsigned long,float const *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::Resolve(unsigned long,struct _D3DRECT const *,struct D3DBaseTexture *,struct _D3DPOINT const *,unsigned int,unsigned int,struct __vector4 const *,float,unsigned long,struct _D3DRESOLVE_PARAMETERS const *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::BlockUntilIdle(void)
{	UNIMPLEMENTED();
}

public: unsigned long __cdecl D3DDevice::InsertFence(void)
{	UNIMPLEMENTED();
}

public: int __cdecl D3DResource::IsBusy(void)
{	UNIMPLEMENTED();
}

unsigned int __cdecl Byte4GetPackedNativeColor(unsigned char,unsigned char,unsigned char,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndSurfaceIfNeeded(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetCodeConstantFromVec4(int,float const * const)
{	UNIMPLEMENTED();
}

float const * __cdecl RB_GetCodeConstant(int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetTessTechnique(struct Material const *,enum MaterialTechniqueType,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetVertDeclType(enum MaterialVertexDeclType)
{	UNIMPLEMENTED();
}

void __cdecl RB_Overflow(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_CheckOverflow(int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetFeedbackImage(struct GfxImage *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetIndices(struct D3DIndexBuffer *)
{	UNIMPLEMENTED();
}

void __cdecl RB_InitBackendGlobalStructs()
{	UNIMPLEMENTED();
}

void __cdecl RB_SetCodeConstant(int constant, float x, float y, float z, float w)
{	UNIMPLEMENTED();
}

void __cdecl RB_LookupColor(unsigned char c, unsigned char * const color)
{	UNIMPLEMENTED();
}

void __cdecl RB_UpdateColor(float const * const color_allies, float const * const color_axis)
{	UNIMPLEMENTED();
}

void __cdecl RB_FlushGpu(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetGammaRamp(struct GfxGammaRamp const * gammaTable)
{	UNIMPLEMENTED();
}

void __cdecl RB_CheckSkinnedCacheNotBusy(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_ClearScreen(unsigned char whichToClear, float const * const color, float depth, unsigned char stencil)
{	UNIMPLEMENTED();
}

void __cdecl RB_RegisterBackendAssets()
{	UNIMPLEMENTED();
}

void __cdecl RB_Resolve(struct GfxImage *)
{	UNIMPLEMENTED();
}

void __cdecl RB_Set3D()
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawLines3D(int count, int width, struct GfxPointVertex const * const verts, bool depthTest)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawLines2D(int count, int width, struct GfxPointVertex const * const verts)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawStretchPic(struct Material const * material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget statsTarget)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTextInSpace(char const * text, struct Font_s * font, float const * const org, float const * const xPixelStep, float const * const yPixelStep, unsigned long color)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawFullScreenColoredQuad(struct Material const * material, float s0, float t0, float s1, float t1, unsigned long color)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndFrame()
{	UNIMPLEMENTED();
}

void __cdecl RB_FullScreenFilter(struct Material const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawText(char const *,struct Font_s *,float,float,union GfxColor)
{	UNIMPLEMENTED();
}

void __cdecl RB_ExecuteRenderCommands(void const * data)
{	UNIMPLEMENTED();
}

void __cdecl RB_RenderThread(void)
{	UNIMPLEMENTED();
}

struct GfxBackEndData const * const backEndData;
int marker_rb_backend;
struct materialCommands_t tess;
struct r_backEndGlobals_t backEnd;
void __cdecl R_SetSkinnedCacheEvent(void)
{	UNIMPLEMENTED();
}

float __cdecl RB_TestTransformSkinned(struct Material const *)
{	UNIMPLEMENTED();
}

float __cdecl RB_TestTransformStatic(struct Material const *)
{	UNIMPLEMENTED();
}

double __cdecl RB_BenchmarkTime(union _LARGE_INTEGER const *,union _LARGE_INTEGER const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetTechniqueDepthTest(struct Material *,int)
{	UNIMPLEMENTED();
}

bool __cdecl RB_UsingGlow(void)
{	UNIMPLEMENTED();
}

bool __cdecl RB_UsingBlur(float)
{	UNIMPLEMENTED();
}

int __cdecl RB_GetGlowRadiusOrder(float * const)
{	UNIMPLEMENTED();
}

bool __cdecl RB_DoesTechniqueExistForMaterial(struct Material const *,enum MaterialTechniqueType)
{	UNIMPLEMENTED();
}

bool __cdecl RB_IsMaterialSuppressed(struct Material const *)
{	UNIMPLEMENTED();
}

enum MaterialTechniqueType __cdecl RB_ChooseActualTechniqueType(enum MaterialTechniqueType,int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_StretchRaw(int,int,int,int,int,int,unsigned char const *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_ReturnCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_GotoCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetViewProjectionMatrix(void)
{	UNIMPLEMENTED();
}

void const * __cdecl RB_NextRenderCmd(void const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetOutdoorFeatherConst(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_DeriveNearPlaneConstantsForView(void)
{	UNIMPLEMENTED();
}

bool __cdecl RB_UsingPostEffects(float)
{	UNIMPLEMENTED();
}

void __cdecl RB_CallCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetTessVertex4dWithNormal(int,float,float,float,float,float,float,float,float,float,unsigned char const * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetTessVertex4d(int,float,float,float,float,float,float,unsigned char const * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetTessVertex3d(int,float,float,float,float,float,unsigned char const * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetTessVertex2d(int,float,float,float,float,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl RB_AdvanceToNextRenderCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

float __cdecl RB_GetBlurRadius(float)
{	UNIMPLEMENTED();
}

void __cdecl RB_StretchRawCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_UpdateColorInternal(float const * const,unsigned char * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetGameTime(float)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetClipPlanesCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_FinishGpu(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndBenchmarkGpu(union _LARGE_INTEGER *)
{	UNIMPLEMENTED();
}

void __cdecl RB_BeginBenchmarkGpu(union _LARGE_INTEGER *)
{	UNIMPLEMENTED();
}

void __cdecl RB_BeginFrame(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_ResolveTile(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_PreTessGroupCompletedCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ClearScreenCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ResolveAndClear(struct GfxImage *,unsigned char,enum _D3DFORMAT,float const * const,float,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl RB_UpdateBackEndDvarOptions(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_RestoreViewAfterTiling(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetViewportCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ResolveRenderTargetCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetRenderTargetCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetLightPropertiesCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetMaterialColorCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SaveScreenCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ApplyEarlyPostEffectsCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetStencilRefValueCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetShadowCookieCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_Set2D(void)
{	UNIMPLEMENTED();
}

float __cdecl RB_TestFillPass3D(struct Material const *,enum MaterialTechniqueType)
{	UNIMPLEMENTED();
}

void __cdecl RB_BeginViewCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_RenderDrawSurfList(struct GfxDrawSurf *,int,enum MaterialTechniqueType,enum GfxDrawSurfOrder)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawCharInSpace(struct Material const *,float const * const,float const * const,float const * const,struct Glyph const *,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTriangles_Internal(struct Material const *,enum MaterialTechniqueType,short,unsigned short const * const,short,float const (* const)[4],float const (* const)[3],union GfxColor const * const,float const (* const)[2])
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawPoints3D(struct GfxCmdDrawPoints const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawPoints2D(struct GfxCmdDrawPoints const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_StencilPlanesCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawSunCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawSurfsCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawQuadPicCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_StretchPicRotateCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

float __cdecl RB_BenchmarkRepeatedCalls(struct Material const *,float,float,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawChar(struct Material const *,float,float,float,float,struct Glyph const *,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTrianglesCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawLinesCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawPointsCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_BlurShadowPass(float,float)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowShadowsDebug(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowFloatZDebug(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowFbColorDebug_Screen(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_ShowFbColorDebug_Feedback(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_StretchPicCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

float __cdecl RB_TestTransformDynamic(struct Material const *)
{	UNIMPLEMENTED();
}

float __cdecl RB_TestFillPass(struct Material const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTextInSpaceCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawCursor(struct Material const *,unsigned char,float,float,struct Font_s *,float,float,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl RB_BlurShadowCookieCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawDebugPostEffects(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawFullScreenColoredQuadCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_FullScreenColoredFilter(struct Material const *,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawFullScreenQuad(struct Material const *,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl RB_TestTransform(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_TestFill(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTextWithCursor(char const *,int,struct Font_s *,float,float,float,float,union GfxColor,int,int,char)
{	UNIMPLEMENTED();
}

void __cdecl RB_AdjustViewForTile(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_BlendSavedScreenCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawSunPostEffectsCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_BlurScreen(float)
{	UNIMPLEMENTED();
}

void __cdecl RB_CalcGlowEffect(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTextCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ResumeUntiledRenderingCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndTilingCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_BeginTilingCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ApplyGlowEffectPass(int,struct GfxImage *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawSpriteCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ApplyGlowEffect(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_ProcessPostEffects(float)
{	UNIMPLEMENTED();
}

void __cdecl RB_RenderCommandFrame(void const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ApplyLatePostEffectsCmd(struct GfxRenderCommandExecState *)
{	UNIMPLEMENTED();
}

RB_IsGpuFenceFinished()
{	UNIMPLEMENTED();
}

RB_GpuWaited(int ticks)
{	UNIMPLEMENTED();
}

RB_AdaptiveGpuSyncWait()
{	UNIMPLEMENTED();
}

RB_AdaptiveGpuSyncTarget()
{	UNIMPLEMENTED();
}

