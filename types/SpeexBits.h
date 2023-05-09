#include <stdint.h>

struct SpeexBits
{
	int32_t chars;
	int32_t nbBits;
	int32_t charPtr;
	int32_t bitPtr;
	int32_t owner;
	int32_t overflow;
	int32_t buf_size;
	int32_t reserved1;
	int32_t reserved2;
};

