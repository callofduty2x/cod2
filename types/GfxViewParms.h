#include <stdint.h>

struct GfxViewParms
{
	char origin[12];
	char axis[36];
	char viewport[24];
	char viewMatrix[64];
	char projectionMatrix[64];
	char viewProjectionMatrix[64];
	char inverseViewProjectionMatrix[64];
	int32_t depthHackNearClip;
};

