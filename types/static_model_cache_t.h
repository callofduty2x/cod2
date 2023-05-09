#include <stdint.h>

struct static_model_cache_t
{
	char trees[50176];
	char freelist[40];
	int64_t usedlist;
};

