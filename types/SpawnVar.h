#include <stdint.h>

struct SpawnVar
{
	int8_t spawnVarsValid;
	char pad0[3];
	int32_t numSpawnVars;
	char spawnVars[512];
	int32_t numSpawnVarChars;
	char spawnVarChars[2048];
};

