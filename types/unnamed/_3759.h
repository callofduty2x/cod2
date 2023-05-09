#include <stdint.h>

struct _3759
{
	serverState_t state;
	int32_t restarting;
	int32_t start_frameTime;
	int32_t checksumFeed;
	int32_t timeResidual;
	int32_t nextFrameTime;
	char models[1024];
	char configstrings[8192];
	char svEntities[380928];
	int32_t entityParsePoint;
	int32_t gentities;
	int32_t gentitySize;
	int32_t num_entities;
	int32_t gameClients;
	int32_t gameClientSize;
	int32_t skelTimeStamp;
	int32_t skelMemPos;
	char bpsWindow[80];
	int32_t bpsWindowSteps;
	int32_t bpsTotalBytes;
	int32_t bpsMaxBytes;
	char ubpsWindow[80];
	int32_t ubpsTotalBytes;
	int32_t ubpsMaxBytes;
	int32_t ucompAve;
	int32_t ucompNum;
	char gametype[64];
};

