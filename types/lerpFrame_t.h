#include <stdint.h>

struct lerpFrame_t
{
	int32_t yawAngle;
	int32_t yawing;
	int32_t pitchAngle;
	int32_t pitching;
	int32_t animationNumber;
	int32_t animation;
	int32_t animationTime;
	char oldFramePos[12];
	int32_t animSpeedScale;
	int32_t oldFrameSnapshotTime;
};

