#include <stdint.h>

struct cm_world_t
{
	char mins[12];
	char maxs[12];
	int8_t lockTree;
	char pad0[1];
	int16_t freeHead;
	char sectors[24576];
};

