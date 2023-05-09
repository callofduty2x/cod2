#include <stdint.h>

struct jpeg_comp_master
{
	int32_t prepare_for_pass;
	int32_t pass_startup;
	int32_t finish_pass;
	int8_t call_pass_startup;
	int8_t is_last_pass;
};

