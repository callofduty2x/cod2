#include <stdint.h>

struct GfxImageFilterPass
{
	int32_t material;
	int32_t srcWidth;
	int32_t srcHeight;
	int32_t dstWidth;
	int32_t dstHeight;
	int32_t tapHalfCount;
	char tapOffsetsAndWeights[128];
};

