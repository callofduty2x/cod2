#include <stdint.h>

struct animation_s
{
	char name[64];
	int32_t initialLerp;
	int32_t moveSpeed;
	int32_t duration;
	int32_t nameHash;
	int32_t flags;
	int64_t movetype;
	int32_t noteType;
};

