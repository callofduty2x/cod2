#include <stdint.h>

struct _Deque_impl
{
	int32_t _M_map;
	int32_t _M_map_size;
	char _M_start[16];
	char _M_finish[16];
};

