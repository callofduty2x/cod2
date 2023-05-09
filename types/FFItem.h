#include <stdint.h>

struct FFItem
{
	FSRef ref;
	char name[260];
	int64_t modDate;
	int16_t flags;
};

