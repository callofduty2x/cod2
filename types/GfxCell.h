#include <stdint.h>

struct GfxCell
{
	GfxCellWritable writable;
	char mins[12];
	char maxs[12];
	int32_t aabbTree;
	int32_t portalCount;
	int32_t portals;
	int32_t cullGroupCount;
	int32_t cullGroups;
	int32_t occluderCount;
	int32_t occluders;
	int32_t modelRefs;
};

