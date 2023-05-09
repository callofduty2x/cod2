#include <stdint.h>

struct GfxCmdStencilPlanes
{
	int32_t header;
	int32_t nearDist;
	int32_t planeCount;
	int32_t planeDists;
};

