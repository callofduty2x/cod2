#include <stdint.h>

struct GfxSModelCachedVertex
{
	char xyz[12];
	char normal[12];
	int32_t color;
	int64_t texCoord;
	int32_t baseLightingCoords;
	char binormal[12];
	char tangent[12];
};

