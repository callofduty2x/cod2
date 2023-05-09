#include <stdint.h>

struct moveclip_t
{
	char mins[12];
	char maxs[12];
	char outerSize[12];
	char extents[36];
	int32_t passEntityNum;
	int32_t passOwnerNum;
	int32_t contentmask;
};

