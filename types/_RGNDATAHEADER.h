#include <stdint.h>

struct _RGNDATAHEADER
{
	int32_t dwSize;
	int32_t iType;
	int32_t nCount;
	int32_t nRgnSize;
	char rcBound[16];
};

