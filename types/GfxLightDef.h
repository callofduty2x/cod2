#include <stdint.h>

struct GfxLightDef
{
	GfxLightType type;
	GfxLightImage cookie;
	int64_t attenuation;
	int32_t name;
};

