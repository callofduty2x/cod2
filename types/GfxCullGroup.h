#include <stdint.h>

struct GfxCullGroup
{
	char mins[12];
	char maxs[12];
	int32_t surfaceCount;
	int32_t startSurfIndex;
};

