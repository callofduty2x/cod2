void __cdecl MemFile_WriteShort(struct MemoryFile *,short)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_WriteInt(struct MemoryFile *,int)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_WriteFloat(struct MemoryFile *,float)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_WriteVec3(struct MemoryFile *,float const * const)
{	UNIMPLEMENTED();
}

short __cdecl MemFile_ReadShort(struct MemoryFile *)
{	UNIMPLEMENTED();
}

int __cdecl MemFile_ReadInt(struct MemoryFile *)
{	UNIMPLEMENTED();
}

float __cdecl MemFile_ReadFloat(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_ReadVec3(struct MemoryFile *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl SND_ErrorCleanup()
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

float __cdecl SND_GetLerpedSlavePercentage(float baseSlavePercentage)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreListeners(struct snd_listener *)
{	UNIMPLEMENTED();
}

void __cdecl SND_SaveListeners(struct snd_listener * listeners)
{	UNIMPLEMENTED();
}

bool __cdecl SND_AnyActiveListeners(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_DeactivateChannelVolumes(int priority, int fademsec)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetChannelVolumes(int priority, float const * const channelvolume, int fademsec)
{	UNIMPLEMENTED();
}

float __cdecl SND_Attenuate(struct SndCurve * volumeFalloffCurve, float radius, float mindist, float maxdist)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetListenerIndexNearestToOrigin(float const * const origin)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetLocalListenerIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetListener(int entnum, float const * const origin, float const  axis)[3])
{	UNIMPLEMENTED();
}

void __cdecl SND_DisconnectListener()
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateReverbs()
{	UNIMPLEMENTED();
}

void __cdecl SND_DeactivateEnvironmentEffects(int priority, int fademsec)
{	UNIMPLEMENTED();
}

bool __cdecl SND_UpdateBackgroundVolume(int track, int frametime)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateLoopingSounds()
{	UNIMPLEMENTED();
}

int __cdecl SND_FindFree3DChannel(int entnum, int entchannel)
{	UNIMPLEMENTED();
}

int __cdecl SND_FindFree2DChannel(int entnum, int entchannel)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopSounds(enum snd_stopsounds_arg_t which)
{	UNIMPLEMENTED();
}

void __cdecl SND_FadeAllSounds(float volume, int fadetime)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopMusic(int fadetime)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreEventually(void const *,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_ShutdownChannels()
{	UNIMPLEMENTED();
}

void __cdecl SND_SetChannelInfo(int index, int entnum, struct snd_alias_t const * pAlias0, struct snd_alias_t const * pAlias1, float lerp, float const * const origin, float volume, float pitch, int srcChannelCount, int baserate, int total_msec, int start_msec, int startDelay, bool master, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

void __cdecl SND_GetCurrent3DPosition(int entnum, float const * const offset, float * const pos_out)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay(enum snd_overlay_type_t type, struct snd_overlay_info_t * const info, int maxcount, int * cpu)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayLocalSoundAliasByName(char const * aliasname, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayLocalSoundAlias(struct snd_alias_list_t * aliasList, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlaySoundAliasAsMaster(struct snd_alias_t const * pAlias, int entnum, float const * const org, int timeshift, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlaySoundAlias(struct snd_alias_t const * pAlias, int entnum, float const * const org, int timeshift, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

void * __cdecl DB_LoadSounds(void *)
{	UNIMPLEMENTED();
}

void __cdecl SND_PlayAmbientAlias(struct snd_alias_t const * pAlias, int fadetime, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

void __cdecl SND_PlayMusicAlias(struct snd_alias_t const * pAlias, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayBlendedSoundAliases(struct snd_alias_t const *, struct snd_alias_t const *, float, int, float const * const, int, enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_Save(struct MemoryFile * memFile)
{	UNIMPLEMENTED();
}

void __cdecl SND_Restore(struct MemoryFile * memFile)
{	UNIMPLEMENTED();
}

void __cdecl SND_Shutdown()
{	UNIMPLEMENTED();
}

void * __cdecl DB_SaveSounds(void *)
{	UNIMPLEMENTED();
}

bool __cdecl SND_ValidateEnvEffectsPriorityValue(char const *,int *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update()
{	UNIMPLEMENTED();
}

void __cdecl SND_SetEnvironmentEffects(int priority, char const * roomstring, float drylevel, float wetlevel, int fademsec)
{	UNIMPLEMENTED();
}

void __cdecl SND_DeactivateEnvironmentEffects_f()
{	UNIMPLEMENTED();
}

void __cdecl SND_SetEnvironmentEffects_f()
{	UNIMPLEMENTED();
}

void __cdecl SND_Init()
{	UNIMPLEMENTED();
}

struct dvar_s const * const snd_enable3D;
struct dvar_s const * const snd_enable2D;
struct dvar_s const * const snd_khz;
struct dvar_s const * const snd_volume;
int marker_snd;
struct dvar_s const * const snd_errorOnMissing;
struct dvar_s const * const snd_stereo;
struct dvar_s const * const snd_enableReverb;
struct dvar_s const * const snd_bits;
struct dvar_s const * const snd_slaveFadeTime;
struct dvar_s const * const snd_enableStream;
struct snd_local_t g_snd;
void __cdecl SND_UpdateRoomEffects(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_IsStreamChannelPlaying(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is3DChannelPlaying(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is2DChannelPlaying(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateVolume(struct snd_volume_info_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_ChoosePitchAndVolume(struct snd_alias_t const *,struct snd_alias_t const *,float,float *,float *)
{	UNIMPLEMENTED();
}

int __cdecl SND_FindFreeStreamChannel(int,int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_IsChannelReplacable(int,int,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_CompareReplacableChannels(int,int,int,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_FindReplacableChannel(int,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateSlaveLerp(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay2D(struct snd_overlay_info_t * const,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateTimeScale(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopBackground(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_PauseSounds(void)
{	UNIMPLEMENTED();
}

bool __cdecl SND_ContinueLoopingSound(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,int *)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopEntityChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateMasterVolumes(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UnpauseSounds(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdatePause(void)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlayStream(struct snd_overlay_info_t * const,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay3D(struct snd_overlay_info_t * const,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAliasStream(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,float,float,int,float,bool,int *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAliasSample(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,float,float,int,bool,int *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlaySoundAlias_Internal(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,int *,int,bool,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_StartBackground(int,struct snd_alias_t const *,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

bool __cdecl SND_ValidateSoundAliasBlend(struct snd_alias_t const *,struct snd_alias_t const *,bool)
{	UNIMPLEMENTED();
}

struct snd_alias_t * __cdecl SND_RestoreSoundAlias(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_SaveSoundAlias(struct snd_alias_t const *,struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_SaveChanInfo(struct snd_channel_info_t const *,struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_SaveStreamChannel(int,struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Save2DChannel(int,struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Save3DChannel(int,struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreChanInfo(struct snd_channel_info_t *,struct MemoryFile *)
{	UNIMPLEMENTED();
}

bool __cdecl SND_RestoreStreamChannel(int,struct MemoryFile *)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Restore2DChannel(struct MemoryFile *)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Restore3DChannel(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateAllChannels(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_RoomtypeFromString(char const *)
{	UNIMPLEMENTED();
}

