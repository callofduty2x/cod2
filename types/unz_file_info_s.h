#include <stdint.h>

struct unz_file_info_s
{
	int32_t version;
	int32_t version_needed;
	int32_t flag;
	int32_t compression_method;
	int32_t dosDate;
	int32_t crc;
	int32_t compressed_size;
	int32_t uncompressed_size;
	int32_t size_filename;
	int32_t size_file_extra;
	int32_t size_file_comment;
	int32_t disk_num_start;
	int32_t internal_fa;
	int32_t external_fa;
	tm_unz tmu_date;
};

