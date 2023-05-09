#include <stdint.h>

struct _D3DXFONT_DESCW
{
	int32_t Height;
	int32_t Width;
	int32_t Weight;
	int32_t MipLevels;
	int32_t Italic;
	int8_t CharSet;
	int8_t OutputPrecision;
	int8_t Quality;
	int8_t PitchAndFamily;
	char FaceName[128];
};

