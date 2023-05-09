#include <stdint.h>

struct CTexUnit
{
	int8_t mIsProgramableOnly;
	char mTargetEnabled[3];
	char mTexID[12];
	char mTexWrapS[12];
	char mTexWrapT[12];
	char mTexWrapR[12];
	char mTexBorderColor[12];
	char mTexMinFilter[12];
	char mTexMagFilter[12];
	char mTexAnisotropicFilter[12];
	char mTexLastLevel[12];
	int32_t mCombinerColorOp;
	int32_t mCombinerColorSource0;
	int32_t mCombinerColorOperand0;
	int32_t mCombinerColorSource1;
	int32_t mCombinerColorOperand1;
	int32_t mCombinerColorSource2;
	int32_t mCombinerColorOperand2;
	int32_t mCombinerAlphaOp;
	int32_t mCombinerAlphaSource0;
	int32_t mCombinerAlphaOperand0;
	int32_t mCombinerAlphaSource1;
	int32_t mCombinerAlphaOperand1;
	int32_t mCombinerAlphaSource2;
	int32_t mCombinerAlphaOperand2;
	int32_t mCombinerRGBScale;
	int32_t mCombinerAlphaScale;
	char mTexFactor[16];
	int32_t mLodBias;
	char mTexMatrix[64];
	char mTexCoordArray[24];
	int32_t mTexGenEnable;
	char mTexGenMode[16];
};

