#include <stdint.h>

struct OpaqueContextRef
{
	int32_t mContext;
	int32_t mDrawable;
	int32_t mRendererID;
	int8_t mDoubleBuffered;
};

