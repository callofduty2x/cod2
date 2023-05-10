public: long __cdecl D3DDevice::DrawIndexedPrimitive(enum _D3DPRIMITIVETYPE,int,unsigned int,unsigned int,unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::DrawIndexedPrimitiveUP(enum _D3DPRIMITIVETYPE,unsigned int,unsigned int,unsigned int,void const *,enum _D3DFORMAT,void const *,unsigned int)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetVertexDeclaration(struct D3DVertexDeclaration *)
{	UNIMPLEMENTED();
}

public: long __cdecl D3DDevice::SetVertexShaderConstantF(unsigned int,float const *,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl Vec4Add(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

struct D3DIndexBuffer * __cdecl R_IndexBufferPointer(struct r_ib_state_t *)
{	UNIMPLEMENTED();
}

int __cdecl R_GetSmodelCachedVertexSize(void)
{	UNIMPLEMENTED();
}

void __cdecl R_SetDrawPrimType(struct GfxDrawPrimArgs *,enum GfxDrawPrimType)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetCodeConstantFromVec3(int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetState(int * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetStreamSource(int,struct D3DVertexBuffer *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetPixelShader(struct D3DPixelShader *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetVertexShader(struct D3DVertexShader *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetVertexDecl(struct D3DVertexDeclaration *)
{	UNIMPLEMENTED();
}

void __cdecl RB_BeginSurface(struct Material const * material, enum MaterialTechniqueType techType, int lmapIndex)
{	UNIMPLEMENTED();
}

void __cdecl RB_CreateDynamicBuffers()
{	UNIMPLEMENTED();
}

int __cdecl RB_SetIndexData(unsigned short const *, int)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawTechnique(enum MaterialVertexDeclType vertDeclType, struct GfxDrawPrimArgs const * args)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndSurface()
{	UNIMPLEMENTED();
}

int marker_rb_shade;
bool __cdecl RB_ApplyStateBitsRemapRuleSet(int const * const,struct MaterialStateMapRuleSet const *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_GetShaderConstantFromMaterial(char const *,float const * *,int *)
{	UNIMPLEMENTED();
}

void __cdecl RB_ScaleMatrixRotation(float const *,float,float *)
{	UNIMPLEMENTED();
}

void __cdecl RB_OverrideGrayscaleImage(struct GfxImage * *,unsigned char *,struct dvar_s const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_GenerateWorldOutdoorLookupMatrix(float (* const)[4])
{	UNIMPLEMENTED();
}

float const * __cdecl RB_GetCodeMatrix(int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_GetShaderConstantFromCode(struct MaterialArgumentCodeConst const *,float const * *,int *)
{	UNIMPLEMENTED();
}

unsigned short * __cdecl RB_CreateDynamicBuffer(struct D3DIndexBuffer *,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_RemapStateBits(int const * const,struct MaterialStateMap const *,int * const)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetPixelShaderConstant(int,float const *,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetVertexShaderConstant(int,float const *,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetPassVertexShaderArguments(struct MaterialShaderArgument const *,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_OverrideImage(struct GfxImage * *,unsigned char *,struct MaterialTextureDef const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_GetTextureFromMaterial(char const *,struct GfxImage * *,unsigned char *)
{	UNIMPLEMENTED();
}

bool __cdecl RB_SkipTechnique(struct MaterialTechnique const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawIndexedPrimitive(struct GfxDrawPrimArgs const *,struct MaterialTechnique const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetupLighting(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_GetTextureFromCode(int,struct GfxImage * *,unsigned char *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetPassPixelShaderArguments(struct MaterialShaderArgument const *,int)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetupPassDx9(struct MaterialPassDx9 const *,enum MaterialVertexDeclType,struct GfxStateOverride const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_SetupPass(struct MaterialTechnique const *,int,enum MaterialVertexDeclType,struct GfxStateOverride const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_DrawSingleTechnique(enum MaterialTechniqueType,enum MaterialVertexDeclType,struct GfxDrawPrimArgs const *,struct GfxStateOverride const *)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndSurface_Standard(void)
{	UNIMPLEMENTED();
}

void __cdecl RB_EndSurface_Optimized(void)
{	UNIMPLEMENTED();
}

RB_SetVertexData(unsigned int streamIndex,  void const* data,  int vertexCount,  int stride)
{	UNIMPLEMENTED();
}

