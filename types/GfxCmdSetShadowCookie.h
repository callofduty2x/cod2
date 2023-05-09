#include <stdint.h>

struct GfxCmdSetShadowCookie
{
	int32_t header;
	char lookupMatrix[64];
	int32_t fade;
};

