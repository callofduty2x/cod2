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

float __cdecl SND_GetLerpedSlavePercentage(float)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreListeners(struct snd_listener *)
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

float __cdecl SND_Attenuate(struct SndCurve *,float,float,float)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetListenerIndexNearestToOrigin(float const * const)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetLocalListenerIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetListener(int,float const * const,float const (* const)[3])
{	UNIMPLEMENTED();
}

void __cdecl SND_DisconnectListener(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateReverbs(void)
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

void __cdecl SND_StopSounds(enum snd_stopsounds_arg_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_FadeAllSounds(float,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopMusic(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_RestoreEventually(void const *,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_ShutdownChannels(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetChannelInfo(int,int,struct snd_alias_t const *,struct snd_alias_t const *,float,float const * const,float,float,int,int,int,int,int,bool,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_GetCurrent3DPosition(int,float const * const,float * const)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundOverlay(enum snd_overlay_type_t,struct snd_overlay_info_t * const,int,int *)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayLocalSoundAliasByName(char const *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayLocalSoundAlias(struct snd_alias_list_t *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlaySoundAliasAsMaster(struct snd_alias_t const *,int,float const * const,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlaySoundAlias(struct snd_alias_t const *,int,float const * const,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void * __cdecl DB_LoadSounds(void *)
{	UNIMPLEMENTED();
}

void __cdecl SND_PlayAmbientAlias(struct snd_alias_t const *,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_PlayMusicAlias(struct snd_alias_t const *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_PlayBlendedSoundAliases(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_Save(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Restore(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Shutdown(void)
{	UNIMPLEMENTED();
}

void * __cdecl DB_SaveSounds(void *)
{	UNIMPLEMENTED();
}

bool __cdecl SND_ValidateEnvEffectsPriorityValue(char const *,int *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetEnvironmentEffects(int,char const *,float,float,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_DeactivateEnvironmentEffects_f(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetEnvironmentEffects_f(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_Init(void)
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

