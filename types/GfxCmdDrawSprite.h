#include <stdint.h>

struct GfxCmdDrawSprite
{
	int32_t header;
	int32_t material;
	int32_t rgbaColor;
	char pos[12];
	int32_t radius;
	int32_t minScreenRadius;
	int32_t renderFxFlags;
};

