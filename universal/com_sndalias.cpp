void __cdecl Com_SetSoundAliasSeed(int)
{	UNIMPLEMENTED();
}

int __cdecl Com_GetSoundAliasSeed(void)
{	UNIMPLEMENTED();
}

void * __cdecl Com_GetSoundFileMem(struct snd_alias_t const *)
{	UNIMPLEMENTED();
}

char const * __cdecl Com_GetSoundFileName(struct snd_alias_t const * pAlias)
{	UNIMPLEMENTED();
}

struct XAUDIOCHANNELMAP * __cdecl Com_GetSpeakerMap(struct SpeakerMap *,int)
{	UNIMPLEMENTED();
}

int __cdecl Com_GetVolumeFalloffCurve(struct SndCurve *,float const (* *)[2])
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl Com_PickSoundAliasFromList(struct snd_alias_list_t * aliasList)
{	UNIMPLEMENTED();
}

float __cdecl Com_GetVolumeFalloffCurveValue(struct SndCurve * volumeFalloffCurve, float fraction)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetAliasOffset(struct snd_alias_t const * alias)
{	UNIMPLEMENTED();
}

struct snd_alias_list_t * __cdecl Com_FindSoundAlias(char const * name)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl Com_PickSoundAlias(char const * aliasname)
{	UNIMPLEMENTED();
}

char const * __cdecl Com_SoundAliasString(char const *)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl SV_PickSoundAlias(char const *)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl SND_GetAliasWithOffset(char const * name, int offset)
{	UNIMPLEMENTED();
}

struct <unnamed-tag> g_sa;
int marker_com_sndalias;
int __cdecl Com_SoundAliasRand(void)
{	UNIMPLEMENTED();
}

Com_LoadSoundAliases(char const* loadspec,  char const* loadspecCurGame,  snd_alias_system_t system)
{	UNIMPLEMENTED();
}

Com_RegisterSoundAliasVolumeFalloffCurve(char const* filename,  char const* sourceFile)
{	UNIMPLEMENTED();
}

Com_GetDefaultSoundAliasVolumeFalloffCurve()
{	UNIMPLEMENTED();
}

Com_AllocateTempSoundMemory(int size,  char const* name)
{	UNIMPLEMENTED();
}

Com_AllocSoundMemory(int size,  char const* name,  int type)
{	UNIMPLEMENTED();
}

Com_UnloadSoundAliasSounds(snd_alias_system_t system)
{	UNIMPLEMENTED();
}

Com_UnloadSoundAliases(snd_alias_system_t system)
{	UNIMPLEMENTED();
}

Com_AddAliasList(char const* name,  snd_alias_list_t* aliasList)
{	UNIMPLEMENTED();
}

Com_DuplicateSoundAlias(snd_alias_list_t* aliasCopy,  char const* name)
{	UNIMPLEMENTED();
}

