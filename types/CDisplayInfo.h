#include <stdint.h>

struct CDisplayInfo
{
	int32_t mDisplayID;
	char mBounds[16];
	CResList mResolutions;
	string mCardDescription;
	int32_t mCardVendorID;
	int32_t mCardDeviceID;
	int32_t mCardType;
	int32_t mGLVendor;
	int32_t mGLRenderer;
	int32_t mGLExtensions;
	int32_t mVideoMemory;
	int32_t mTextureMemory;
	int32_t mMaxTextureUnits;
	int32_t mMaxTextureImageUnits;
	int32_t mPCPixelShaderVersion;
	int8_t mIsValid;
	int8_t mSupportsSeparateBlendFunc;
	int8_t mSupportsAnisotropicFiltering;
	char pad0[1];
	int32_t mMaxSupportedAnisotropy;
	int32_t mMaxSampleBuffers;
	int32_t mMaxSamples;
	int8_t mDoesSuperSampling;
	int8_t mDoesMultiSampling;
	int8_t mDoesAlphaSampling;
};

