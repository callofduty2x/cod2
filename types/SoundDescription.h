#include <stdint.h>

struct SoundDescription
{
	int32_t descSize;
	int32_t dataFormat;
	int32_t resvd1;
	int16_t resvd2;
	int16_t dataRefIndex;
	int16_t version;
	int16_t revlevel;
	int32_t vendor;
	int16_t numChannels;
	int16_t sampleSize;
	int16_t compressionID;
	int16_t packetSize;
	int32_t sampleRate;
};

