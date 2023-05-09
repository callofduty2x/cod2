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

int __cdecl SND_RawSamplesTime(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_EndRawSamples(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_RawSamples(int,int,int,int,unsigned char const *)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetDriverCPUPercentage(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_DriverPreUpdate(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetSoundFileSize(void const *)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetStreamChannelLength(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update3DChannelReverb(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_GetStreamChannelPlaybackRate(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get3DChannelPlaybackRate(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get2DChannelPlaybackRate(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_IsStreamChannelFree(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is3DChannelFree(int)
{	UNIMPLEMENTED();
}

bool __cdecl SND_Is2DChannelFree(int)
{	UNIMPLEMENTED();
}

void __cdecl XA_PacketCacheInit(void)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get3DChannelLength(int)
{	UNIMPLEMENTED();
}

int __cdecl SND_Get2DChannelLength(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set3DPosition(int,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl SND_GetStreamChannelSaveInfo(int,struct snd_save_stream_t *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Get3DChannelSaveInfo(int,struct snd_save_3D_sample_t *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Get2DChannelSaveInfo(int,struct snd_save_2D_sample_t *)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateStreamChannelReverb(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update2DChannelReverb(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetStreamChannelPlaybackRate(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set3DChannelPlaybackRate(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set2DChannelPlaybackRate(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetStreamChannelVolume(int,float)
{	UNIMPLEMENTED();
}

float __cdecl SND_GetStreamChannelVolume(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set3DChannelVolume(int,float)
{	UNIMPLEMENTED();
}

float __cdecl SND_Get3DChannelVolume(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set2DChannelVolume(int,float)
{	UNIMPLEMENTED();
}

float __cdecl SND_Get2DChannelVolume(int)
{	UNIMPLEMENTED();
}

struct IXAudioSourceVoice * __cdecl XA_GetNewSourceVoice(int,struct XAUDIOSOURCEFORMAT *)
{	UNIMPLEMENTED();
}

void __cdecl SND_PauseStreamChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_StopStreamChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Pause3DChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Stop3DChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Pause2DChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Stop2DChannel(int)
{	UNIMPLEMENTED();
}

void __cdecl XA_ShutdownChannels(void)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetRoomtype(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_DriverPostUpdate(int)
{	UNIMPLEMENTED();
}

void __cdecl SND_SetStreamChannelFromSaveInfo(int,struct snd_save_stream_t *)
{	UNIMPLEMENTED();
}

void __cdecl SND_Set2DChannelFromSaveInfo(int,struct snd_save_2D_sample_t *)
{	UNIMPLEMENTED();
}

void __cdecl SND_UnpauseStreamChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Unpause3DChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Unpause2DChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_UpdateStreamChannel(int,int)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAliasStreamOnChannel(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,float,float,int,float,int,bool,int,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAlias3DSample(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float const * const,float,float,int,float,int,bool,int *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

int __cdecl SND_StartAlias2DSample(struct snd_alias_t const *,struct snd_alias_t const *,float,int,float,float,int,float,int,bool,int *,enum snd_alias_system_t)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update3DChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_Update2DChannel(int,int)
{	UNIMPLEMENTED();
}

void __cdecl SND_ShutdownDriver(void)
{	UNIMPLEMENTED();
}

void __cdecl XA_SndStreamReadThread(void)
{	UNIMPLEMENTED();
}

bool __cdecl SND_InitDriver(void)
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

