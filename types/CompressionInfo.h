#include <stdint.h>

struct CompressionInfo
{
	int32_t recordSize;
	int32_t format;
	int16_t compressionID;
	int16_t samplesPerPacket;
	int16_t bytesPerPacket;
	int16_t bytesPerFrame;
	int16_t bytesPerSample;
	int16_t futureUse1;
};

