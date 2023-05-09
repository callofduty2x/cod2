#include <stdint.h>

struct _3785
{
	int8_t active;
	char pad0[3];
	int32_t keyCatchers;
	int8_t displayHUDWithKeycatchUI;
	int8_t cgameInitialized;
	int8_t cgameInitCalled;
	int8_t usingAds;
	int32_t frameActiveClientCount;
	int32_t frameClientIndex;
	int32_t timeoutcount;
	clSnapshot_t snap;
	int32_t serverTime;
	int32_t oldServerTime;
	int32_t oldFrameServerTime;
	int32_t serverTimeDelta;
	int32_t oldSnapServerTime;
	int32_t extrapolatedSnapshot;
	int32_t newSnapshots;
	gameState_t gameState;
	char mapname[64];
	int32_t parseEntitiesNum;
	int32_t parseClientsNum;
	int64_t mouseDx;
	int64_t mouseDy;
	int32_t mouseIndex;
	int8_t stanceHeld;
	char pad1[3];
	int32_t stancePosition;
	int32_t stanceTime;
	int32_t cgameUserCmdValue;
	int32_t cgameUserHoldableValue;
	int32_t cgameInShellshock;
	int32_t cgameSensitivity;
	int32_t cgameMaxPitchSpeed;
	int32_t cgameMaxYawSpeed;
	char cgameKickAngles[12];
	char viewangles[12];
	int32_t serverId;
	char color_allies[16];
	char color_axis[16];
	int32_t skelTimeStamp;
	int32_t skelMemPos;
	char skelMemory[262144];
	int32_t skelMemoryStart;
	int8_t allowedAllocSkel;
	char pad2[3];
	char cmds[3584];
	int32_t cmdNumber;
	char outPackets[384];
	char snapshots[318208];
	char entityBaselines[245760];
	char parseEntities[491520];
	char parseClients[188416];
	int32_t corruptedTranslationFile;
	char translationVersion[256];
	char voicePackets[2600];
	int32_t voicePacketCount;
	int32_t voicePacketLastTransmit;
};
