#include <stdint.h>

struct FxHelper
{
	int32_t time;
	int32_t mTime;
	int32_t mOldTime;
	int32_t mFrameTime;
	int32_t mTimeFrozen;
	FxCamera mCamera;
	char mPrevCamera[112];
	int32_t mSeed;
	int32_t adsZoomFactor;
};

