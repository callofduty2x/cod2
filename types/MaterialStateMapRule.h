#include <stdint.h>

struct MaterialStateMapRule
{
	int64_t stateBitsMask;
	int64_t stateBitsValue;
	int64_t stateBitsSet;
	int64_t stateBitsClear;
};

