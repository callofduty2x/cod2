#include <stdint.h>

struct AudioStreamBasicDescription
{
	int64_t mSampleRate;
	int32_t mFormatID;
	int32_t mFormatFlags;
	int32_t mBytesPerPacket;
	int32_t mFramesPerPacket;
	int32_t mBytesPerFrame;
	int32_t mChannelsPerFrame;
	int32_t mBitsPerChannel;
	int32_t mReserved;
};

