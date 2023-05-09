#include <stdint.h>

struct serverStatusInfo_t
{
	char address[64];
	char lines[2048];
	char text[1024];
	char pings[192];
	int32_t numLines;
};

