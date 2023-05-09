#include <stdint.h>

struct _3623
{
	int8_t Initialized2d;
	int8_t Initialized3d;
	int8_t paused;
	char pad0[1];
	int32_t playback_rate;
	int32_t playback_bits;
	int32_t playback_channels;
	int32_t timescale;
	int32_t pausetime;
	int32_t cpu;
	char pad1[8];
	int32_t volume;
	char mastervol[12];
	char channelVolGroups[544];
	int32_t channelvol;
	char background[24];
	int32_t ambient_track;
	int32_t slaveLerp;
	char envEffects[96];
	int32_t effect;
	char defaultPauseSettings[11];
	char pauseSettings[11];
	char pad2[2];
	char listeners[56];
	int32_t time;
	int32_t looptime;
	char chaninfo[4240];
	int32_t max_2D_channels;
	int32_t max_3D_channels;
	int32_t max_stream_channels;
};

