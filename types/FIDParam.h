#include <stdint.h>

struct FIDParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int32_t filler14;
	int32_t ioDestNamePtr;
	int32_t filler15;
	int32_t ioDestDirID;
	int32_t filler16;
	int32_t filler17;
	int32_t ioSrcDirID;
	int16_t filler18;
	int32_t ioFileID;
};

