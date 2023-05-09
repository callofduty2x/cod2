#include <stdint.h>

struct GDevice
{
	int16_t gdRefNum;
	int16_t gdID;
	int16_t gdType;
	int32_t gdITable;
	int16_t gdResPref;
	int32_t gdSearchProc;
	int32_t gdCompProc;
	int16_t gdFlags;
	int32_t gdPMap;
	int32_t gdRefCon;
	int32_t gdNextGD;
	MacRect gdRect;
	int32_t gdMode;
	int16_t gdCCBytes;
	int16_t gdCCDepth;
	int32_t gdCCXData;
	int32_t gdCCXMask;
	int32_t gdExt;
};

