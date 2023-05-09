#include <stdint.h>

struct jpeg_decomp_master
{
	int32_t prepare_for_output_pass;
	int32_t finish_output_pass;
	int8_t is_dummy_pass;
};

