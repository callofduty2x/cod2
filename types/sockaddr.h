#include <stdint.h>

struct sockaddr
{
	int8_t sa_len;
	int8_t sa_family;
	char sa_data[14];
};

