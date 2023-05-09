#include <stdint.h>

struct MaterialTextureDef
{
	int32_t name;
	int8_t samplerState;
	int8_t semantic;
	int8_t unused_0;
	int8_t unused_1;
	MaterialTextureDefInfo u;
};

