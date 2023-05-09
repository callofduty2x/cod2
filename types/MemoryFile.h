#include <stdint.h>

struct MemoryFile
{
	int32_t buffer;
	int32_t bufferSize;
	int32_t bytesUsed;
	int8_t errorOnOverflow;
	int8_t memoryOverflow;
	char pad0[2];
	int32_t archiveProc;
};

