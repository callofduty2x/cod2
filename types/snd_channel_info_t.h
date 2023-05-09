#include <stdint.h>

struct snd_channel_info_t
{
	int32_t entnum;
	int32_t entchannel;
	int32_t startDelay;
	int32_t looptime;
	int32_t endtime;
	int32_t basevolume;
	int32_t baserate;
	int32_t pitch;
	int32_t srcChannelCount;
	int32_t pAlias0;
	int32_t pAlias1;
	int32_t lerp;
	char org[12];
	char offset[12];
	int8_t paused;
	int8_t master;
	char pad0[2];
	int32_t system;
};

