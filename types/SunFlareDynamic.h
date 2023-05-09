#include <stdint.h>

struct SunFlareDynamic
{
	int32_t flareIntensity;
	int32_t currentBlind;
	int32_t currentGlare;
	int32_t lastTime;
	int8_t error;
	char pad0[3];
	int32_t cumulVisibility;
	int32_t lastVisibility;
	int32_t lastDot;
	int32_t hitNum;
	int64_t sunQuery;
	int16_t sunQueryIssued;
};

