#include <stdint.h>

struct SpeexNBMode
{
	int32_t frameSize;
	int32_t subframeSize;
	int32_t lpcSize;
	int32_t pitchStart;
	int32_t pitchEnd;
	int32_t gamma1;
	int32_t gamma2;
	int32_t lag_factor;
	int32_t lpc_floor;
	char submodes[64];
	int32_t defaultSubmode;
	char quality_map[44];
};

