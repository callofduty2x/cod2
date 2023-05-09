#include <stdint.h>

struct VBRState
{
	int32_t energy_alpha;
	int32_t average_energy;
	int32_t last_energy;
	char last_log_energy[20];
	int32_t accum_sum;
	int32_t last_pitch_coef;
	int32_t soft_pitch;
	int32_t last_quality;
	int32_t noise_level;
	int32_t noise_accum;
	int32_t noise_accum_count;
	int32_t consec_noise;
};

