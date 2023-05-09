#include <stdint.h>

struct GfxImageFileHeader
{
	char tag[3];
	int8_t version;
	int8_t format;
	int8_t flags;
	char dimensions[6];
	char fileSizeForPicmip[16];
};

