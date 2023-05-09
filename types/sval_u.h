#include <stdint.h>

union sval_u
{
	int32_t type;
	int32_t stringValue;
	int32_t idValue;
	int32_t floatValue;
	int32_t intValue;
	int32_t node;
	int32_t sourcePosValue;
	int32_t codePosValue;
	int32_t debugString;
	int32_t block;
};

