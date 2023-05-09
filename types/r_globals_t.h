#include <stdint.h>

struct r_globals_t
{
	int8_t registered;
	int8_t forbidDelayLoadImages;
	int8_t ignorePrecacheErrors;
	char pad0[1];
	char viewOrg[12];
	char viewDir[12];
	int32_t frameCountInternal;
	int32_t markCount;
	int32_t totalImageMemory;
	char materialHashTable[4096];
	int32_t sceneWaterMapSetupsCount;
	char sceneWaterMapSetups[1088];
	char fogSettings[160];
	int32_t fogIndex;
	char sinTable[4096];
	char fftTrigTable[2048];
	char fftBitswap[1024];
	int32_t modelDObj;
	char modelDObjBuf[100];
	int32_t stats;
	GfxLodParms lodParms;
	int32_t debugViewParms;
	int32_t smodelDyncs;
	int32_t surfaces;
	int32_t cullGroups;
};

