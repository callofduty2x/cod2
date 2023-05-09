#include <stdint.h>

struct GfxPortal
{
	GfxPortalWritable writable;
	DpvsPlane plane;
	int32_t cell;
	int32_t vertices;
	int8_t vertexCount;
	int8_t hullPointCount;
	char pad0[2];
	int32_t hullPoints;
	char hullAxis[24];
};

