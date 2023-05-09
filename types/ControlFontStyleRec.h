#include <stdint.h>

struct ControlFontStyleRec
{
	int16_t flags;
	int16_t font;
	int16_t size;
	int16_t style;
	int16_t mode;
	int16_t just;
	MacRGBColor foreColor;
	char backColor[6];
};

