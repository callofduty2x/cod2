#include <stdint.h>

struct trajectory_t
{
	trType_t trType;
	int32_t trTime;
	int32_t trDuration;
	char trBase[12];
	char trDelta[12];
};

