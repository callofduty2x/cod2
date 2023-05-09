#include <stdint.h>

struct XModel
{
	int32_t parts;
	char lodInfo[80];
	int32_t collSurfs;
	int32_t numCollSurfs;
	int32_t contents;
	int32_t boneInfo;
	char mins[12];
	char maxs[12];
	int16_t numLods;
	int16_t collLod;
	int32_t xskins;
	int32_t memUsage;
	int32_t name;
	int8_t flags;
	int8_t bad;
};

