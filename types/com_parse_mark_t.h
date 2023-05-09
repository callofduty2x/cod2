#include <stdint.h>

struct com_parse_mark_t
{
	int32_t lines;
	int32_t text;
	int32_t ungetToken;
	int32_t backup_lines;
	int32_t backup_text;
};

