#include <stdint.h>

struct _D3DLIGHT9
{
	D3DLIGHTTYPE Type;
	char Diffuse[16];
	char Specular[16];
	char Ambient[16];
	D3DVECTOR Position;
	char Direction[12];
	int32_t Range;
	int32_t Falloff;
	int32_t Attenuation0;
	int32_t Attenuation1;
	int32_t Attenuation2;
	int32_t Theta;
	int32_t Phi;
};

