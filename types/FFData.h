#include <stdint.h>

struct FFData
{
	FFType findType;
	char wildcard[32];
	int32_t items;
	char pad0[4];
	int8_t iterValid;
};

