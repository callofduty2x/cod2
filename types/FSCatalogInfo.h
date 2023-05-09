#include <stdint.h>

struct FSCatalogInfo
{
	int16_t nodeFlags;
	int16_t volume;
	int32_t parentDirID;
	int32_t nodeID;
	int8_t sharingFlags;
	int8_t userPrivileges;
	int8_t reserved1;
	int8_t reserved2;
	UTCDateTime createDate;
	int64_t contentModDate;
	int64_t attributeModDate;
	int64_t accessDate;
	int64_t backupDate;
	char permissions[16];
	char finderInfo[16];
	char extFinderInfo[16];
	int64_t dataLogicalSize;
	int64_t dataPhysicalSize;
	int64_t rsrcLogicalSize;
	int64_t rsrcPhysicalSize;
	int32_t valence;
	int32_t textEncodingHint;
};

