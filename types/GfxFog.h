#include <stdint.h>

struct GfxFog
{
	GfxFogOffset techniqueOffset;
	int32_t startTime;
	int32_t finishTime;
	GfxColor color;
	int32_t fogStart;
	int32_t fogEnd;
	int32_t density;
	int8_t registered;
	int8_t drawSky;
	int8_t clearScreen;
};

