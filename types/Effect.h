#include <stdint.h>

struct Effect
{
	int32_t Effect;
	char pad0[60];
	FxGfxEntity mRefEnt;
	int32_t mFlags;
	int32_t mClusterId;
	int32_t mSortGroup;
	int32_t mModel;
	int32_t mTimeStart;
	int32_t mTimeEnd;
	FxBoltFramePtr mBolt;
};

