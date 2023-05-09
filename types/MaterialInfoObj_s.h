#include <stdint.h>

struct MaterialInfoObj_s
{
	int32_t name;
	int32_t refImageName;
	int16_t hashIndex;
	int16_t sortedIndex;
	int8_t gameFlags;
	int8_t sortKey;
	int8_t textureAtlasRowCount;
	int8_t textureAtlasColumnCount;
	int32_t maxDeformMove;
	int8_t deformFlags;
	int8_t usage;
	int16_t toolFlags;
	int32_t locale;
	int16_t autoTexScaleWidth;
	int16_t autoTexScaleHeight;
	int32_t tessSize;
	int32_t surfaceFlags;
	int32_t contents;
};

