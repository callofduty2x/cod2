#include <stdint.h>

union cLeafBrushNodeData_t
{
	cLeafBrushNodeLeaf_t leaf;
	cLeafBrushNodeChildren_t children;
};

