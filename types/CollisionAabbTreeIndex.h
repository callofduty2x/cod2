#include <stdint.h>

union CollisionAabbTreeIndex
{
	int32_t firstChildIndex;
	int32_t partitionIndex;
};

