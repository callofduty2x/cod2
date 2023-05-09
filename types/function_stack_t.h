#include <stdint.h>

struct function_stack_t
{
	int32_t pos;
	int32_t localId;
	int32_t localVarCount;
	int32_t top;
	int32_t startTop;
};

