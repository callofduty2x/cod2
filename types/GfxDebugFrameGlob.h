#include <stdint.h>

struct GfxDebugFrameGlob
{
	int32_t restoreCmdList;
	int32_t restoreFrontEndDataOut;
	int8_t restoreSkinnedCache;
	char pad0[3];
	char frontEndDataOut[2399596];
};

