#include <stdint.h>

struct VariableValueInternal
{
	Variable hash;
	char pad0[10];
	int16_t nextSibling;
};

