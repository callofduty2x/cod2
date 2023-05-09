#include <stdint.h>

struct GfxCmdDrawPoints
{
	int32_t header;
	int16_t pointCount;
	int16_t size;
	char verts[16];
};

