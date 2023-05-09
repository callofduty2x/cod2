#include <stdint.h>

struct LightInfoType
{
	int8_t Enabled;
	char pad0[3];
	int32_t Type;
	int32_t Range;
	DXVector4 Diffuse;
	char Specular[16];
	char Ambient[16];
	char Direction[12];
	char Position[12];
	char DirectionCS[12];
	int32_t Exponent;
	int32_t Cutoff;
	int32_t Theta;
	int32_t Phi;
	int32_t Falloff;
	int32_t Attenuation0;
	int32_t Attenuation1;
	int32_t Attenuation2;
	char CSDirection[12];
	char CSPosition[12];
	int32_t Range2;
	char VdLd[12];
	int32_t CosHalfTheta;
	int32_t CosHalfPhi;
	int32_t C1;
};

