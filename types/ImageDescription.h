#include <stdint.h>

struct ImageDescription
{
	int32_t idSize;
	int32_t cType;
	int32_t resvd1;
	int16_t resvd2;
	int16_t dataRefIndex;
	int16_t version;
	int16_t revisionLevel;
	int32_t vendor;
	int32_t temporalQuality;
	int32_t spatialQuality;
	int16_t width;
	int16_t height;
	int32_t hRes;
	int32_t vRes;
	int32_t dataSize;
	int16_t frameCount;
	char name[32];
	int16_t depth;
	int16_t clutID;
};

