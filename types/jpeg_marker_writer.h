#include <stdint.h>

struct jpeg_marker_writer
{
	int32_t write_file_header;
	int32_t write_frame_header;
	int32_t write_scan_header;
	int32_t write_file_trailer;
	int32_t write_tables_only;
	int32_t write_marker_header;
	int32_t write_marker_byte;
};

