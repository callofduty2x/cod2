#include <stdint.h>

struct GfxDrawGroupCommands
{
	int8_t isIssuingGlue;
	char pad0[3];
	int32_t begin;
	char perView[16];
	int32_t end;
};

