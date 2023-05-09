#include <stdint.h>

struct FSVolumeInfo
{
	UTCDateTime createDate;
	int64_t modifyDate;
	int64_t backupDate;
	int64_t checkedDate;
	int32_t fileCount;
	int32_t folderCount;
	int64_t totalBytes;
	int64_t freeBytes;
	int32_t blockSize;
	int32_t totalBlocks;
	int32_t freeBlocks;
	int32_t nextAllocation;
	int32_t rsrcClumpSize;
	int32_t dataClumpSize;
	int32_t nextCatalogID;
	char finderInfo[32];
	int16_t flags;
	int16_t filesystemID;
	int16_t signature;
	int16_t driveNumber;
	int16_t driverRefNum;
};

