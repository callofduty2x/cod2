#include <stdint.h>

struct leafList_s
{
	int32_t count;
	int32_t maxcount;
	int32_t overflowed;
	int32_t list;
	char bounds[24];
	int32_t lastLeaf;
};

