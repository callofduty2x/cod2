#include <stdint.h>

struct ObjParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int16_t filler7;
	int16_t ioObjType;
	int32_t ioObjNamePtr;
	int32_t ioObjID;
};

