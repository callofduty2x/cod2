#include <stdint.h>

struct viewState_t
{
	int32_t ps;
	int32_t damageTime;
	int32_t time;
	int32_t v_dmg_pitch;
	int32_t v_dmg_roll;
	int32_t xyspeed;
	int32_t frametime;
	float fLastIdleFactor;
	int32_t weapIdleTime;
};

