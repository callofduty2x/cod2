#include <stdint.h>

struct MaterialPassDx7
{
	int32_t stateMap;
	int8_t gridLighting;
	int8_t projectToInfinity;
	int8_t ambientLighting;
	int8_t objectiveGlow;
	int8_t fogToBlack;
	int16_t genTexCoords;
	char pad0[1];
	char samplers[16];
	char colorStageBits[32];
	char alphaStageBits[32];
};

