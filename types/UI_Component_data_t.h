#include <stdint.h>

struct UI_Component_data_t
{
	int32_t screenWidth;
	int32_t screenHeight;
	int32_t charWidth;
	int32_t charHeight;
	int32_t scrollBarSize;
	int32_t cursor;
	int64_t cursorPos;
	int32_t hideCursor;
	int32_t filledCircle;
	int32_t consoleReason;
	char findText[128];
};

