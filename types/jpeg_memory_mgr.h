#include <stdint.h>

struct jpeg_memory_mgr
{
	int32_t alloc_small;
	int32_t alloc_large;
	int32_t alloc_sarray;
	int32_t alloc_barray;
	int32_t request_virt_sarray;
	int32_t request_virt_barray;
	int32_t realize_virt_arrays;
	int32_t access_virt_sarray;
	int32_t access_virt_barray;
	int32_t free_pool;
	int32_t self_destruct;
	int32_t max_memory_to_use;
	int32_t max_alloc_chunk;
};

