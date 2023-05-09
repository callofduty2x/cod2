#include <stdint.h>

struct serverStatus_s
{
	char pingList[1088];
	int32_t numqueriedservers;
	int32_t currentping;
	int32_t nextpingtime;
	int32_t maxservers;
	int32_t refreshtime;
	int32_t numServers;
	int32_t sortKey;
	int32_t sortDir;
	int32_t lastCount;
	int32_t refreshActive;
	int32_t currentServer;
	char displayServers[80000];
	int32_t numDisplayServers;
	int32_t serverCount;
	int32_t numPlayersOnServers;
	int32_t nextDisplayRefresh;
	int32_t nextSortTime;
	int32_t currentServerPreview;
	int32_t currentServerCinematic;
	int32_t motdLen;
	int32_t motdWidth;
	int32_t motdPaintX;
	int32_t motdPaintX2;
	int32_t motdOffset;
	int32_t motdTime;
	char motd[1024];
};

