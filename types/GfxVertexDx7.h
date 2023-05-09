#include <stdint.h>

struct GfxVertexDx7
{
	char xyz[12];
	char normal[12];
	int32_t color;
	int64_t texCoord;
};

