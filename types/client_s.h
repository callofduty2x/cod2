#include <stdint.h>

struct client_s
{
	int32_t state;
	int32_t sendAsActive;
	int32_t dropReason;
	char userinfo[1024];
	char reliableCommandInfo[132096];
	int32_t reliableSequence;
	int32_t reliableAcknowledge;
	int32_t reliableSent;
	int32_t messageAcknowledge;
	int32_t gamestateMessageNum;
	int32_t challenge;
	usercmd_t lastUsercmd;
	int32_t lastClientCommand;
	char lastClientCommandString[1024];
	int32_t gentity;
	char name[32];
	char downloadName[64];
	int32_t download;
	int32_t downloadSize;
	int32_t downloadCount;
	int32_t downloadClientBlock;
	int32_t downloadCurrentBlock;
	int32_t downloadXmitBlock;
	char downloadBlocks[32];
	char downloadBlockSize[32];
	int32_t downloadEOF;
	int32_t downloadSendTime;
	int32_t deltaMessage;
	int32_t nextReliableTime;
	int32_t lastPacketTime;
	int32_t lastConnectTime;
	int32_t nextSnapshotTime;
	int32_t rateDelayed;
	int32_t timeoutCount;
	char frames[317568];
	int32_t ping;
	int32_t rate;
	int32_t snapshotMsec;
	int32_t pureAuthentic;
	netchan_t netchan;
	int32_t guid;
	int16_t scriptId;
	char pad0[2];
	int32_t bIsTestClient;
	int32_t serverId;
	char voicePackets[10440];
	int32_t voicePacketCount;
	char muteList[64];
	int8_t sendVoice;
};
