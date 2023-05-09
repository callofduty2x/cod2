#include <stdint.h>

struct srfTriangles_t
{
	int32_t surfaceType;
	char bounds[24];
	int32_t firstVertex;
	int16_t vertexCount;
	int16_t indexCount;
	int32_t indices;
};

