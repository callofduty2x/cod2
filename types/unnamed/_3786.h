#include <stdint.h>

struct _3786
{
	int32_t state;
	int32_t qport;
	int32_t clientNum;
	int32_t lastPacketSentTime;
	int32_t lastPacketTime;
	char serverAddress[12];
	int32_t connectTime;
	int32_t connectPacketCount;
	char serverMessage[256];
	int32_t challenge;
	int32_t checksumFeed;
	int32_t reliableSequence;
	int32_t reliableAcknowledge;
	char reliableCommands[131072];
	int32_t serverMessageSequence;
	int32_t serverCommandSequence;
	int32_t lastExecutedServerCommand;
	char serverCommands[131072];
	int32_t download;
	char downloadTempName[256];
	char downloadName[256];
	int32_t downloadNumber;
	int32_t downloadBlock;
	int32_t downloadCount;
	int32_t downloadSize;
	char downloadList[1024];
	int32_t downloadRestart;
	char demoName[64];
	int32_t demorecording;
	int32_t demoplaying;
	int32_t isTimeDemo;
	int32_t demowaiting;
	int32_t firstDemoFrameSkipped;
	int32_t demofile;
	int32_t timeDemoLog;
	int32_t timeDemoFrames;
	int32_t timeDemoStart;
	int32_t timeDemoPrev;
	int32_t timeDemoBaseTime;
	netchan_t netchan;
	int32_t pOOBProf;
};

