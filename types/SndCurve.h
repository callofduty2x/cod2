#include <stdint.h>

struct SndCurve
{
	int32_t filename;
	int32_t knotCount;
	char knots[64];
};

