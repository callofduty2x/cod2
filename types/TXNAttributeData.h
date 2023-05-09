#include <stdint.h>

union TXNAttributeData
{
	int32_t dataPtr;
	int32_t dataValue;
	int32_t atsuFeatures;
	int32_t atsuVariations;
	int32_t urlReference;
};

