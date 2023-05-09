#include <stdint.h>

typedef enum
{
	SND_STOP_ALL = 0,
	SND_KEEP_REVERB = 1,
	SND_KEEP_MUSIC = 2,
	SND_KEEP_AMBIENT = 4,
	SND_KEEP_MUSIC_AND_AMBIENT = 6,
	SND_STOP_STREAMED = 8,
	SND_KEEP_CHANNEL_VOLUMES = 16
} snd_stopsounds_arg_t;

