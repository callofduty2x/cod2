#include <stdint.h>

struct PixMap
{
	int32_t baseAddr;
	int16_t rowBytes;
	int64_t bounds;
	int16_t pmVersion;
	int16_t packType;
	int32_t packSize;
	int32_t hRes;
	int32_t vRes;
	int16_t pixelType;
	int16_t pixelSize;
	int16_t cmpCount;
	int16_t cmpSize;
	int32_t pixelFormat;
	int32_t pmTable;
	int32_t pmExt;
};

