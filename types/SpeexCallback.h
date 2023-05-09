#include <stdint.h>

struct SpeexCallback
{
	int32_t callback_id;
	int32_t func;
	int32_t data;
	int32_t reserved1;
	int32_t reserved2;
};

