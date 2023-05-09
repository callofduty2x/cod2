#include <stdint.h>

struct WDParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int16_t ioWDCreated;
	int16_t ioWDIndex;
	int32_t ioWDProcID;
	int16_t ioWDVRefNum;
	int16_t filler10;
	int32_t filler11;
	int32_t filler12;
	int32_t filler13;
	int32_t ioWDDirID;
};

