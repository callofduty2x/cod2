#include <stdint.h>

struct audioSample_t
{
	int32_t buffer;
	int32_t lengthInBytes;
	int32_t lengthInSamples;
	int32_t bytesPerSample;
	int32_t frequency;
	int8_t stereo;
	char pad0[3];
	int32_t channels;
	int32_t sampleOffset;
};

