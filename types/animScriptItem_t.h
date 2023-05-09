#include <stdint.h>

struct animScriptItem_t
{
	int32_t numConditions;
	char conditions[108];
	int32_t numCommands;
	char commands[128];
};

