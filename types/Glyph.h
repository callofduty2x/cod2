#include <stdint.h>

struct Glyph
{
	int16_t letter;
	int8_t x0;
	int8_t y0;
	int8_t dx;
	int8_t pixelWidth;
	int8_t pixelHeight;
	char pad0[1];
	int32_t s0;
	int32_t t0;
	int32_t s1;
	int32_t t1;
};

