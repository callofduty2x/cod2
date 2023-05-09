#include <stdint.h>

struct huff_t
{
	int32_t blocNode;
	int32_t blocPtrs;
	int32_t tree;
	int32_t lhead;
	int32_t ltail;
	char loc[1028];
	int32_t freelist;
	char nodeList[24576];
	char nodePtrs[3072];
};

