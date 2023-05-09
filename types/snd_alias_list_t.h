#include <stdint.h>

struct snd_alias_list_t
{
	int32_t aliasName;
	int32_t head;
	int32_t count;
	int32_t pHashNext;
};

