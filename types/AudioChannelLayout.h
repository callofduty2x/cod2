#include <stdint.h>

struct AudioChannelLayout
{
	int32_t mChannelLayoutTag;
	int32_t mChannelBitmap;
	int32_t mNumberChannelDescriptions;
	char mChannelDescriptions[20];
};

