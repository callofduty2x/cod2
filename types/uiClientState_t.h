#include <stdint.h>

struct uiClientState_t
{
	connstate_t connState;
	int32_t connectPacketCount;
	int32_t clientNum;
	char servername[1024];
	char messageString[1024];
};

