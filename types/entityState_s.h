#include <stdint.h>

struct entityState_s
{
	int32_t number;
	int32_t eType;
	int32_t eFlags;
	trajectory_t pos;
	char apos[36];
	int32_t time;
	int32_t time2;
	char origin2[12];
	char angles2[12];
	int32_t otherEntityNum;
	int32_t attackerEntityNum;
	int32_t groundEntityNum;
	int32_t constantLight;
	int32_t loopSound;
	int32_t surfType;
	char pad0[4];
	int32_t clientNum;
	int32_t iHeadIcon;
	int32_t iHeadIconTeam;
	int32_t solid;
	int32_t eventParm;
	int32_t eventSequence;
	char events[16];
	char eventParms[16];
	int32_t weapon;
	int32_t legsAnim;
	int32_t torsoAnim;
	int32_t leanf;
	char pad1[4];
	int32_t dmgFlags;
	int32_t animMovetype;
	float fTorsoHeight;
	float fTorsoPitch;
	float fWaistPitch;
};

