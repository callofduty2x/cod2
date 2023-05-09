#include <stdint.h>

struct ANIHeader
{
	int32_t cbSizeOf;
	int32_t cFrames;
	int32_t cSteps;
	int32_t cx;
	int32_t cy;
	int32_t cBitCount;
	int32_t cPlanes;
	int32_t JifRate;
	int32_t flags;
};

