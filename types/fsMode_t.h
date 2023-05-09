#include <stdint.h>

typedef enum
{
	FS_READ = 0,
	FS_WRITE = 1,
	FS_APPEND = 2,
	FS_APPEND_SYNC = 3
} fsMode_t;

