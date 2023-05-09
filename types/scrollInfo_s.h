#include <stdint.h>

struct scrollInfo_s
{
	int32_t nextScrollTime;
	int32_t nextAdjustTime;
	int32_t adjustValue;
	int32_t scrollKey;
	int32_t xStart;
	int32_t yStart;
	int32_t item;
	int32_t scrollDir;
};

