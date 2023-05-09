#include <stdint.h>

struct ClientVoicePacket_t
{
	int32_t dataSize;
	char data[256];
};

