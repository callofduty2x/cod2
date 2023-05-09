#include <stdint.h>

struct GfxCmdDrawQuadPic
{
	int32_t header;
	int32_t material;
	char verts[32];
	int32_t color;
};

