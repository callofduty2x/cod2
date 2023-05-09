#include <stdint.h>

struct _3661
{
	int32_t opcodeLookup;
	int32_t opcodeLookupMaxLen;
	int32_t opcodeLookupLen;
	int32_t sourcePosLookup;
	int32_t sourcePosLookupMaxLen;
	int32_t sourcePosLookupLen;
	int32_t sourceBufferLookupMaxLen;
	int32_t currentCodePos;
	int32_t currentSourcePosCount;
	int32_t saveSourceBufferLookup;
	int32_t saveSourceBufferLookupLen;
	int32_t delayedSourceIndex;
	int32_t threadStartSourceIndex;
};

