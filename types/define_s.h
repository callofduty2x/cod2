#include <stdint.h>

struct define_s
{
	int32_t name;
	int32_t flags;
	int32_t builtin;
	int32_t numparms;
	int32_t parms;
	int32_t tokens;
	int32_t next;
	int32_t hashnext;
};

