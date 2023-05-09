#include <stdint.h>

struct MarkPoly
{
	int32_t prevMark;
	int32_t nextMark;
	int32_t lastFrameDrawn;
	char origin[12];
	int32_t radius;
	int32_t mtlHandle;
	int16_t lmapIndex;
	int8_t vertCount;
	char pad0[1];
	char verts[612];
};

