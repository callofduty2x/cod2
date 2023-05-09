#include <stdint.h>

struct XAnimParts_s
{
	int16_t numframes;
	int8_t bLoop;
	int8_t bDelta;
	int32_t framerate;
	int32_t frequency;
	int8_t notifyCount;
	char pad0[1];
	int16_t boneCount;
	int32_t names;
	int32_t simpleQuatBits;
	int32_t parts;
	int32_t notify;
	int32_t deltaPart;
	int32_t name;
	int8_t isDefault;
};

