#include <stdint.h>

struct CollisionAabbTree
{
	char origin[12];
	char halfSize[12];
	int16_t materialIndex;
	int16_t childCount;
	CollisionAabbTreeIndex u;
};

