#include <stdint.h>

struct SunLightParseParams
{
	char name[64];
	int32_t ambientScale;
	char ambientColor[12];
	int32_t diffuseFraction;
	int32_t sunLight;
	char sunColor[12];
	char diffuseColor[12];
	int8_t diffuseColorHasBeenSet;
	char pad0[3];
	char angles[12];
};

