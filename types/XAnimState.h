#include <stdint.h>

struct XAnimState
{
	int32_t time;
	int32_t oldTime;
	int16_t timeCount;
	int16_t oldTimeCount;
	int32_t goalTime;
	int32_t goalWeight;
	int32_t weight;
	int32_t rate;
};

