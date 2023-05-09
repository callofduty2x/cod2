#include <stdint.h>

struct z_stream_s
{
	int32_t next_in;
	int32_t avail_in;
	int32_t total_in;
	int32_t next_out;
	int32_t avail_out;
	int32_t total_out;
	int32_t msg;
	int32_t state;
	int32_t zalloc;
	int32_t zfree;
	int32_t opaque;
	int32_t data_type;
	int32_t adler;
	int32_t reserved;
};

