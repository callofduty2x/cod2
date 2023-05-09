#include <stdint.h>

struct UI_LinesComponent
{
	char pad0[16];
	int32_t selectedLine;
	int8_t focusOnSelectedLine;
	int8_t focusOnSelectedLineUser;
	char pad1[2];
	int32_t numLines;
	int64_t pos;
};

