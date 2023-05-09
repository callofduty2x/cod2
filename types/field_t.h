#include <stdint.h>

struct field_t
{
	int32_t cursor;
	int32_t scroll;
	int32_t drawWidth;
	int32_t widthInPixels;
	int32_t charHeight;
	int32_t fixedSize;
	char buffer[256];
};

