#include <stdint.h>

struct GfxWorldVertex
{
	char xyz[12];
	char normal[12];
	GfxColor color;
	int64_t texCoord;
	int64_t lmapCoord;
	char binormal[12];
	char tangent[12];
};

