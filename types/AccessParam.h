#include <stdint.h>

struct AccessParam
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
	int16_t ioDenyModes;
	int16_t filler4;
	int8_t filler5;
	int8_t ioACUser;
	int32_t filler6;
	int32_t ioACOwnerID;
	int32_t ioACGroupID;
	int32_t ioACAccess;
	int32_t ioDirID;
};

