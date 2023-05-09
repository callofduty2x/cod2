#include <stdint.h>

struct jpeg_error_mgr
{
	int32_t error_exit;
	int32_t emit_message;
	int32_t output_message;
	int32_t format_message;
	int32_t reset_error_mgr;
	int32_t msg_code;
	char pad0[80];
	int32_t trace_level;
	int32_t num_warnings;
	int32_t jpeg_message_table;
	int32_t last_jpeg_message;
	int32_t addon_message_table;
	int32_t first_addon_message;
	int32_t last_addon_message;
	int32_t exit;
	int32_t printf;
};

