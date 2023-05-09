#include <stdint.h>

struct GfxCmdClearScreen
{
	int32_t header;
	int8_t whichToClear;
	int8_t stencil;
	char pad0[2];
	int32_t depth;
	char color[16];
};

