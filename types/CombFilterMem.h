#include <stdint.h>

struct CombFilterMem
{
	int32_t last_pitch;
	char last_pitch_gain[12];
	int32_t smooth_gain;
};

