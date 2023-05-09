#include <stdint.h>

struct GfxCmdDrawTextInSpace
{
	int32_t header;
	char org[12];
	int32_t font;
	char xPixelStep[12];
	char yPixelStep[12];
	int32_t color;
	int32_t text;
};

