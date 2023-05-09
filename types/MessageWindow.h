#include <stdint.h>

struct MessageWindow
{
	int32_t lines;
	int32_t current_line;
	int32_t count;
	int32_t padding;
	int32_t scrolltime;
	int32_t fadein;
	int32_t fadeout;
};

