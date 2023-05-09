#include <stdint.h>

struct Tail
{
	char pad0[604];
	int32_t randomLengthWeight;
	char lengthChannelInstance[12];
	char lengthRandChannelInstance[12];
};

