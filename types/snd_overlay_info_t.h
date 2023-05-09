#include <stdint.h>

struct snd_overlay_info_t
{
	int32_t pszSampleName;
	float fBaseVolume;
	float fCurVolume;
	int32_t dist;
	float fPitch;
};

