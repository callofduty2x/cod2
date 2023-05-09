#include <stdint.h>

struct dheader_s
{
	int32_t ident;
	int32_t version;
	char lumps[312];
};

