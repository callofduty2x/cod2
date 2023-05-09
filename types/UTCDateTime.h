#include <stdint.h>

struct UTCDateTime
{
	int16_t highSeconds;
	int32_t lowSeconds;
	int16_t fraction;
};

