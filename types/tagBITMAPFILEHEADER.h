#include <stdint.h>

struct tagBITMAPFILEHEADER
{
	int16_t bfType;
	int32_t bfSize;
	int16_t bfReserved1;
	int16_t bfReserved2;
	int32_t bfOffBits;
};

