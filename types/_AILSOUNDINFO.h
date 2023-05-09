#include <stdint.h>

struct _AILSOUNDINFO
{
	int32_t format;
	int32_t data_ptr;
	int32_t data_len;
	int32_t rate;
	int32_t bits;
	int32_t channels;
	int32_t samples;
	int32_t block_size;
	int32_t initial_ptr;
};

