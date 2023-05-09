#include <stdint.h>

struct msg_t
{
	int32_t overflowed;
	int32_t data;
	int32_t maxsize;
	int32_t cursize;
	int32_t readcount;
	int32_t bit;
};

