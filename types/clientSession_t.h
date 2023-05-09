#include <stdint.h>

struct clientSession_t
{
	sessionState_t sessionState;
	int32_t forceSpectatorClient;
	int32_t status_icon;
	int32_t archiveTime;
	int32_t score;
	int32_t deaths;
	int16_t scriptPersId;
	char pad0[2];
	clientConnected_t connected;
	usercmd_t cmd;
	char oldcmd[28];
	int32_t localClient;
	int32_t predictItemPickup;
	char newnetname[32];
	int32_t maxHealth;
	int32_t enterTime;
	playerTeamState_t teamState;
	int32_t voteCount;
	int32_t teamVoteCount;
	int32_t viewmodelIndex;
	int32_t noSpectate;
	int32_t teamInfo;
	clientState_t cs;
	int32_t psOffsetTime;
};

