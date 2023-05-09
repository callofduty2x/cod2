#include <stdint.h>

struct itemDef_s
{
	char window[528];
	char textRect[96];
	int32_t type;
	int32_t dataType;
	int32_t alignment;
	int32_t fontEnum;
	int32_t textalignment;
	int32_t textalignx;
	int32_t textaligny;
	int32_t textscale;
	int32_t textStyle;
	int32_t text;
	int32_t textSavegameInfo;
	int32_t parent;
	int32_t mouseEnterText;
	int32_t mouseExitText;
	int32_t mouseEnter;
	int32_t mouseExit;
	int32_t action;
	int32_t onAccept;
	int32_t onFocus;
	int32_t leaveFocus;
	int32_t dvar;
	int32_t dvarTest;
	int32_t onKey;
	int32_t enableDvar;
	int32_t dvarFlags;
	int32_t focusSound;
	int32_t special;
	char cursorPos[16];
	itemDefData_t typeData;
	int32_t imageTrack;
};

