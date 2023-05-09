#include <stdint.h>

struct _3767
{
	int32_t initialized;
	int32_t time;
	int32_t snapFlagServerBit;
	int32_t clients;
	int32_t numSnapshotEntities;
	int32_t numSnapshotClients;
	int32_t nextSnapshotEntities;
	int32_t nextSnapshotClients;
	int32_t snapshotEntities;
	int32_t snapshotClients;
	int32_t archiveEnabled;
	int32_t nextArchivedSnapshotFrames;
	int32_t archivedSnapshotFrames;
	int32_t archivedSnapshotBuffer;
	int32_t nextArchivedSnapshotBuffer;
	int32_t nextCachedSnapshotEntities;
	int32_t nextCachedSnapshotClients;
	int32_t nextCachedSnapshotFrames;
	int32_t cachedSnapshotEntities;
	int32_t cachedSnapshotClients;
	int32_t cachedSnapshotFrames;
	int32_t nextHeartbeatTime;
	int32_t nextStatusResponseTime;
	char challenges[40960];
	char redirectAddress[12];
	char authorizeAddress[12];
	int32_t pOOBProf;
	char tempBans[128];
};

