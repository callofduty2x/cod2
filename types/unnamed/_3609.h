#include <stdint.h>

struct _3609
{
	int32_t file;
	int64_t gi;
	int32_t byte_before_the_zipfile;
	int32_t num_file;
	int32_t pos_in_central_dir;
	int32_t current_file_ok;
	int32_t central_pos;
	int32_t size_central_dir;
	int32_t offset_central_dir;
	char cur_file_info[80];
	unz_file_info_internal cur_file_info_internal;
	int32_t pfile_in_zip_read;
};

