#include <stdint.h>

struct GfxCodeMatrices
{
	int32_t worldScale;
	char pad0[12];
	GfxCodeMatrix world;
	char normalizedWorld[272];
	char view[272];
	char projection[272];
	char worldView[272];
	char normalizedWorldView[272];
	char viewProjection[272];
	char worldViewProjection[272];
	char normalizedWorldViewProjection[272];
	char shadowLookupMatrix[272];
	char lightGridLookupMatrix[272];
	char worldOutdoorLookup[272];
	char OGLworldViewProjection[272];
};

