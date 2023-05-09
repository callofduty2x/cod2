#include <stdint.h>

struct GfxLightGridPoint
{
	int32_t xyzHighBits;
	int8_t xyzLowBitsAndSunVisible;
	int8_t needsTrace;
	int16_t colorsIndex;
};

