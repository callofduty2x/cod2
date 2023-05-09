#include <stdint.h>

struct _D3DPRESENT_PARAMETERS_
{
	int32_t BackBufferWidth;
	int32_t BackBufferHeight;
	int32_t BackBufferFormat;
	int32_t BackBufferCount;
	int32_t MultiSampleType;
	int32_t MultiSampleQuality;
	D3DSWAPEFFECT SwapEffect;
	int32_t hDeviceWindow;
	int32_t Windowed;
	int32_t EnableAutoDepthStencil;
	int32_t AutoDepthStencilFormat;
	int32_t Flags;
	int32_t FullScreen_RefreshRateInHz;
	int32_t PresentationInterval;
};

