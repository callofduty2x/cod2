#include <stdint.h>

struct GfxCmdSetClipPlanes
{
	int32_t header;
	int32_t clipPlaneCount;
	char clipPlanes[16];
};

