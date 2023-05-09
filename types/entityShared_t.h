#include <stdint.h>

struct entityShared_t
{
	int8_t linked;
	int8_t bmodel;
	int8_t svFlags;
	char pad0[1];
	int64_t clientMask;
	int8_t inuse;
	char pad1[3];
	int32_t broadcastTime;
	char mins[12];
	char maxs[12];
	int32_t contents;
	char absmin[12];
	char absmax[12];
	char currentOrigin[12];
	char currentAngles[12];
	int32_t ownerNum;
	int32_t eventTime;
};

