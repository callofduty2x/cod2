#include <stdint.h>

struct dleaf_t
{
	int32_t cluster;
	int32_t area;
	int32_t firstLeafSurface;
	int32_t numLeafSurfaces;
	int32_t firstLeafBrush;
	int32_t numLeafBrushes;
	int32_t cellNum;
	int32_t firstLightIndex;
	int32_t numLights;
};

