#include <stdint.h>

struct _opaque_pthread_t
{
	int32_t __sig;
	int32_t __cleanup_stack;
	char __opaque[596];
};

