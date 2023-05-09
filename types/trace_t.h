#include <stdint.h>

struct trace_t
{
	int32_t fraction;
	char normal[12];
	int32_t surfaceFlags;
	int32_t contents;
	int32_t material;
	int16_t entityNum;
	int16_t partName;
	int16_t partGroup;
	int8_t allsolid;
	int8_t startsolid;
};

