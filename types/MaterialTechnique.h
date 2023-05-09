#include <stdint.h>

struct MaterialTechnique
{
	int32_t name;
	int16_t flags;
	int16_t passCount;
	MaterialPassArray passArray;
};

