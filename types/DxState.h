#include <stdint.h>

struct DxState
{
	char vertexShaderConsts[4096];
	char pixelShaderConsts[4096];
	int64_t refStateBits;
	int64_t activeStateBits;
	int32_t stencilRefValue;
	char refColorStageBits[32];
	char refAlphaStageBits[32];
	char activeColorStageBits[32];
	char activeAlphaStageBits[32];
	int8_t gridLighting;
	int16_t genTexCoords;
	char pad0[1];
	int32_t renderTargetId;
	int32_t renderTargetWidth;
	int32_t renderTargetHeight;
	GfxViewportBehavior viewportBehavior;
	int32_t renderTargetSurface;
	int32_t depthStencilSurface;
	char viewport[24];
	int8_t viewportIsNull;
	char pad1[3];
	int32_t indexBuffer;
	char streams[12];
	int32_t indexBufferDeselecting;
	int32_t vertexBufferDeselecting;
	char samplerState[16];
	char samplerImage[64];
	int32_t textureColorArg;
	int32_t pixelShader;
	int32_t vertexShader;
	int32_t vertexDecl;
	int32_t fvf;
	int8_t alphaRef;
	char pad2[3];
	int32_t textureFactor;
	int32_t ambientColor;
	int32_t clipPlaneCount;
};

