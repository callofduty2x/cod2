#include <stdint.h>

struct cameraShake_t
{
	int32_t time;
	int32_t scale;
	int32_t length;
	int32_t radius;
	char src[12];
	int32_t size;
	int32_t rumbleScale;
};

