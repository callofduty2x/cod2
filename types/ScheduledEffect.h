#include <stdint.h>

struct ScheduledEffect
{
	int32_t mFx;
	int32_t mPrimIndex;
	int32_t mStartTime;
	int64_t mBolt;
	char mOrigin[12];
	char mAxis[36];
	int32_t mSeed;
	int32_t mIndexInBatch;
	int32_t mScheduledNext;
};

