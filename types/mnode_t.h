#include <stdint.h>

struct mnode_t
{
	int32_t contents;
	int32_t parent;
	int32_t cellIndex;
	mnode_info_t u;
};

