#include <stdint.h>

struct GfxPortalWritable
{
	int8_t isQueued;
	int8_t isAncestor;
	char pad0[2];
	int32_t queuedParent;
};

