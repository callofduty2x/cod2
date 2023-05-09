#include <stdint.h>

struct ShadowCookie
{
	int32_t firstCasterDrawSurf;
	int32_t firstReceiverDrawSurf;
	int32_t firstUnusedDrawSurf;
	char shadowLookupMatrix[64];
	char boxMin[12];
	char boxMax[12];
	int32_t shadowViewParms;
	int32_t fade;
};

