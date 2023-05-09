#include <stdint.h>

struct XVertexInfo_s
{
	char normal[12];
	int32_t color;
	char binormal[12];
	int32_t texCoordX;
	char tangent[12];
	int32_t texCoordY;
	char offset[12];
	int8_t numWeights;
	int8_t boneWeight;
	int16_t boneOffset;
};

