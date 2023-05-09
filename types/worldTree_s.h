#include <stdint.h>

struct worldTree_s
{
	int32_t dist;
	int16_t axis;
	char pad0[2];
	int32_t child;
};

