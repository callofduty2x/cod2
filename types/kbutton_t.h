#include <stdint.h>

struct kbutton_t
{
	int64_t down;
	int32_t downtime;
	int32_t msec;
	int8_t active;
	int8_t wasPressed;
};

