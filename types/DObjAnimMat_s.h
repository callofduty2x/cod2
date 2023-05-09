#include <stdint.h>

struct DObjAnimMat_s
{
	char quat[16];
	char trans[12];
	int32_t transWeight;
};

