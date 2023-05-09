#include <stdint.h>

struct cplane_s
{
	char normal[12];
	int32_t dist;
	int8_t type;
	int8_t signbits;
	int16_t pad;
};

