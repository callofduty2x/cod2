#include <stdint.h>

struct jpeg_upsampler
{
	int32_t start_pass;
	int32_t upsample;
	int8_t need_context_rows;
};

