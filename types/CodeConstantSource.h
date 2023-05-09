#include <stdint.h>

struct CodeConstantSource
{
	int32_t name;
	int8_t source;
	char pad0[3];
	int32_t subtable;
	int32_t arrayCount;
	int32_t arrayStride;
};

