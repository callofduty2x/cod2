#include <stdint.h>

struct DiskTriangleSoup
{
	int16_t materialIndex;
	int16_t lightmapIndex;
	int32_t firstVertex;
	int16_t vertexCount;
	int16_t indexCount;
	int32_t firstIndex;
};

