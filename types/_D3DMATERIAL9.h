#include <stdint.h>

struct _D3DMATERIAL9
{
	D3DCOLORVALUE Diffuse;
	char Ambient[16];
	char Specular[16];
	char Emissive[16];
	int32_t Power;
};

