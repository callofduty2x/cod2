#include <stdint.h>

struct jpeg_marker_reader
{
	int32_t reset_marker_reader;
	int32_t read_markers;
	int32_t read_restart_marker;
	int8_t saw_SOI;
	int8_t saw_SOF;
	char pad0[2];
	int32_t next_restart_num;
	int32_t discarded_bytes;
};

