#include <stdint.h>

struct FxScheduler
{
	char pad0[4];
	int32_t mScheduledHead;
	int32_t mScheduledCount;
};

