#include <stdint.h>

struct XModelLodInfo
{
	int32_t dist;
	int32_t filename;
	int16_t numsurfs;
	char pad0[2];
	int32_t surfNames;
	int32_t surfs;
};

