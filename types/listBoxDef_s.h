#include <stdint.h>

struct listBoxDef_s
{
	char startPos[16];
	char endPos[16];
	int32_t drawPadding;
	char cursorPos[16];
	int32_t elementWidth;
	int32_t elementHeight;
	int32_t elementStyle;
	int32_t numColumns;
	char columnInfo[192];
	int32_t doubleClick;
	int32_t notselectable;
	int32_t noScrollBars;
};

