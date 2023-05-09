#include <stdint.h>

struct GfxMarkFragment
{
	int32_t markMaterial;
	int16_t lmapIndex;
	int8_t pointCount;
	char pad0[1];
	int32_t firstPoint;
};

