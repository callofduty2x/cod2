#include <stdint.h>

struct FSSpec
{
	int16_t vRefNum;
	int32_t parID;
	char name[64];
};

