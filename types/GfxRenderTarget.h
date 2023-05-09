#include <stdint.h>

struct GfxRenderTarget
{
	int32_t image;
	int32_t colorSurface;
	int32_t depthStencilSurface;
	int32_t width;
	int32_t height;
};

