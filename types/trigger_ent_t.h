#include <stdint.h>

struct trigger_ent_t
{
	int32_t threshold;
	int32_t accumulate;
	int32_t timestamp;
	int32_t singleUserEntIndex;
};

