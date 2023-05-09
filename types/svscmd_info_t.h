#include <stdint.h>

struct svscmd_info_t
{
	char cmd[1024];
	int32_t time;
	int32_t type;
};

