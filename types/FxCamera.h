#include <stdint.h>

struct FxCamera
{
	char vieworg[12];
	char frustum[96];
	int32_t numPlanes;
};

