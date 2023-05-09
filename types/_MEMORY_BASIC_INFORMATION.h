#include <stdint.h>

struct _MEMORY_BASIC_INFORMATION
{
	int32_t BaseAddress;
	int32_t AllocationBase;
	int32_t AllocationProtect;
	int32_t RegionSize;
	int32_t State;
	int32_t Protect;
	int32_t Type;
};

