#include <stdint.h>

struct game_hudelem_field_t
{
	int32_t name;
	int32_t ofs;
	fieldtype_t type;
	int32_t mask;
	int32_t shift;
	int32_t setter;
	int32_t getter;
};

