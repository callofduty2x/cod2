#include <stdint.h>

struct PrecacheEntry
{
	int16_t filename;
	int8_t include;
	char pad0[1];
	int32_t sourcePos;
	int32_t next;
};

