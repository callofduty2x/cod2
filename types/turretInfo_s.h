#include <stdint.h>

struct turretInfo_s
{
	int32_t inuse;
	int32_t flags;
	int32_t fireTime;
	int64_t arcmin;
	int64_t arcmax;
	int32_t dropPitch;
	int32_t stance;
	int32_t prevStance;
	int32_t fireSndDelay;
	char userOrigin[12];
	int32_t playerSpread;
	int32_t pitchCap;
	int8_t fireSnd;
	int8_t fireSndPlayer;
	int8_t stopSnd;
	int8_t stopSndPlayer;
};

