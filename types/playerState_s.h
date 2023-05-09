#include <stdint.h>

struct playerState_s
{
	int32_t commandTime;
	int32_t pm_type;
	int32_t bobCycle;
	int32_t pm_flags;
	int32_t pm_time;
	char origin[12];
	char velocity[12];
	int64_t oldVelocity;
	int32_t weaponTime;
	int32_t weaponDelay;
	int32_t grenadeTimeLeft;
	int32_t weaponRestrictKickTime;
	int32_t foliageSoundTime;
	int32_t gravity;
	int32_t leanf;
	int32_t speed;
	char delta_angles[12];
	int32_t groundEntityNum;
	char vLadderVec[12];
	int32_t jumpTime;
	int32_t jumpOriginZ;
	int32_t legsTimer;
	int32_t legsAnim;
	int32_t torsoTimer;
	int32_t torsoAnim;
	int32_t legsAnimDuration;
	int32_t torsoAnimDuration;
	int32_t damageTimer;
	int32_t damageDuration;
	int32_t flinchYaw;
	int32_t movementDir;
	int32_t eFlags;
	int32_t eventSequence;
	char events[16];
	char eventParms[16];
	int32_t oldEventSequence;
	int32_t clientNum;
	int32_t offHandIndex;
	int32_t weapon;
	int32_t weaponstate;
	float fWeaponPosFrac;
	int32_t adsDelayTime;
	int32_t viewmodelIndex;
	char viewangles[12];
	int32_t viewHeightTarget;
	int32_t viewHeightCurrent;
	int32_t viewHeightLerpTime;
	int32_t viewHeightLerpTarget;
	int32_t viewHeightLerpDown;
	int32_t viewHeightLerpPosAdj;
	int64_t viewAngleClampBase;
	int64_t viewAngleClampRange;
	int32_t damageEvent;
	int32_t damageYaw;
	int32_t damagePitch;
	int32_t damageCount;
	char stats[24];
	char ammo[512];
	char ammoclip[512];
	char weapons[16];
	int64_t weaponslots;
	char weaponrechamber[16];
	char mins[12];
	char maxs[12];
	int32_t proneDirection;
	int32_t proneDirectionPitch;
	int32_t proneTorsoPitch;
	int32_t viewlocked;
	int32_t viewlocked_entNum;
	int32_t cursorHint;
	int32_t cursorHintString;
	int32_t cursorHintEntIndex;
	int32_t iCompassFriendInfo;
	float fTorsoHeight;
	float fTorsoPitch;
	float fWaistPitch;
	int32_t holdBreathScale;
	int32_t holdBreathTimer;
	MantleState mantleState;
	int32_t entityEventSequence;
	int32_t weapAnim;
	int32_t aimSpreadScale;
	int32_t shellshockIndex;
	int32_t shellshockTime;
	int32_t shellshockDuration;
	char objective[448];
	int32_t deltaTime;
};
