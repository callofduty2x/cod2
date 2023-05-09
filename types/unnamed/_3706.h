#include <stdint.h>

struct _3706
{
	CachedAssets_t assets;
	int32_t playerCount;
	char playerNames[2048];
	char teamNames[2048];
	char playerClientNums[256];
	int32_t numGameTypes;
	char gameTypes[256];
	int32_t numJoinGameTypes;
	char joinGameTypes[256];
	int32_t mapCount;
	char mapList[20992];
	char serverHardwareIconList[32];
	char modList[512];
	int32_t modCount;
	int32_t modIndex;
	char movieList[1024];
	int32_t movieCount;
	int32_t movieIndex;
	int32_t previewMovie;
	serverStatus_t serverStatus;
	char serverStatusAddress[64];
	char serverStatusInfo[3332];
	int32_t nextServerStatusRefresh;
	pendingServerStatus_t pendingServerStatus;
};

