#include <stdint.h>

struct ConDrawInputGlob
{
	int32_t matchCount;
	int32_t inputText;
	int32_t inputTextLen;
	int8_t hasExactMatch;
	char pad0[3];
	int32_t x;
	int32_t y;
	int32_t leftX;
	int32_t fontHeight;
};

