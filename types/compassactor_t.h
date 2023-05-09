#include <stdint.h>

struct compassactor_t
{
	int32_t iLastUpdate;
	int64_t vLastPos;
	float fLastYaw;
	int32_t pingTime;
	int32_t beginFadeTime;
	int8_t enemy;
};

