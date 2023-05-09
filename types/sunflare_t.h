#include <stdint.h>

struct sunflare_t
{
	int8_t hasValidData;
	char pad0[3];
	int32_t spriteMaterial;
	int32_t flareMaterial;
	int32_t spriteSize;
	int32_t flareMinSize;
	int32_t flareMinDot;
	int32_t flareMaxSize;
	int32_t flareMaxDot;
	int32_t flareMaxAlpha;
	int32_t flareFadeInTime;
	int32_t flareFadeOutTime;
	int32_t blindMinDot;
	int32_t blindMaxDot;
	int32_t blindMaxDarken;
	int32_t blindFadeInTime;
	int32_t blindFadeOutTime;
	int32_t glareMinDot;
	int32_t glareMaxDot;
	int32_t glareMaxLighten;
	int32_t glareFadeInTime;
	int32_t glareFadeOutTime;
	char sunFxPosition[12];
};

