#include <stdint.h>

struct GfxScene
{
	int32_t viewCount;
	GfxSceneDef def;
	int32_t dlightCount;
	char dlights[1408];
	char dlightCulled[32];
	int32_t drawSurfCount;
	int32_t drawSurfs;
	int32_t polyCount;
	char sceneEnts[106392];
	int32_t sceneEntMaterialCount;
	char sceneMaterials[16384];
};

