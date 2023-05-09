#include <stdint.h>

struct weaponState_t
{
	int32_t ps;
	int32_t xyspeed;
	int32_t frametime;
	char vLastMoveAng[12];
	float fLastIdleFactor;
	int32_t time;
	int32_t damageTime;
	int32_t v_dmg_pitch;
	int32_t v_dmg_roll;
	char vGunOffset[12];
	char vGunSpeed[12];
	char swayAngles[12];
	int32_t weapIdleTime;
};

