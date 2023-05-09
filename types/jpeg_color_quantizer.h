#include <stdint.h>

struct jpeg_color_quantizer
{
	int32_t start_pass;
	int32_t color_quantize;
	int32_t finish_pass;
	int32_t new_color_map;
};

