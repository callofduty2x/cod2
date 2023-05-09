#include <stdint.h>

struct GfxOccluder
{
	int32_t planeCount;
	int32_t planes;
	int32_t edgeCount;
	int32_t edges;
	int32_t vertexCount;
	int32_t vertices;
	int32_t ignoreStackLevel;
	int32_t viewPlaneCount;
	int32_t viewPlanes;
};

