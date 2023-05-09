#include <stdint.h>

struct _AILMIXINFO
{
	char Info[36];
	ADPCMDATA mss_adpcm;
	int32_t src_fract;
	int32_t left_val;
	int32_t right_val;
};

