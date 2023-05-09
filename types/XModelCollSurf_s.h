#include <stdint.h>

struct XModelCollSurf_s
{
	int32_t collTris;
	int32_t numCollTris;
	char mins[12];
	char maxs[12];
	int32_t boneIdx;
	int32_t contents;
	int32_t surfFlags;
};

