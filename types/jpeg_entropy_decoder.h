#include <stdint.h>

struct jpeg_entropy_decoder
{
	int32_t start_pass;
	int32_t decode_mcu;
	int8_t insufficient_data;
};

