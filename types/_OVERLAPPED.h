#include <stdint.h>

struct _OVERLAPPED
{
	int32_t Internal;
	int32_t InternalHigh;
	char pad0[8];
	int32_t hEvent;
};

