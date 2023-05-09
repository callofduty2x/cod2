#include <stdint.h>

struct GfxBackEndData
{
	int32_t frameCount;
	int32_t drawSurfCount;
	char drawSurfs[524288];
	int32_t surfPos;
	char surfsBuffer[131072];
	int32_t entityCount;
	char entities[949344];
	int32_t polyCount;
	char polys[32768];
	int32_t polyVertCount;
	char polyVerts[557056];
	int32_t skinnedCacheVb;
	int32_t viewParmCount;
	char viewParms[8300];
	GfxFog fogSettings;
	GfxCmdArray commands;
	char debugGlobals[84];
};

