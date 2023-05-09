#include <stdint.h>

struct dvar_s
{
	int32_t name;
	int16_t flags;
	int8_t type;
	int8_t modified;
	DvarValue current;
	int32_t latched;
	int32_t reset;
	DvarLimits domain;
	int32_t next;
	int32_t hashNext;
};

