#include <stdint.h>

struct _D3DXCONSTANT_DESC
{
	int32_t Name;
	D3DXREGISTER_SET RegisterSet;
	int32_t RegisterIndex;
	int32_t RegisterCount;
	D3DXPARAMETER_CLASS Class;
	D3DXPARAMETER_TYPE Type;
	int32_t Rows;
	int32_t Columns;
	int32_t Elements;
	int32_t StructMembers;
	int32_t Bytes;
	int32_t DefaultValue;
};

