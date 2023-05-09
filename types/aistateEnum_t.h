#include <stdint.h>

typedef enum
{
	AISTATE_NULL = -1,
	AISTATE_RELAXED = 0,
	AISTATE_QUERY = 1,
	AISTATE_ALERT = 2,
	AISTATE_COMBAT = 3,
	MAX_AISTATES = 4
} aistateEnum_t;

