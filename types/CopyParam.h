#include <stdint.h>

struct CopyParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int16_t ioDstVRefNum;
	int16_t filler8;
	int32_t ioNewName;
	int32_t ioCopyName;
	int32_t ioNewDirID;
	int32_t filler14;
	int32_t filler15;
	int32_t ioDirID;
};

