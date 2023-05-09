#include <stdint.h>

struct JHUFF_TBL
{
	char bits[17];
	char huffval[256];
	int8_t sent_table;
};

