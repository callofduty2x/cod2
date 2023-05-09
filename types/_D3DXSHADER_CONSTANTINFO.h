#include <stdint.h>

struct _D3DXSHADER_CONSTANTINFO
{
	int32_t Name;
	int16_t RegisterSet;
	int16_t RegisterIndex;
	int16_t RegisterCount;
	int16_t Reserved;
	int32_t TypeInfo;
	int32_t DefaultValue;
};

