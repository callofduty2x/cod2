#include <stdint.h>

struct GfxEntity
{
	refEntityType_t reType;
	int32_t renderFxFlags;
	char pad0[12];
	char axis[36];
	int32_t scale;
	char origin[12];
	char endpos[12];
	int32_t customMaterial;
	int32_t materialRGBA;
	int32_t materialTime;
	int32_t materialSubimageIndex;
	int64_t radius;
	int32_t rotation;
	int32_t minScreenRadius;
};

