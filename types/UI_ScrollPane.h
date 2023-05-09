#include <stdint.h>

struct UI_ScrollPane
{
	char pad0[16];
	int32_t comp;
	int8_t forceHorScoll;
	char pad1[3];
	int64_t mouseHeldScale;
	int64_t mouseHeldPos;
	int64_t mouseHeldCompPos;
	int16_t mouseWasDown;
};

