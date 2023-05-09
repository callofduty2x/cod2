#include <stdint.h>

struct jpeg_input_controller
{
	int32_t consume_input;
	int32_t reset_input_controller;
	int32_t start_input_pass;
	int32_t finish_input_pass;
	int8_t has_multiple_scans;
	int8_t eoi_reached;
};

