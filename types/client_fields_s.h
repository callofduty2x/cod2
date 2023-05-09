#include <stdint.h>

struct client_fields_s
{
	int32_t name;
	int32_t ofs;
	fieldtype_t type;
	int32_t setter;
	int32_t getter;
};

