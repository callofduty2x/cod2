AIL_startup(unsigned long bus_count)
{	UNIMPLEMENTED();
}

AIL_shutdown()
{	UNIMPLEMENTED();
}

AIL_set_preference(unsigned long number,  long value)
{	UNIMPLEMENTED();
}

AIL_last_error()
{	UNIMPLEMENTED();
}

AIL_open_digital_driver(unsigned long frequency,  long bits,  long channel,  unsigned long flags)
{	UNIMPLEMENTED();
}

AIL_set_redist_directory(char const* dir)
{	UNIMPLEMENTED();
}

AIL_digital_CPU_percent(unsigned long dig)
{	UNIMPLEMENTED();
}

AIL_allocate_sample_handle(unsigned long dig)
{	UNIMPLEMENTED();
}

AIL_release_sample_handle(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_init_sample(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_set_sample_adpcm_block_size(_SAMPLE* S,  unsigned long blocksize)
{	UNIMPLEMENTED();
}

AIL_set_sample_address(_SAMPLE* S,  void const* start,  unsigned long len)
{	UNIMPLEMENTED();
}

AIL_set_sample_type(_SAMPLE* S,  long format,  unsigned long flags)
{	UNIMPLEMENTED();
}

AIL_stop_sample(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_resume_sample(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_end_sample(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_set_sample_playback_rate(_SAMPLE* S,  long playback_rate)
{	UNIMPLEMENTED();
}

AIL_set_sample_volume_levels(_SAMPLE* S,  float left_level,  float right_level)
{	UNIMPLEMENTED();
}

AIL_set_sample_reverb_levels(_SAMPLE* S,  float dry_level,  float wet_level)
{	UNIMPLEMENTED();
}

AIL_set_sample_loop_count(_SAMPLE* S,  long loop_count)
{	UNIMPLEMENTED();
}

AIL_sample_status(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_sample_playback_rate(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_sample_volume_pan(_SAMPLE* S,  float* volume,  float* pan)
{	UNIMPLEMENTED();
}

AIL_sample_volume_levels(_SAMPLE* S,  float* left_level,  float* right_level)
{	UNIMPLEMENTED();
}

AIL_set_digital_master_room_type(unsigned long dig,  long room_type)
{	UNIMPLEMENTED();
}

AIL_set_digital_master_reverb_levels(unsigned long dig,  float dry_level,  float wet_level)
{	UNIMPLEMENTED();
}

AIL_minimum_sample_buffer_size(unsigned long dig,  long playback_rate,  long format)
{	UNIMPLEMENTED();
}

AIL_sample_buffer_ready(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_load_sample_buffer(_SAMPLE* S,  unsigned long buff_num,  void const* buffer,  unsigned long len)
{	UNIMPLEMENTED();
}

AIL_sample_position(_SAMPLE* S)
{	UNIMPLEMENTED();
}

AIL_set_sample_ms_position(_SAMPLE* S,  long milliseconds)
{	UNIMPLEMENTED();
}

AIL_sample_ms_position(_SAMPLE* S,  long* total_milliseconds,  long* current_milliseconds)
{	UNIMPLEMENTED();
}

AIL_open_stream(unsigned long dig,  char const* filename,  long stream_mem)
{	UNIMPLEMENTED();
}

AIL_close_stream(_STREAM* stream)
{	UNIMPLEMENTED();
}

AIL_pause_stream(_STREAM* stream,  long onoff)
{	UNIMPLEMENTED();
}

AIL_set_stream_volume_levels(_STREAM* S,  float left_level,  float right_level)
{	UNIMPLEMENTED();
}

AIL_set_stream_reverb_levels(_STREAM* S,  float dry_level,  float wet_level)
{	UNIMPLEMENTED();
}

AIL_stream_volume_pan(_STREAM* stream,  float* volume,  float* pan)
{	UNIMPLEMENTED();
}

AIL_stream_volume_levels(_STREAM* S,  float* left_level,  float* right_level)
{	UNIMPLEMENTED();
}

AIL_set_stream_playback_rate(_STREAM* stream,  long rate)
{	UNIMPLEMENTED();
}

AIL_stream_playback_rate(_STREAM* stream)
{	UNIMPLEMENTED();
}

AIL_set_stream_loop_count(_STREAM* stream,  long count)
{	UNIMPLEMENTED();
}

AIL_stream_status(_STREAM* stream)
{	UNIMPLEMENTED();
}

AIL_stream_info(_STREAM* stream,  long* datarate,  long* sndtype,  long* length,  long* memory)
{	UNIMPLEMENTED();
}

AIL_set_stream_ms_position(_STREAM* S,  long milliseconds)
{	UNIMPLEMENTED();
}

AIL_stream_ms_position(_STREAM* S,  long* total_milliseconds,  long* current_milliseconds)
{	UNIMPLEMENTED();
}

AIL_is_3D_stream(_STREAM* S)
{	UNIMPLEMENTED();
}

AIL_set_3D_stream_position(_STREAM* S,  float X,  float Y,  float Z)
{	UNIMPLEMENTED();
}

AIL_set_file_callbacks(unsigned long (*)(char const*, unsigned long*), void (*)(unsigned long), long (*)(unsigned long, long, unsigned long), unsigned long (*)(unsigned long, void*, unsigned long))
{	UNIMPLEMENTED();
}

AIL_size_processed_digital_audio(unsigned long dest_rate,  unsigned long dest_format,  long num_srcs,  _AILMIXINFO const* src)
{	UNIMPLEMENTED();
}

AIL_process_digital_audio(void* dest_buffer,  long dest_buffer_size,  unsigned long dest_rate,  unsigned long dest_format,  long num_srcs,  _AILMIXINFO* src)
{	UNIMPLEMENTED();
}

AIL_enumerate_3D_providers(unsigned long* next,  unsigned long* dest,  char** name)
{	UNIMPLEMENTED();
}

AIL_open_3D_provider(unsigned long lib)
{	UNIMPLEMENTED();
}

AIL_close_3D_provider(unsigned long lib)
{	UNIMPLEMENTED();
}

AIL_3D_provider_attribute(unsigned long lib,  char const* name,  void* val)
{	UNIMPLEMENTED();
}

AIL_allocate_3D_sample_handle(unsigned long lib)
{	UNIMPLEMENTED();
}

AIL_stop_3D_sample(void* S)
{	UNIMPLEMENTED();
}

AIL_resume_3D_sample(void* S)
{	UNIMPLEMENTED();
}

AIL_end_3D_sample(void* S)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_info(void* S,  _AILSOUNDINFO const* info)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_volume(void* S,  float volume)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_offset(void* S,  unsigned long offset)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_playback_rate(void* S,  long playback_rate)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_loop_count(void* S,  unsigned long loops)
{	UNIMPLEMENTED();
}

AIL_3D_sample_status(void* S)
{	UNIMPLEMENTED();
}

AIL_3D_sample_volume(void* S)
{	UNIMPLEMENTED();
}

AIL_3D_sample_offset(void* S)
{	UNIMPLEMENTED();
}

AIL_3D_sample_playback_rate(void* S)
{	UNIMPLEMENTED();
}

AIL_3D_sample_length(void* S)
{	UNIMPLEMENTED();
}

AIL_set_3D_room_type(unsigned long lib,  long room_type)
{	UNIMPLEMENTED();
}

AIL_set_3D_rolloff_factor(unsigned long lib,  float factor)
{	UNIMPLEMENTED();
}

AIL_set_3D_distance_factor(unsigned long lib,  float factor)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_distances(void* S,  float max_dist,  float min_dist)
{	UNIMPLEMENTED();
}

AIL_set_3D_sample_effects_level(void* S,  float effects_level)
{	UNIMPLEMENTED();
}

AIL_set_3D_position(void* obj,  float X,  float Y,  float Z)
{	UNIMPLEMENTED();
}

AIL_3D_position(void* obj,  float* X,  float* Y,  float* Z)
{	UNIMPLEMENTED();
}

AIL_WAV_info(void const* data,  _AILSOUNDINFO* info)
{	UNIMPLEMENTED();
}

