#include <stdint.h>

struct jpeg_destination_mgr
{
	int32_t next_output_byte;
	int32_t free_in_buffer;
	int32_t init_destination;
	int32_t empty_output_buffer;
	int32_t term_destination;
};

