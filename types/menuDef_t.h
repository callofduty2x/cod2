#include <stdint.h>

struct menuDef_t
{
	Window window;
	int32_t font;
	int32_t fullScreen;
	int32_t itemCount;
	int32_t fontIndex;
	char cursorItem[16];
	int32_t fadeCycle;
	int32_t fadeClamp;
	int32_t fadeAmount;
	int32_t fadeInAmount;
	int32_t blurRadius;
	int32_t onOpen;
	int32_t onClose;
	int32_t onESC;
	int32_t onKey;
	int32_t soundName;
	int32_t imageTrack;
	char focusColor[16];
	char disableColor[16];
	int32_t items;
};

