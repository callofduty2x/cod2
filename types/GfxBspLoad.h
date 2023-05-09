#include <stdint.h>

struct GfxBspLoad
{
	int32_t header;
	int32_t fileBase;
	int32_t fileSize;
	int32_t materials;
	int32_t materialCount;
	char lmapMergeInfo[640];
};

