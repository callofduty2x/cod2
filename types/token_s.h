#include <stdint.h>

struct token_s
{
	char string[1024];
	int32_t type;
	int32_t subtype;
	int32_t intvalue;
	char pad0[4];
	char floatvalue[16];
	int32_t whitespace_p;
	int32_t endwhitespace_p;
	int32_t line;
	int32_t linescrossed;
	int32_t next;
};

