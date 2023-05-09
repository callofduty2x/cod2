#include <stdint.h>

struct GfxBackEndLightSettings
{
	char position[16];
	char ambient[16];
	char color[16];
	char specular[16];
	int32_t def;
};

