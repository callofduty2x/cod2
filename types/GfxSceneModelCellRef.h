#include <stdint.h>

struct GfxSceneModelCellRef
{
	int32_t entIndex;
	char mins[12];
	char maxs[12];
	int32_t next;
};

