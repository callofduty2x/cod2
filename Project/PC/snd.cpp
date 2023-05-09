int __cdecl MemFile_ReadInt(struct MemoryFile *)
{	UNIMPLEMENTED();
}

float __cdecl MemFile_ReadFloat(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_ReadVec3(struct MemoryFile *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl SND_ErrorCleanup(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_ResetPauseSettingsToDefaults(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetPauseSettings(bool const * const)
{	UNIMPLEMENTED();
}

bool __cdecl SND_IsAliasChannel3D(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_SaveListeners(struct snd_listener *)
{	UNIMPLEMENTED();
}

bool __cdecl SND_AnyActiveListeners(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_DeactivateChannelVolumes(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetChannelVolumes(int,float const * const,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_DisconnectListener(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_DeactivateEnvironmentEffects(int,int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_UpdateBackgroundVolume(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateLoopingSounds(void)
{	UNIMPLEMENTED();
}

int __cdecl SND_FindFree3DChannel(int,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_FindFree2DChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreEventually(void const *,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay(enum snd_overlay_type_t,struct snd_overlay_info_t * const,int,int *)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayLocalSoundAliasByName(char const *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_PlayAmbientAlias(struct snd_alias_t const *,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayBlendedSoundAliases(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_Save(struct MemoryFile *)
{	UNIMPLEMENTED();
}

struct snd_local_t g_snd;
bool __cdecl SND_Is3DChannelPlaying(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is2DChannelPlaying(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_ChoosePitchAndVolume(struct snd_alias_t const *,struct snd_alias_t const *,float,float *,float *)
{	UNIMPLEMENTED();
}

int __cdecl SND_FindFreeStreamChannel(int,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay2D(struct snd_overlay_info_t * const,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopBackground(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopEntityChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateMasterVolumes(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay3D(struct snd_overlay_info_t * const,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAliasStream(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,float,float,int,float,bool,int *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl SND_RestoreSoundAlias(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_SaveChanInfo(struct snd_channel_info_t const *,struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreChanInfo(struct snd_channel_info_t *,struct MemoryFile *)
{	UNIMPLEMENTED();
}

