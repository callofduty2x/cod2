#include <stdint.h>

struct sightclip_t
{
	char mins[12];
	char maxs[12];
	char outerSize[12];
	char start[12];
	char end[12];
	int64_t passEntityNum;
	int32_t contentmask;
};

