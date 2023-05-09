#include <stdint.h>

struct VoicePacket_t
{
	int8_t talker;
	char data[256];
	int32_t dataSize;
};

