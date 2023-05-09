#include <stdint.h>

struct gclient_s
{
	playerState_t ps;
	clientSession_t sess;
	int32_t spectatorClient;
	int32_t noclip;
	int32_t ufo;
	int32_t bFrozen;
	int32_t lastCmdTime;
	int32_t buttons;
	int32_t oldbuttons;
	int32_t latched_buttons;
	int32_t buttonsSinceLastFrame;
	char oldOrigin[12];
	float fGunPitch;
	float fGunYaw;
	int32_t damage_blood;
	char damage_from[12];
	int32_t damage_fromWorld;
	int32_t accurateCount;
	int32_t accuracy_shots;
	int32_t accuracy_hits;
	int32_t inactivityTime;
	int32_t inactivityWarning;
	int32_t lastVoiceTime;
	int32_t switchTeamTime;
	int32_t currentAimSpreadScale;
	int32_t persistantPowerup;
	int32_t portalID;
	int32_t dropWeaponTime;
	int32_t sniperRifleFiredTime;
	int32_t sniperRifleMuzzleYaw;
	int32_t PCSpecialPickedUpCount;
	int32_t pLookatEnt;
	int32_t useHoldEntity;
	int32_t useHoldTime;
	int32_t iLastCompassFriendlyInfoEnt;
	int32_t compassPingTime;
	int32_t damageTime;
	int32_t v_dmg_roll;
	int32_t v_dmg_pitch;
	char swayViewAngles[12];
	char swayOffset[12];
	char swayAngles[12];
	char vLastMoveAng[12];
	float fLastIdleFactor;
	char vGunOffset[12];
	char vGunSpeed[12];
	int32_t weapIdleTime;
	int32_t lastServerTime;
	int32_t lastSpawnTime;
};
