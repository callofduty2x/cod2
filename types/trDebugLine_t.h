#include <stdint.h>

struct trDebugLine_t
{
	char start[12];
	char end[12];
	char color[16];
	int32_t depthTest;
};

