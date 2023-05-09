#include <stdint.h>

struct clientInfo_t
{
	int32_t infoValid;
	int32_t nextValid;
	int32_t clientNum;
	char name[32];
	team_t team;
	int32_t oldteam;
	int32_t score;
	int32_t location;
	int32_t health;
	char model[64];
	char attachModelNames[384];
	char attachTagNames[384];
	lerpFrame_t legs;
	char torso[48];
	int32_t lerpMoveDir;
	int32_t lerpLean;
	char playerAngles[12];
	int32_t leftHandGun;
	int32_t dobjDirty;
	char angles[72];
	char tag_origin_angles[12];
	char tag_origin_offset[12];
	char clientConditions[72];
	int32_t pXAnimTree;
	int32_t iDObjWeapon;
	int32_t stanceTransitionTime;
	int32_t turnAnimEndTime;
	int8_t turnAnimType;
};

