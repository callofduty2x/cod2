#include <stdint.h>

struct VariableStackBuffer
{
	int32_t pos;
	int16_t size;
	int16_t bufLen;
	int16_t localId;
	int8_t time;
	int8_t buf;
};

