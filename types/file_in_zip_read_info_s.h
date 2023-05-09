#include <stdint.h>

struct file_in_zip_read_info_s
{
	int32_t read_buffer;
	z_stream stream;
	int32_t pos_in_zipfile;
	int32_t stream_initialised;
	int32_t offset_local_extrafield;
	int32_t size_local_extrafield;
	int32_t pos_local_extrafield;
	int32_t rest_read_compressed;
	int32_t rest_read_uncompressed;
	int32_t file;
	int32_t compression_method;
	int32_t byte_before_the_zipfile;
};

