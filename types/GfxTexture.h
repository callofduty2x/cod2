#include <stdint.h>

union GfxTexture
{
	int32_t basemap;
	int32_t map;
	int32_t volmap;
	int32_t cubemap;
	int32_t loadDef;
};

