#include <stdint.h>

struct challenge_t
{
	char adr[12];
	int32_t challenge;
	int32_t time;
	int32_t pingTime;
	int32_t firstTime;
	int32_t firstPing;
	int32_t connected;
	int32_t guid;
};

