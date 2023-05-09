#include <stdint.h>

struct jpeg_downsampler
{
	int32_t start_pass;
	int32_t downsample;
	int8_t need_context_rows;
};

