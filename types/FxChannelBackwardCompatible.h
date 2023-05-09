#include <stdint.h>

struct FxChannelBackwardCompatible
{
	char start[24];
	char end[24];
	int64_t parm;
	int32_t flags;
	int8_t containsData;
};

