#include <stdint.h>

union MaterialArgumentDef
{
	int32_t literalConst;
	MaterialArgumentCodeConst codeConst;
	int32_t codeSampler;
	int32_t name;
};

