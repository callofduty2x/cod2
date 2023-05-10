public: long __cdecl D3DDevice::SetRenderTarget(unsigned long,struct D3DSurface *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetDepthStencilSurface(struct D3DSurface *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetViewport(struct _D3DVIEWPORT9 const *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetStreamSource(unsigned int,struct D3DVertexBuffer *,unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetIndices(struct D3DIndexBuffer *)
{	UNIMPLEMENTED();
}

void __cdecl Vec2Mul(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec4Mad(float const * const,float,float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetFvf(unsigned long)
{	UNIMPLEMENTED();
}

bool __cdecl RB_GetViewport(struct GfxViewport * outViewport)
{	UNIMPLEMENTED();
}

void __cdecl RB_InitSceneViewport()
{	UNIMPLEMENTED();
}

void __cdecl RB_PopMatrixStack()
{	UNIMPLEMENTED();
}

void __cdecl RB_PushMatrixStack()
{	UNIMPLEMENTED();
}

void __cdecl RB_SetShadowLookupMatrix(struct _D3DMATRIX const * matrix)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetViewMatrix(struct _D3DMATRIX const * matrix)
{	UNIMPLEMENTED();
}

void __cdecl RB_ChangedWorldMatrix(float worldScale)
{	UNIMPLEMENTED();
}

struct _D3DMATRIX * __cdecl RB_GetActiveWorldMatrix()
{	UNIMPLEMENTED();
}

void __cdecl RB_SetWorldMatrixForEntity(struct GfxEntity const * re)
{	UNIMPLEMENTED();
}

void __cdecl RB_DecideDefaultSamplerState()
{	UNIMPLEMENTED();
}

void __cdecl RB_SetDepthHackNearClip(float nearClip)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetProjectionMatrix(struct _D3DMATRIX const * matrix)
{	UNIMPLEMENTED();
}

void __cdecl RB_UpdateViewportConstants()
{	UNIMPLEMENTED();
}

void __cdecl RB_SetMatricesForView(struct GfxViewParms const * viewParms)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetAnisotropy()
{	UNIMPLEMENTED();
}

void __cdecl RB_ChangeState_1(int stateBits1)
{	UNIMPLEMENTED();
}

void __cdecl RB_ChangeState_0(int stateBits0)
{	UNIMPLEMENTED();
}

void __cdecl RB_ReleaseVertexDecl()
{	UNIMPLEMENTED();
}

bool __cdecl RB_IsVertexBufferBusy(struct D3DVertexBuffer *)
{	UNIMPLEMENTED();
}

bool __cdecl RB_IsIndexBufferBusy(struct D3DIndexBuffer *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ChangeStreamSource(int, struct D3DVertexBuffer *, int, int)
{	UNIMPLEMENTED();
}

void __cdecl RB_ChangeIndices(struct D3DIndexBuffer * ib)
{	UNIMPLEMENTED();
}

void __cdecl RB_ReleasePixelShader(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetViewport(struct GfxViewport const * viewport)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetDepthRange(float, float)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetSampler(int samplerIndex, unsigned char samplerState, struct GfxImage * image)
{	UNIMPLEMENTED();
}

void __cdecl RB_ClearAllStreamSources()
{	UNIMPLEMENTED();
}

void __cdecl RB_BindDefaultImages()
{	UNIMPLEMENTED();
}

void __cdecl RB_ReleaseVertexShader(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_UpdateViewport()
{	UNIMPLEMENTED();
}

void __cdecl RB_UnbindAllImages()
{	UNIMPLEMENTED();
}

void __cdecl RB_UnbindImage(struct GfxImage const * image)
{	UNIMPLEMENTED();
}

void __cdecl RB_InitImages()
{	UNIMPLEMENTED();
}

void __cdecl RB_SetRenderTarget(enum GfxRenderTargetId newTargetId)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetInitialState()
{	UNIMPLEMENTED();
}

int marker_rb_state;
struct DxState dxState;
enum GfxViewportBehavior __cdecl RB_ViewportBehaviorForRenderTarget(enum GfxRenderTargetId)
{	UNIMPLEMENTED();
}

void __cdecl RB_InitMatricesFromView(struct GfxViewParms const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ChangedProjectionMatrix(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_DecomposeSamplerFilter(unsigned char,enum _D3DTEXTUREFILTERTYPE *,enum _D3DTEXTUREFILTERTYPE *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetDefaultStateBits_Common(int * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_InitMatricesFromViewForTile(struct GfxViewParms const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetDefaultStateBits_Ref(int * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetDefaultStateBits_Active(int * const)
{	UNIMPLEMENTED();
}

RB_SetAlphaAntiAliasingState(int stateBits0)
{	UNIMPLEMENTED();
}

RB_ChangeAlphaStageState(int stageIndex,  int texStageBits)
{	UNIMPLEMENTED();
}

RB_ChangeColorStageState(int stageIndex,  int texStageBits)
{	UNIMPLEMENTED();
}

RB_SetSamplerConstantDx7(unsigned int color)
{	UNIMPLEMENTED();
}

RB_ChangeGenTexCoords(int samplerIndex,  unsigned char genTexCoords)
{	UNIMPLEMENTED();
}

RB_SetViewMatrixForWDx7(float w)
{	UNIMPLEMENTED();
}

