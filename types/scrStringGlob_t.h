#include <stdint.h>

struct scrStringGlob_t
{
	char hashTable[65536];
	int8_t inited;
	char pad0[3];
	int32_t nextFreeEntry;
};

