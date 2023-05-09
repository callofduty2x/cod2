#include <stdint.h>

struct ping_t
{
	char adr[12];
	int32_t start;
	int32_t time;
	char info[1024];
};

