#include <stdint.h>

struct DiskGfxCell
{
	char mins[12];
	char maxs[12];
	int32_t aabbTreeIndex;
	int32_t firstPortal;
	int32_t portalCount;
	int32_t firstCullGroup;
	int32_t cullGroupCount;
	int32_t firstOccluder;
	int32_t occluderCount;
};

