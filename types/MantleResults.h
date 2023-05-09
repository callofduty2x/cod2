#include <stdint.h>

struct MantleResults
{
	char dir[12];
	char startPos[12];
	char ledgePos[12];
	char endPos[12];
	int32_t flags;
	int32_t duration;
};

