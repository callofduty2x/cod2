#include <stdint.h>

struct GfxCmdDrawFullScreenColoredQuad
{
	int32_t header;
	int32_t material;
	int32_t s0;
	int32_t t0;
	int32_t s1;
	int32_t t1;
	int32_t color;
};

