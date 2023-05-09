#include <stdint.h>

struct AudioStreamPacketDescription
{
	int64_t mStartOffset;
	int32_t mVariableFramesInPacket;
	int32_t mDataByteSize;
};

