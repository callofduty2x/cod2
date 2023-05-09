#include <stdint.h>

struct jpeg_entropy_encoder
{
	int32_t start_pass;
	int32_t encode_mcu;
	int32_t finish_pass;
};

