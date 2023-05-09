#include <stdint.h>

struct MD4_CTX
{
	char state[16];
	int64_t count;
	char buffer[64];
};

