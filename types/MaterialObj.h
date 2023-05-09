#include <stdint.h>

struct MaterialObj
{
	MaterialInfoObj info;
	int64_t stateBits;
	int16_t textureCount;
	int16_t constantCount;
	int32_t techniqueSet;
	int32_t textures;
	int32_t constants;
};
