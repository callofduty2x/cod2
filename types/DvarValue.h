#include <stdint.h>

union DvarValue
{
	int8_t enabled;
	int32_t integer;
	int32_t value;
	int32_t vector;
	int32_t string;
	int32_t color;
};

