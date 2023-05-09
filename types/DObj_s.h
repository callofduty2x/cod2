#include <stdint.h>

struct DObj_s
{
	int32_t tree;
	int32_t skel;
	int32_t timeStamp;
	int32_t animToModel;
	int16_t duplicateParts;
	char pad0[2];
	int32_t locked;
	int8_t numModels;
	int8_t numBones;
	int8_t ignoreCollision;
	char pad1[1];
	char models[32];
	int64_t modelParents;
	int64_t matOffset;
	char mins[12];
	char maxs[12];
};

