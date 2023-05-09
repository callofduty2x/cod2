#include <stdint.h>

struct GfxCmdDrawLines
{
	int32_t header;
	int16_t lineCount;
	int16_t width;
	char verts[32];
};

