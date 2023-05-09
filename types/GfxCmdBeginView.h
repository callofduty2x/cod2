#include <stdint.h>

struct GfxCmdBeginView
{
	int32_t header;
	GfxSceneDef sceneDef;
	int32_t viewParms;
	GfxLodParms lodParms;
	int32_t viewCount;
};

