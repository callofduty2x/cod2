#include <stdint.h>

struct clientDebug_t
{
	int32_t maxStrings;
	int32_t numStrings;
	int32_t strings;
	int32_t stringFromServer;
	int32_t maxLines;
	int32_t numLines;
	int32_t lines;
	int32_t lineFromServer;
	int32_t lineDuration;
};

