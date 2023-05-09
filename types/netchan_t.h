#include <stdint.h>

struct netchan_t
{
	int32_t outgoingSequence;
	netsrc_t sock;
	int32_t dropped;
	int32_t incomingSequence;
	netadr_t remoteAddress;
	int32_t qport;
	int32_t fragmentSequence;
	int32_t fragmentLength;
	char fragmentBuffer[16384];
	int32_t unsentFragments;
	int32_t unsentFragmentStart;
	int32_t unsentLength;
	char unsentBuffer[16384];
	int32_t pProf;
};

