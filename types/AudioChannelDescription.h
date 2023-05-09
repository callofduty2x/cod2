#include <stdint.h>

struct AudioChannelDescription
{
	int32_t mChannelLabel;
	int32_t mChannelFlags;
	char mCoordinates[12];
};

