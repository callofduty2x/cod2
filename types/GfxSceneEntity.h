#include <stdint.h>

struct GfxSceneEntity
{
	int32_t refCount;
	GfxModel u;
	int32_t cent;
	int32_t cullState;
	int32_t surfCount;
	char curMins[12];
	char curMaxs[12];
	int32_t materials;
	int32_t surfs;
};

