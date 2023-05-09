#include <stdint.h>

struct materialCommands_t
{
	char pad0[370608];
	int32_t indices;
	int32_t optimizedIndices;
	GfxOptimizedVertexSource optimizedVertexSource;
	int32_t material;
	int32_t techType;
	int32_t lmapIndex;
	int32_t materialTime;
	MaterialVertexDeclType declType;
	int32_t indexCount;
	int32_t vertexCount;
	int32_t firstVertex;
	int32_t lastVertex;
	int32_t optimizedIndexCount;
	int32_t optimizedVertexCount;
	int32_t firstOptimizedVertex;
};

