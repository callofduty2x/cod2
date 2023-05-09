#include <stdint.h>

struct DirInfo
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
	int8_t ioACUser;
	DInfo ioDrUsrWds;
	int32_t ioDrDirID;
	int16_t ioDrNmFls;
	char filler3[18];
	int32_t ioDrCrDat;
	int32_t ioDrMdDat;
	int32_t ioDrBkDat;
	DXInfo ioDrFndrInfo;
	int32_t ioDrParID;
};

