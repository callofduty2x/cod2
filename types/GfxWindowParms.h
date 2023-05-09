#include <stdint.h>

struct GfxWindowParms
{
	int32_t hwnd;
	int32_t hz;
	int8_t fullscreen;
	char pad0[3];
	int32_t x;
	int32_t y;
	int32_t width;
	int32_t height;
	int32_t tileCount;
	int32_t aaSamples;
};

