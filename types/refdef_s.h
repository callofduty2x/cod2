#include <stdint.h>

struct refdef_s
{
	int32_t x;
	int32_t y;
	int32_t width;
	int32_t height;
	int32_t fov_x;
	int32_t fov_y;
	char vieworg[12];
	char viewaxis[36];
	int32_t time;
	int32_t zNear;
	int32_t blurRadius;
	int32_t viewIndex;
};

