#include <stdint.h>

struct gameState_t
{
	char stringOffsets[8192];
	char stringData[16000];
	int32_t dataCount;
};

