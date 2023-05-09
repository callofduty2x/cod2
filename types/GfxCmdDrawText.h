#include <stdint.h>

struct GfxCmdDrawText
{
	int32_t header;
	int32_t x;
	int32_t y;
	int32_t font;
	int32_t xScale;
	int32_t yScale;
	int32_t color;
	int32_t style;
	int32_t cursorPos;
	int8_t cursor;
	char pad0[3];
	int32_t maxChars;
	char text[3];
};

