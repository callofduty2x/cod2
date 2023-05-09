#include <stdint.h>

struct HVolumeParam
{
	int32_t qLink;
	int16_t qType;
	int16_t ioTrap;
	int32_t ioCmdAddr;
	int32_t ioCompletion;
	int16_t ioResult;
	int32_t ioNamePtr;
	int16_t ioVRefNum;
	int32_t filler2;
	int16_t ioVolIndex;
	int32_t ioVCrDate;
	int32_t ioVLsMod;
	int16_t ioVAtrb;
	int16_t ioVNmFls;
	int16_t ioVBitMap;
	int16_t ioAllocPtr;
	int16_t ioVNmAlBlks;
	int32_t ioVAlBlkSiz;
	int32_t ioVClpSiz;
	int16_t ioAlBlSt;
	int32_t ioVNxtCNID;
	int16_t ioVFrBlk;
	int16_t ioVSigWord;
	int16_t ioVDrvInfo;
	int16_t ioVDRefNum;
	int16_t ioVFSID;
	int32_t ioVBkUp;
	int16_t ioVSeqNum;
	int32_t ioVWrCnt;
	int32_t ioVFilCnt;
	int32_t ioVDirCnt;
	char ioVFndrInfo[32];
};

