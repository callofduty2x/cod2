#include <stdint.h>

struct EventRecord
{
	int16_t what;
	int32_t message;
	int32_t when;
	int32_t where;
	int16_t modifiers;
};

