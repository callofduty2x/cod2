#include <stdint.h>

struct SysInfo
{
	int64_t cpuGHz;
	int32_t sysMB;
	int8_t SSE;
	char gpuDescription[512];
};

