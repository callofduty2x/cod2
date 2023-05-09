#include <stdint.h>

struct WaveletDecode
{
	int16_t value;
	int16_t bit;
	int32_t data;
	int32_t width;
	int32_t height;
	int32_t channels;
	int32_t bpp;
	int32_t mipLevel;
	int8_t dataInitialized;
};

