#include <stdint.h>

struct SpeexSBMode
{
	int32_t nb_mode;
	int32_t frameSize;
	int32_t subframeSize;
	int32_t lpcSize;
	int32_t bufSize;
	int32_t gamma1;
	int32_t gamma2;
	int32_t lag_factor;
	int32_t lpc_floor;
	int32_t folding_gain;
	char submodes[32];
	int32_t defaultSubmode;
	char low_quality_map[44];
	char quality_map[44];
	int32_t vbr_thresh;
	int32_t nb_modes;
};

