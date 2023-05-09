#include <stdint.h>

struct DiskGfxVertex
{
	char xyz[12];
	char normal[12];
	int32_t color;
	int64_t texCoord;
	int64_t lmapCoord;
	char tangent[12];
	char binormal[12];
};

