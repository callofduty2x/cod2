#include <stdint.h>

struct snd_enveffect
{
	int32_t roomtype;
	int32_t drylevel;
	int32_t drygoal;
	int32_t dryrate;
	int32_t wetlevel;
	int32_t wetgoal;
	int32_t wetrate;
	int8_t active;
};

