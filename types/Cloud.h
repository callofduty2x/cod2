#include <stdint.h>

struct Cloud
{
	char pad0[604];
	int8_t useLength;
	char pad1[3];
	int32_t randomLengthWeight;
	char lengthChannelInstance[12];
	char lengthRandChannelInstance[12];
};

