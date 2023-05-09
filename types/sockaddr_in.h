#include <stdint.h>

struct sockaddr_in
{
	int8_t sin_len;
	int8_t sin_family;
	int16_t sin_port;
	in_addr sin_addr;
	int64_t sin_zero;
};

