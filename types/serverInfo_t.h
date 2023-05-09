#include <stdint.h>

struct serverInfo_t
{
	netadr_t adr;
	int8_t netType;
	int8_t clients;
	int8_t maxClients;
	int8_t dirty;
	int8_t allowAnonymous;
	int8_t bPassword;
	int8_t pure;
	int8_t friendlyfire;
	int8_t killcam;
	int8_t consoleDisabled;
	int8_t hardware;
	int8_t mod;
	int8_t voice;
	int8_t requestCount;
	int16_t minPing;
	int16_t maxPing;
	int16_t ping;
	char hostName[32];
	char mapName[32];
	char game[24];
	char gameType[16];
};

