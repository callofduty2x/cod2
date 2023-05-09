#include <stdint.h>

struct GfxImage
{
	D3DRESOURCETYPE mapType;
	GfxTexture texture;
	Picmip picmip;
	int8_t semantic;
	int8_t noPicmip;
	int8_t track;
	char pad0[3];
	CardMemory cardMemory;
	int16_t width;
	int16_t height;
	int16_t depth;
	int8_t category;
	char pad1[1];
	int32_t name;
};

