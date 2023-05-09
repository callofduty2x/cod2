#include <stdint.h>

struct _3791
{
	int32_t quit;
	int32_t hunkUsersStarted;
	char servername[256];
	int32_t rendererStarted;
	int32_t soundStarted;
	int32_t uiStarted;
	int32_t frametime;
	int32_t realtime;
	int32_t realFrametime;
	clientLogo_t logo;
	int32_t numlocalservers;
	char localServers[17408];
	int32_t waitglobalserverresponse;
	int32_t numglobalservers;
	char globalServers[2720000];
	int32_t numfavoriteservers;
	char favoriteServers[17408];
	int32_t pingUpdateSource;
	char authorizeServer[12];
	int32_t whiteMaterial;
	int32_t consoleMaterial;
	int32_t consoleFont;
	vidConfig_t vidConfig;
	clientDebug_t debug;
};

