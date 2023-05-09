#include <stdint.h>

struct jpeg_source_mgr
{
	int32_t next_input_byte;
	int32_t bytes_in_buffer;
	int32_t init_source;
	int32_t fill_input_buffer;
	int32_t skip_input_data;
	int32_t resync_to_restart;
	int32_t term_source;
};

