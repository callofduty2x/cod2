#include <stdint.h>

struct GfxVertex
{
	char xyzw[16];
	char normal[12];
	int32_t color;
	int64_t texCoord;
	char binormal[12];
	char tangent[12];
};

