#include <stdint.h>

struct dnode_t
{
	int32_t planeNum;
	int64_t children;
	char mins[12];
	char maxs[12];
};

