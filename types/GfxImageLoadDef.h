#include <stdint.h>

struct GfxImageLoadDef
{
	int8_t format;
	int8_t flags;
	char dimensions[6];
	int32_t data;
	int32_t resourceSize;
};

