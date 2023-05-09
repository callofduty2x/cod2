#include <stdint.h>

struct DiskGfxOccluder
{
	int32_t firstPlane;
	int16_t planeCount;
	int16_t edgeCount;
	int32_t firstEdge;
	int32_t firstPortalVertex;
	int16_t portalVertexCount;
};

