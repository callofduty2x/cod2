CSoundObject::~CSoundObject()
{	UNIMPLEMENTED();
}

CSoundObject::Release()
{	UNIMPLEMENTED();
}

CSoundObject::IsAvailable()
{	UNIMPLEMENTED();
}

CSoundObject::GetSoundType()
{	UNIMPLEMENTED();
}

CSoundObject::Is3DSound()
{	UNIMPLEMENTED();
}

CSoundObject::TheadIdle()
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_address(void const* start,  unsigned long len)
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_type(long format,  unsigned long flags)
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_volume(float volume)
{	UNIMPLEMENTED();
}

CSoundObject::stop_sample()
{	UNIMPLEMENTED();
}

CSoundObject::resume_sample()
{	UNIMPLEMENTED();
}

CSoundObject::end_sample()
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_adpcm_block_size(unsigned long blocksize)
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_volume()
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_volume_levels(float* left_level,  float* right_level)
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_volume_levels(float left_level,  float right_level)
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_volume_pan(float* volume,  float* pan)
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_reverb_levels(float dry_level,  float wet_level)
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_position()
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_position(unsigned long position)
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_playback_rate()
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_playback_rate(long playback_rate)
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_loop_count(unsigned long loops)
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_status()
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_length()
{	UNIMPLEMENTED();
}

CSoundObject::sample_buffer_ready()
{	UNIMPLEMENTED();
}

CSoundObject::load_sample_buffer(unsigned long buff_num,  void const* buffer,  unsigned long len)
{	UNIMPLEMENTED();
}

CSoundObject::set_3D_position(float X,  float Y,  float Z)
{	UNIMPLEMENTED();
}

CSoundObject::get_3D_position(float* X,  float* Y,  float* Z)
{	UNIMPLEMENTED();
}

CSoundObject::set_3D_sample_distances(float max_dist,  float min_dist)
{	UNIMPLEMENTED();
}

CSoundObject::set_3D_sample_effects_level(float effects_level)
{	UNIMPLEMENTED();
}

CSoundObject::open_stream(char const* filename)
{	UNIMPLEMENTED();
}

CSoundObject::close_stream()
{	UNIMPLEMENTED();
}

CSoundObject::get_stream_info(long* datarate,  long* sndtype,  long* length,  long* memory)
{	UNIMPLEMENTED();
}

CSoundObject::set_file_callbacks(unsigned long (*)(char const*, unsigned long*), void (*)(unsigned long), long (*)(unsigned long, long, unsigned long), unsigned long (*)(unsigned long, void*, unsigned long))
{	UNIMPLEMENTED();
}

CSoundObject::FormatToDescription(long mssPlaybackRate,  long mssFormat,  AudioStreamBasicDescription& outDescription)
{	UNIMPLEMENTED();
}

CSoundObject::IsEqualDescriptions(AudioStreamBasicDescription const& inDesc1,  AudioStreamBasicDescription const& inDesc2)
{	UNIMPLEMENTED();
}

CSoundObject::SampleBuffersEmpty()
{	UNIMPLEMENTED();
}

CSoundObject::ChangedVolume()
{	UNIMPLEMENTED();
}

CSoundObject::ChangedFormat()
{	UNIMPLEMENTED();
}

CSoundObject::Changed3DPosition()
{	UNIMPLEMENTED();
}

CSoundObject::Changed3DDistances()
{	UNIMPLEMENTED();
}

CSoundObject::file_open_callback(char const* Filename,  unsigned long* FileHandle)
{	UNIMPLEMENTED();
}

CSoundObject::file_close_callback(unsigned long FileHandle)
{	UNIMPLEMENTED();
}

CSoundObject::file_seek_callback(unsigned long FileHandle,  long Offset,  unsigned long Type)
{	UNIMPLEMENTED();
}

CSoundObject::file_read_callback(unsigned long FileHandle,  void* Buffer,  unsigned long Bytes)
{	UNIMPLEMENTED();
}

CSoundObject::CSoundObject(CSoundEngine& inEngine inEngine,   unsigned long inBusIndex inBusIndex)
{	UNIMPLEMENTED();
}

CSoundObject::get_sample_ms_position(long* total_milliseconds,  long* current_milliseconds)
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_ms_position(long milliseconds)
{	UNIMPLEMENTED();
}

CSoundObject::init_sample()
{	UNIMPLEMENTED();
}

CSoundObject::set_sample_info(_AILSOUNDINFO const* info)
{	UNIMPLEMENTED();
}

