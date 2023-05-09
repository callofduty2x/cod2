#include <stdint.h>

struct GfxAabbTree
{
	char mins[12];
	char maxs[12];
	int32_t surfaceCount;
	int32_t startSurfIndex;
	int32_t staticModelCount;
	int32_t staticModels;
	int32_t childCount;
	int32_t children;
};

