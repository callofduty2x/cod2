#include <stdint.h>

struct OutdoorGlob
{
	char bbox[24];
	char scale[12];
	char invScale[12];
	char add[12];
	int32_t pic;
};

