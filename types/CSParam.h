#include <stdint.h>

struct CSParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int32_t ioMatchPtr;
	int32_t ioReqMatchCount;
	int32_t ioActMatchCount;
	int32_t ioSearchBits;
	int32_t ioSearchInfo1;
	int32_t ioSearchInfo2;
	int32_t ioSearchTime;
	CatPositionRec ioCatPosition;
	int32_t ioOptBuffer;
	int32_t ioOptBufSize;
};

