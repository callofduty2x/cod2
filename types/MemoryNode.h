#include <stdint.h>

struct MemoryNode
{
	int16_t prev;
	int16_t next;
	int32_t padding;
};

