#include <stdint.h>

struct GfxCmdStretchPicRotate
{
	int32_t header;
	int32_t material;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	int32_t s0;
	int32_t t0;
	int32_t s1;
	int32_t t1;
	int32_t color;
	int32_t rotation;
};

