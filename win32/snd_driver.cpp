float __cdecl XAudioSampleRateToPitch(unsigned long,unsigned long)
{	UNIMPLEMENTED();
}

public: unsigned long __cdecl IXAudioVoice::Release(void)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioVoice::SetEffectParam(unsigned char,unsigned char,unsigned char,union XAUDIOFXPARAM const *)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioVoice::SetVoiceOutputVolume(struct XAUDIOVOICEOUTPUTVOLUME const *)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioVoice::GetVoiceState(unsigned char *)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::SubmitPacket(struct XAUDIOPACKET const *,unsigned char)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::Start(unsigned char)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::Stop(unsigned char)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::Discontinuity(void)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::SetPacketPosition(union XAUDIOPACKETPOSITION const *)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::GetStreamPosition(unsigned long *)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::GetVolume(float *)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::SetVolume(float)
{	UNIMPLEMENTED();
}

public: long __cdecl IXAudioSourceVoice::SetPitch(float)
{	UNIMPLEMENTED();
}

int __cdecl SND_RawSamplesTime()
{	UNIMPLEMENTED();
}

void __cdecl SND_EndRawSamples()
{	UNIMPLEMENTED();
}

void __cdecl SND_RawSamples(int samples, int rate, int width, int s_channels, unsigned char const * data)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetDriverCPUPercentage()
{	UNIMPLEMENTED();
}

void __cdecl SND_DriverPreUpdate(int frametime)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundFileSize(void const * pSoundFile)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetStreamChannelLength(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update3DChannelReverb(int index)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetStreamChannelPlaybackRate(int index)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get3DChannelPlaybackRate(int index)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get2DChannelPlaybackRate(int index)
{	UNIMPLEMENTED();
}

bool __cdecl SND_IsStreamChannelFree(int index)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is3DChannelFree(int index)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is2DChannelFree(int index)
{	UNIMPLEMENTED();
}

void __cdecl XA_PacketCacheInit(void)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get3DChannelLength(int index)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get2DChannelLength(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set3DPosition(int index, float const * const org)
{	UNIMPLEMENTED();
}

void __cdecl SND_GetStreamChannelSaveInfo(int index, struct snd_save_stream_t * info)
{	UNIMPLEMENTED();
}

void __cdecl SND_Get3DChannelSaveInfo(int index, struct snd_save_3D_sample_t * info)
{	UNIMPLEMENTED();
}

void __cdecl SND_Get2DChannelSaveInfo(int index, struct snd_save_2D_sample_t * info)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateStreamChannelReverb(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update2DChannelReverb(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetStreamChannelPlaybackRate(int index, int rate)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set3DChannelPlaybackRate(int index, int rate)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set2DChannelPlaybackRate(int index, int rate)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetStreamChannelVolume(int,float)
{	UNIMPLEMENTED();
}

float __cdecl SND_GetStreamChannelVolume(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set3DChannelVolume(int,float)
{	UNIMPLEMENTED();
}

float __cdecl SND_Get3DChannelVolume(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set2DChannelVolume(int,float)
{	UNIMPLEMENTED();
}

float __cdecl SND_Get2DChannelVolume(int index)
{	UNIMPLEMENTED();
}

struct IXAudioSourceVoice * __cdecl XA_GetNewSourceVoice(int,struct XAUDIOSOURCEFORMAT *)
{	UNIMPLEMENTED();
}

void __cdecl SND_PauseStreamChannel(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopStreamChannel(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Pause3DChannel(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Stop3DChannel(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Pause2DChannel(int index)
{	UNIMPLEMENTED();
}

void __cdecl SND_Stop2DChannel(int index)
{	UNIMPLEMENTED();
}

void __cdecl XA_ShutdownChannels(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetRoomtype(int roomtype)
{	UNIMPLEMENTED();
}

void __cdecl SND_DriverPostUpdate(int frametime)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetStreamChannelFromSaveInfo(int index, struct snd_save_stream_t * info)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set2DChannelFromSaveInfo(int index, struct snd_save_2D_sample_t * info)
{	UNIMPLEMENTED();
}

void __cdecl SND_UnpauseStreamChannel(int index, int timeshift)
{	UNIMPLEMENTED();
}

void __cdecl SND_Unpause3DChannel(int index, int timeshift)
{	UNIMPLEMENTED();
}

void __cdecl SND_Unpause2DChannel(int index, int timeshift)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateStreamChannel(int i, int frametime)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAliasStreamOnChannel(struct snd_alias_t const * pAlias0, struct snd_alias_t const * pAlias1, float lerp, int entnum, float const * const org, float volume, float pitch, int timeshift, float fraction, int startDelay, bool master, int index, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAlias3DSample(struct snd_alias_t const * pAlias0, struct snd_alias_t const * pAlias1, float lerp, int entnum, float const * const org, float volume, float pitch, int timeshift, float fraction, int startDelay, bool master, int * pChannel, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAlias2DSample(struct snd_alias_t const * pAlias0, struct snd_alias_t const * pAlias1, float lerp, int entnum, float volume, float pitch, int timeshift, float fraction, int startDelay, bool master, int * pChannel, enum snd_alias_system_t system)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update3DChannel(int i, int frametime)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update2DChannel(int i, int frametime)
{	UNIMPLEMENTED();
}

void __cdecl SND_ShutdownDriver()
{	UNIMPLEMENTED();
}

void __cdecl XA_SndStreamReadThread(void)
{	UNIMPLEMENTED();
}

bool __cdecl SND_InitDriver()
{	UNIMPLEMENTED();
}

struct dvar_s const * const snd_omnidirectionalPercentage;
struct dvar_s const * const snd_speakerConfiguration;
unsigned int __cdecl SND_HashForName(char const *)
{	UNIMPLEMENTED();
}

void __cdecl XA_ApplyOmnidirectionality(float * *)
{	UNIMPLEMENTED();
}

void __cdecl XA_InitSpatializationCurves(void)
{	UNIMPLEMENTED();
}

void __cdecl XA_OverlappedFileReadCompletion(unsigned long,unsigned long,struct _OVERLAPPED *)
{	UNIMPLEMENTED();
}

void __cdecl XA_FreeStreamPacket(struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

void __cdecl XA_RemoveFromFreeList(struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

void __cdecl XA_MoveToFreeTail(struct XaCacheEntry *,struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

void __cdecl XA_MoveToFreeHead(struct XaCacheEntry *,struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

unsigned char * __cdecl XA_GetCacheEntryBuffer(struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

void __cdecl XA_CloseStreamFile(struct XaStreamReadInfo *)
{	UNIMPLEMENTED();
}

void __cdecl XA_CleanFilename(char *)
{	UNIMPLEMENTED();
}

float __cdecl XA_GetWetLevel(struct snd_alias_t const *)
{	UNIMPLEMENTED();
}

float __cdecl XA_GetDryLevel(struct snd_alias_t const *)
{	UNIMPLEMENTED();
}

int __cdecl XA_CalcTotalSamples(int,int)
{	UNIMPLEMENTED();
}

unsigned long __cdecl XA_GetSampleIndexFromMsec(int,int)
{	UNIMPLEMENTED();
}

unsigned char __cdecl XA_GetSpeakerCount(void)
{	UNIMPLEMENTED();
}

bool __cdecl XA_Init3D(void)
{	UNIMPLEMENTED();
}

void __cdecl XA_ReleaseStreamPacket(struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

void __cdecl XA_TouchEntry(struct XaCacheEntry *)
{	UNIMPLEMENTED();
}

void __cdecl XA_InitVoiceOutputAndBaseVolumesForReverb(int,int,bool,struct XAUDIOCHANNELMAP *)
{	UNIMPLEMENTED();
}

void __cdecl XA_51_SpecificVolumeCoefficientAdjustments(float)
{	UNIMPLEMENTED();
}

void __cdecl XA_SetSpatializationCurves(int)
{	UNIMPLEMENTED();
}

void __cdecl XA_UpdateXAudioListener(float const * const)
{	UNIMPLEMENTED();
}

void __cdecl XA_StreamPacketCallback(struct XAUDIOVOICEPACKETCALLBACK *)
{	UNIMPLEMENTED();
}

void __cdecl XA_SetStreamPacket(struct XaStreamReadInfo *,int,unsigned char *,int)
{	UNIMPLEMENTED();
}

struct XaCacheEntry * __cdecl XA_GetStreamPacket(struct XaStreamReadInfo *,int)
{	UNIMPLEMENTED();
}

float __cdecl XA_CalcXAudioPitch(int,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl XA_InitSpatializationParams(void)
{	UNIMPLEMENTED();
}

void __cdecl XA_SetStreamPacketPosition(struct IXAudioSourceVoice *,struct XaStreamReadInfo *,struct XAUDIOPACKET *)
{	UNIMPLEMENTED();
}

bool __cdecl XA_SubmitStreamPacket(struct IXAudioSourceVoice *,struct XaStreamReadInfo *)
{	UNIMPLEMENTED();
}

void __cdecl XA_SpatializeStreamChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl XA_Spatialize3DChannel(int)
{	UNIMPLEMENTED();
}

bool __cdecl XA_Init2D(void)
{	UNIMPLEMENTED();
}

void __cdecl XA_ReadStreamPacketData(struct XaStreamReadInfo *)
{	UNIMPLEMENTED();
}

void __cdecl XA_ExecuteStreamRead(struct XaStreamReadInfo *)
{	UNIMPLEMENTED();
}

void __cdecl XA_InitChannels(void)
{	UNIMPLEMENTED();
}

SND_LoadSoundFile(SoundFile* soundFile)
{	UNIMPLEMENTED();
}

