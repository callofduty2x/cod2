#include <stdint.h>

struct jpeg_d_coef_controller
{
	int32_t start_input_pass;
	int32_t consume_data;
	int32_t start_output_pass;
	int32_t decompress_data;
	int32_t coef_arrays;
};

