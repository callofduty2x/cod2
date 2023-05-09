#include <stdint.h>

struct SoundFile
{
	int32_t soundName;
	int32_t fileMem;
	int8_t isStreamFound;
	char pad0[3];
	snd_alias_type_t type;
};

