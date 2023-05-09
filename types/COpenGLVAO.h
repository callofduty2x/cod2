#include <stdint.h>

struct COpenGLVAO
{
	int32_t COpenGLVAO;
	char pad0[4];
	int32_t mpVAStart;
	int32_t mSize;
	CColorArray mColorArray;
	CSecondaryColorArray mSecondaryColorArray;
	CNormalArray mNormalArray;
	CVertexArray mVertexArray;
	char mTexCoordArrays[192];
	char mGenericArrays[384];
};

