#include <stdint.h>

struct GfxCmdSetMaterialColor
{
	int32_t header;
	char color[16];
};

