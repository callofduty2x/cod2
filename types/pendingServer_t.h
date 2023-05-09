#include <stdint.h>

struct pendingServer_t
{
	char adrstr[64];
	char name[64];
	int32_t startTime;
	int32_t serverNum;
	int32_t valid;
};

