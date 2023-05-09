#include <stdint.h>

struct GfxCmdSetViewport
{
	int32_t header;
	char viewport[16];
};

