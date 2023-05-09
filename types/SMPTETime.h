#include <stdint.h>

struct SMPTETime
{
	int16_t mSubframes;
	int16_t mSubframeDivisor;
	int32_t mCounter;
	int32_t mType;
	int32_t mFlags;
	int16_t mHours;
	int16_t mMinutes;
	int16_t mSeconds;
	int16_t mFrames;
};

