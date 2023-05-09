#include <stdint.h>

struct _MEMORYSTATUS
{
	int32_t dwLength;
	int32_t dwMemoryLoad;
	int32_t dwTotalPhys;
	int32_t dwAvailPhys;
	int32_t dwTotalPageFile;
	int32_t dwAvailPageFile;
	int32_t dwTotalVirtual;
	int32_t dwAvailVirtual;
};

