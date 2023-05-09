#include <stdint.h>

struct GfxCmdDrawTriangles
{
	int32_t header;
	int32_t material;
	int32_t techType;
	int16_t indexCount;
	int16_t vertexCount;
};

