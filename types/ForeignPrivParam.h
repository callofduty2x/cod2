#include <stdint.h>

struct ForeignPrivParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int32_t ioFiller21;
	int32_t ioFiller22;
	int32_t ioForeignPrivBuffer;
	int32_t ioForeignPrivActCount;
	int32_t ioForeignPrivReqCount;
	int32_t ioFiller23;
	int32_t ioForeignPrivDirID;
	int32_t ioForeignPrivInfo1;
	int32_t ioForeignPrivInfo2;
	int32_t ioForeignPrivInfo3;
	int32_t ioForeignPrivInfo4;
};

