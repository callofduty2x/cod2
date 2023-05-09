#include <stdint.h>

struct stat
{
	int32_t st_dev;
	int32_t st_ino;
	int16_t st_mode;
	int16_t st_nlink;
	int32_t st_uid;
	int32_t st_gid;
	int32_t st_rdev;
	timespec st_atimespec;
	int64_t st_mtimespec;
	int64_t st_ctimespec;
	int64_t st_size;
	int64_t st_blocks;
	int32_t st_blksize;
	int32_t st_flags;
	int32_t st_gen;
	int32_t st_lspare;
	char st_qspare[16];
};

