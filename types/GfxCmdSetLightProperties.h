#include <stdint.h>

struct GfxCmdSetLightProperties
{
	int32_t header;
	int32_t lightIndex;
	char position[16];
	char ambient[16];
	char color[16];
	char specular[16];
	int32_t lightDef;
};

