#include <stdint.h>

struct XModelParts_s
{
	int16_t numBones;
	int16_t numRootBones;
	int32_t hierarchy;
	int32_t quats;
	int32_t trans;
	int32_t partClassification;
	char skel[80];
};

