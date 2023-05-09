#include <stdint.h>

struct tagInfo_s
{
	int32_t parent;
	int32_t next;
	int16_t name;
	char pad0[2];
	int32_t index;
	char axis[48];
	char parentInvAxis[48];
};

