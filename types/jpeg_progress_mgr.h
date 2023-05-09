#include <stdint.h>

struct jpeg_progress_mgr
{
	int32_t progress_monitor;
	int32_t pass_counter;
	int32_t pass_limit;
	int32_t completed_passes;
	int32_t total_passes;
};

