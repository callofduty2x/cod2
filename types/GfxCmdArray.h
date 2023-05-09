#include <stdint.h>

struct GfxCmdArray
{
	char cmds[196608];
	int32_t usedTotal;
	int32_t usedCritical;
	int32_t lastCmd;
};

