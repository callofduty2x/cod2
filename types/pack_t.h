#include <stdint.h>

struct pack_t
{
	char iwdFilename[256];
	char iwdBasename[256];
	char iwdGamename[256];
	int32_t handle;
	int32_t checksum;
	int32_t pure_checksum;
	int32_t numfiles;
	int8_t referenced;
	char pad0[3];
	int32_t hashSize;
	int32_t hashTable;
	int32_t buildBuffer;
};

