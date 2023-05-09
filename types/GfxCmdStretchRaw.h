#include <stdint.h>

struct GfxCmdStretchRaw
{
	int32_t header;
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	int32_t cols;
	int32_t rows;
	int32_t data;
	int32_t client;
	int32_t dirty;
};

