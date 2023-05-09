#include <stdint.h>

struct jpeg_marker_struct
{
	int32_t next;
	int8_t marker;
	char pad0[3];
	int32_t original_length;
	int32_t data_length;
	int32_t data;
};

