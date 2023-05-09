#include <stdint.h>

struct _DDSURFACEDESC2
{
	int32_t dwSize;
	int32_t dwFlags;
	int32_t dwHeight;
	int32_t dwWidth;
	char pad0[12];
	int32_t dwAlphaBitDepth;
	int32_t dwReserved;
	int32_t lpSurface;
	char pad1[8];
	DDCOLORKEY ddckCKDestBlt;
	int64_t ddckCKSrcOverlay;
	int64_t ddckCKSrcBlt;
	char pad2[32];
	DDSCAPS2 ddsCaps;
	int32_t dwTextureStage;
};

