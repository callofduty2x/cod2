#include <stdint.h>

struct HFileParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int16_t ioFRefNum;
	int8_t ioFVersNum;
	int8_t filler1;
	int16_t ioFDirIndex;
	int8_t ioFlAttrib;
	int8_t ioFlVersNum;
	FInfo ioFlFndrInfo;
	int32_t ioDirID;
	int16_t ioFlStBlk;
	int32_t ioFlLgLen;
	int32_t ioFlPyLen;
	int16_t ioFlRStBlk;
	int32_t ioFlRLgLen;
	int32_t ioFlRPyLen;
	int32_t ioFlCrDat;
	int32_t ioFlMdDat;
};

