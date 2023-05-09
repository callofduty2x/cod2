#include <stdint.h>

struct AudioTimeStamp
{
	int64_t mSampleTime;
	int64_t mHostTime;
	int64_t mRateScalar;
	int64_t mWordClockTime;
	SMPTETime mSMPTETime;
	int32_t mFlags;
	int32_t mReserved;
};

