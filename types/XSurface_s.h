#include <stdint.h>

struct XSurface_s
{
	int8_t tileMode;
	char pad0[1];
	int16_t vertCount;
	int16_t triCount;
	int16_t boneOffset;
	int32_t triIndices;
	int32_t verts;
	XRigidSurface surfRigid;
	int32_t indexBuffer;
};

