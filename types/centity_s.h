#include <stdint.h>

struct centity_s
{
	entityState_t currentState;
	char nextState[240];
	int8_t nextValid;
	int8_t cullIn;
	int8_t bMuzzleFlash;
	int8_t bTrailMade;
	int32_t previousEventSequence;
	int32_t miscTime;
	char lerpOrigin[12];
	char lerpAngles[12];
	char lightingOrigin[12];
	int32_t dl_time;
	int32_t voiceChatSprite;
	int32_t voiceChatSpriteTime;
	int32_t tree;
	int32_t localClientNum;
};

