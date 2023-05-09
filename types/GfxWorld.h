#include <stdint.h>

struct GfxWorld
{
	int32_t name;
	int32_t baseName;
	int32_t nodeCount;
	int32_t nodes;
	int32_t surfaceCount;
	int32_t surfaces;
	int32_t skySurfCount;
	int32_t skyStartSurfs;
	int32_t skyImage;
	int8_t skySamplerState;
	char pad0[3];
	int32_t vertexCount;
	GfxWorldVertexData vd;
	SunLightParseParams sunParse;
	GfxLight sunLight;
	char sunColorFromBsp[12];
	int32_t cullGroupCount;
	int32_t cullGroups;
	int32_t smodelCount;
	int32_t smodelInsts;
	int32_t cellCount;
	int32_t cells;
	int32_t lightmapCount;
	int32_t lightmaps;
	int32_t smodelLightingImage;
	char smodelLightingLookupScale[12];
	GfxLightGrid lightGrid;
	int32_t smodelLightingColorTable;
	int32_t smodelLightingSunVisTable;
	int32_t modelCount;
	int32_t models;
	char mins[12];
	char maxs[12];
	int32_t checksum;
	int32_t materialMemoryCount;
	int32_t materialMemory;
	sunflare_t sun;
	char outdoorLookupMatrix[64];
	int32_t outdoorImage;
};

