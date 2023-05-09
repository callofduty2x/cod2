#include <stdint.h>

struct mapInfo
{
	int32_t mapName;
	int32_t mapLoadName;
	int32_t imageName;
	int32_t opponentName;
	int32_t teamMembers;
	int32_t typeBits;
	int32_t cinematic;
	char timeToBeat[128];
	int32_t levelShot;
	int32_t active;
};

