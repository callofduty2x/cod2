#include <stdint.h>

struct qtime_s
{
	int32_t tm_sec;
	int32_t tm_min;
	int32_t tm_hour;
	int32_t tm_mday;
	int32_t tm_mon;
	int32_t tm_year;
	int32_t tm_wday;
	int32_t tm_yday;
	int32_t tm_isdst;
};

