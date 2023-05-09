#include <stdint.h>

struct vidConfig_t
{
	int32_t width;
	int32_t height;
	int32_t displayFrequency;
	int32_t isFullscreen;
	int32_t aspectRatioWindow;
	int32_t aspectRatioPixel;
	int32_t maxTextureSize;
	int32_t maxTextureMaps;
	int32_t maxTextureCoords;
	int32_t maxActiveLights;
	int8_t deviceSupportsGamma;
};

