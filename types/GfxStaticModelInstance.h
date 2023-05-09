#include <stdint.h>

struct GfxStaticModelInstance
{
	int32_t cullDist;
	char origin[12];
	int32_t model;
	char mins[12];
	char maxs[12];
	char axis[36];
	int32_t scale;
	char baseLightingCoords[12];
};

