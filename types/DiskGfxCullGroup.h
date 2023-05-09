#include <stdint.h>

struct DiskGfxCullGroup
{
	char mins[12];
	char maxs[12];
	int32_t firstSurface;
	int32_t surfaceCount;
};

