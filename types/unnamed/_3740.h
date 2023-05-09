#include <stdint.h>

struct _3740
{
	int16_t boneNames;
	char pad0[2];
	int64_t hierarchy;
	char modelParts[100];
	char modelSurf[20];
	XBoneInfo boneInfo;
	int8_t partClassification;
	char pad1[1];
	int16_t surfNames;
};

