#include <stdint.h>

struct ThreadDebugInfo
{
	char pos[128];
	int32_t posSize;
	int32_t varUsage;
	int32_t endonUsage;
};

