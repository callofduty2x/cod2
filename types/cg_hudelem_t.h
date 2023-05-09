#include <stdint.h>

struct cg_hudelem_t
{
	int32_t x;
	int32_t y;
	int32_t z;
	int32_t width;
	int32_t height;
	char hudElemLabel[256];
	int32_t labelWidth;
	char hudElemText[256];
	int32_t textWidth;
	int32_t font;
	int32_t fontScale;
	int32_t fontHeight;
	char color[16];
};

