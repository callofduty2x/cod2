#include <stdint.h>

struct game_hudelem_s
{
	char elem[128];
	int32_t clientNum;
	int32_t team;
	int32_t archived;
};

