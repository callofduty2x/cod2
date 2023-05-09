#include <stdint.h>

struct HIOParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int16_t ioRefNum;
	int8_t ioVersNum;
	int8_t ioPermssn;
	int32_t ioMisc;
	int32_t ioBuffer;
	int32_t ioReqCount;
	int32_t ioActCount;
	int16_t ioPosMode;
	int32_t ioPosOffset;
};

