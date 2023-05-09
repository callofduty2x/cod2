#include <stdint.h>

union VariableUnion
{
	int32_t intValue;
	int32_t floatValue;
	int32_t stringValue;
	int32_t vectorValue;
	int32_t codePosValue;
	int32_t pointerValue;
	int32_t stackValue;
	int32_t entityOffset;
};

