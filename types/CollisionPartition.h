#include <stdint.h>

struct CollisionPartition
{
	int8_t triCount;
	int8_t borderCount;
	char pad0[2];
	int32_t tris;
	int32_t borders;
};

