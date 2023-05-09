#include <stdint.h>

struct FXInfo
{
	int16_t fdIconID;
	char fdReserved[6];
	int8_t fdScript;
	int8_t fdXFlags;
	int16_t fdComment;
	int32_t fdPutAway;
};

