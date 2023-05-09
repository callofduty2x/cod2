#include <stdint.h>

struct KeyStruct
{
	char ignore0[64];
	CFUUIDBytes uuid1;
	int32_t ignore1;
	char creatorName[64];
	int32_t ignore2;
	char creatorMachine[64];
	char ignore3[32];
	int64_t dateCreated;
	int32_t ignore4;
	char gameName[64];
	char ignore5[16];
	int32_t gameCreator;
	int32_t ignore6;
	char playerName[64];
	char ignore7[64];
	char uuid2[16];
	char ignore8[16];
	int32_t checkSum;
	char ignore9[512];
};

