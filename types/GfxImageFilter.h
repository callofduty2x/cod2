#include <stdint.h>

struct GfxImageFilter
{
	int32_t passCount;
	char passes[2432];
	int32_t sourceImage;
	int32_t finalTarget;
	int64_t pingPongTargets;
};

