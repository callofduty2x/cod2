#include <stdint.h>

struct snd_alias_build_s
{
	char szSourceFile[64];
	char szAliasName[64];
	char szSecondaryAliasName[64];
	int32_t subtitleText;
	int32_t iSequence;
	char szSoundFile[64];
	int32_t permSoundFile;
	float fVolMin;
	float fVolMax;
	float fVolMod;
	float fPitchMin;
	float fPitchMax;
	float fDistMin;
	float fDistMax;
	int32_t iChannel;
	snd_alias_type_t eType;
	int32_t volumeFalloffCurve;
	float fSlavePercentage;
	float fProbability;
	float fLfePercentage;
	int32_t startDelay;
	int8_t bLooping;
	int8_t bMaster;
	int8_t bSlave;
	int8_t bFullDryLevel;
	int8_t bNoWetLevel;
	int8_t error;
	int8_t keep;
	char pad0[1];
	int32_t pSameSoundFile;
	int32_t pNext;
};

