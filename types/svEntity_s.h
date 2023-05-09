#include <stdint.h>

struct svEntity_s
{
	int16_t worldSector;
	int16_t nextEntityInWorldSector;
	archivedEntity_t baseline;
	int32_t numClusters;
	char clusternums[64];
	int32_t lastCluster;
	int32_t linkcontents;
	int64_t linkmin;
	int64_t linkmax;
};

