#include <stdint.h>

struct pc_token_s
{
	int32_t type;
	int32_t subtype;
	int32_t intvalue;
	int32_t floatvalue;
	char string[1024];
};

