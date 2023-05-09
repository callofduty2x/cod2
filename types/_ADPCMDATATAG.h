#include <stdint.h>

struct _ADPCMDATATAG
{
	int32_t blocksize;
	int32_t extrasamples;
	int32_t blockleft;
	int32_t step;
	int32_t savesrc;
	int32_t sample;
	int32_t destend;
	int32_t srcend;
	int32_t samplesL;
	int32_t samplesR;
	char moresamples[32];
};

