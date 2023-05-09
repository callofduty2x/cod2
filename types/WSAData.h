#include <stdint.h>

struct WSAData
{
	int16_t wVersion;
	int16_t wHighVersion;
	char szDescription[257];
	char szSystemStatus[129];
	int16_t iMaxSockets;
	int16_t iMaxUdpDg;
	char pad0[2];
	int32_t lpVendorInfo;
};

