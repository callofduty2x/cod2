#include <stdint.h>

struct pml_t
{
	char forward[12];
	char right[12];
	char up[12];
	int32_t frametime;
	int32_t msec;
	int32_t walking;
	int32_t groundPlane;
	int32_t almostGroundPlane;
	char groundTrace[36];
	int32_t impactSpeed;
	char previous_origin[12];
	char previous_velocity[12];
	int32_t previous_waterlevel;
};

