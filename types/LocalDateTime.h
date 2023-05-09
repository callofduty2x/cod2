#include <stdint.h>

struct LocalDateTime
{
	int16_t highSeconds;
	int32_t lowSeconds;
	int16_t fraction;
};

