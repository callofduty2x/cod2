#include <stdint.h>

struct g_sa_type
{
	char initialized[3];
	char pad0[1];
	int32_t randSeed;
	char pHash[4096];
	char aliasInfo[48];
	char soundFileInfo[24];
	char szLoadSpec[64];
	int8_t curvesInitialized;
	char pad1[3];
	char volumeFalloffCurves[1152];
	char volumeFalloffCurveNames[1024];
};

