#include <stdint.h>

struct loopmsg_t
{
	char data[1400];
	int32_t datalen;
	int32_t port;
};

