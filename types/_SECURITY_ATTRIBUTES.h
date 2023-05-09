#include <stdint.h>

struct _SECURITY_ATTRIBUTES
{
	int32_t nLength;
	int32_t lpSecurityDescriptor;
	int32_t bInheritHandle;
};

