#include <stdint.h>

struct cLeafBrushNode_s
{
	int8_t axis;
	char pad0[1];
	int16_t leafBrushCount;
	int32_t contents;
	cLeafBrushNodeData_t data;
};

