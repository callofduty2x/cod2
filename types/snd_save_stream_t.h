#include <stdint.h>

struct snd_save_stream_t
{
	int32_t fraction;
	int32_t rate;
	int32_t basevolume;
	int32_t volume;
	int32_t pan;
	char org[12];
};

