#include <stdint.h>

struct SkinXModelCmd
{
	int32_t surfs;
	int32_t e;
	int32_t mat;
	char surfacePartBits[16];
	int8_t surfCount;
	int8_t boneCount;
	char matOffset[64];
};

