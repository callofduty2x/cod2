#include <stdint.h>

struct sightpointtrace_t
{
	char start[12];
	char end[12];
	int64_t passEntityNum;
	int32_t contentmask;
	int32_t locational;
};

