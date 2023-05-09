#include <stdint.h>

struct editFieldDef_s
{
	int32_t minVal;
	int32_t maxVal;
	int32_t defVal;
	int32_t range;
	int32_t maxChars;
	int32_t maxCharsGotoNext;
	int32_t maxPaintChars;
	int32_t paintOffset;
};

