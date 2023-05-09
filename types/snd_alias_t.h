#include <stdint.h>

struct snd_alias_t
{
	int32_t pszAliasName;
	int32_t pszSubtitle;
	int32_t pszSecondaryAliasName;
	int32_t soundFile;
	int32_t iSequence;
	float fVolMin;
	float fVolMax;
	float fPitchMin;
	float fPitchMax;
	float fDistMin;
	float fDistMax;
	int32_t flags;
	float fSlavePercentage;
	float fProbability;
	float fLfePercentage;
	int32_t startDelay;
	int32_t volumeFalloffCurve;
};

