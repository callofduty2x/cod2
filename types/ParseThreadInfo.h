#include <stdint.h>

struct ParseThreadInfo
{
	char parseInfo[17856];
	int32_t parseInfoNum;
	int32_t tokenPos;
	int32_t prevTokenPos;
	char line[1024];
};

