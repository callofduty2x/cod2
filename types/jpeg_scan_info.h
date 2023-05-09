#include <stdint.h>

struct jpeg_scan_info
{
	int32_t comps_in_scan;
	char component_index[16];
	int32_t Ss;
	int32_t Se;
	int32_t Ah;
	int32_t Al;
};

