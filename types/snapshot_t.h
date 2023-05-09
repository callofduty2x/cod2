#include <stdint.h>

struct snapshot_t
{
	int32_t snapFlags;
	int32_t ping;
	int32_t serverTime;
	char ps[9896];
	int32_t numEntities;
	int32_t numClients;
	char entities[61440];
	char clients[5888];
	int32_t serverCommandSequence;
};

