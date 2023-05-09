#include <stdint.h>

struct ProgrammableShaderType
{
	int8_t mUsed;
	char pad0[3];
	int32_t mStream;
	int32_t mStreamOffset;
	int32_t mVSize;
	int32_t mVType;
	int8_t mNormalized;
	char pad1[3];
	int32_t mStride;
};

