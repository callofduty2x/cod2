#include <stdint.h>

struct VertexProgramStreamState
{
	int8_t mNeedsValidation;
	int8_t mEnabled;
	char pad0[2];
	int32_t mVSize;
	int32_t mVType;
	int8_t mNormalized;
	char pad1[3];
	int32_t mStride;
	int32_t mpStream;
};

