#include <stdint.h>

struct cStaticModel_s
{
	cStaticModelWritable writable;
	char pad0[2];
	int32_t xmodel;
	char origin[12];
	char invAxis[36];
	char absmin[12];
	char absmax[12];
};

