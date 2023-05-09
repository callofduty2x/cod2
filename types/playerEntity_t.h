#include <stdint.h>

struct playerEntity_t
{
	float fLastWeaponPosFrac;
	int32_t bPositionToADS;
	char vPositionLastOrg[12];
	float fLastIdleFactor;
	char vLastMoveOrg[12];
	char vLastMoveAng[12];
};

