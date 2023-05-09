#include <stdint.h>

struct water_t
{
	WaterWritable writable;
	int32_t H0;
	int32_t wTerm;
	int32_t M;
	int32_t N;
	int32_t Lx;
	int32_t Lz;
	int32_t gravity;
	int32_t windvel;
	int64_t winddir;
	int32_t amplitude;
	char codeConstant[16];
	int32_t image;
};

