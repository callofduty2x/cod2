#include <stdint.h>

struct ShaderConstantRouting
{
	int32_t name;
	int8_t firstElem;
	int8_t elemCount;
	char pad0[2];
	int32_t constantInfo;
	int32_t typeInfo;
};

