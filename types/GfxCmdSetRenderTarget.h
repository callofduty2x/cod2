#include <stdint.h>

struct GfxCmdSetRenderTarget
{
	int32_t header;
	GfxRenderTargetId renderTargetId;
};

