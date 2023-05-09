#include <stdint.h>

struct pointtrace_t
{
	char extents[36];
	int32_t passEntityNum;
	int32_t passOwnerNum;
	int32_t contentmask;
	int32_t bLocational;
	int32_t priorityMap;
};

