#include <stdint.h>

struct netProfileStream_t
{
	char packets[720];
	int32_t iCurrPacket;
	int32_t iBytesPerSecond;
	int32_t iLastBPSCalcTime;
	int32_t iCountedPackets;
	int32_t iCountedFragments;
	int32_t iFragmentPercentage;
	int32_t iLargestPacket;
	int32_t iSmallestPacket;
};

