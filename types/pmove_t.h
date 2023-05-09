#include <stdint.h>

struct pmove_t
{
	int32_t ps;
	usercmd_t cmd;
	char oldcmd[28];
	int32_t tracemask;
	int32_t numtouch;
	char touchents[128];
	char mins[12];
	char maxs[12];
	int32_t xyspeed;
	int32_t proneChange;
	int8_t handler;
	int8_t mantleStarted;
	char pad0[2];
	char mantleEndPos[12];
	int32_t mantleDuration;
};

