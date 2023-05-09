#include <stdint.h>

struct Console
{
	int32_t initialized;
	char textBuffer[131072];
	int32_t currentLine;
	int32_t lineOffset;
	int32_t display;
	int32_t prevType;
	int32_t linewidth;
	int32_t totallines;
	int8_t outputVisible;
	char pad0[3];
	int64_t screenMin;
	int64_t screenMax;
	int32_t messageBuffer;
	char messageBufferArray[20448];
	char color[16];
};

