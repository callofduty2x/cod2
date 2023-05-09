#include <stdint.h>

struct clSnapshot_t
{
	int32_t valid;
	int32_t snapFlags;
	int32_t serverTime;
	int32_t messageNum;
	int32_t deltaNum;
	int32_t ping;
	int32_t cmdNum;
	playerState_t ps;
	int32_t numEntities;
	int32_t numClients;
	int32_t parseEntitiesNum;
	int32_t parseClientsNum;
	int32_t serverCommandNum;
};

