#include <stdint.h>

typedef enum
{
	OBJST_EMPTY = 0,
	OBJST_ACTIVE = 1,
	OBJST_INVISIBLE = 2,
	OBJST_DONE = 3,
	OBJST_CURRENT = 4,
	OBJST_FAILED = 5,
	OBJST_NUMSTATES = 6
} objectiveState_t;

