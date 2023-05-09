#include <stdint.h>

typedef enum
{
	FMV_IDLE = 0,
	FMV_PLAY = 1,
	FMV_EOF = 2,
	FMV_ID_BLT = 3,
	FMV_ID_IDLE = 4,
	FMV_LOOPED = 5,
	FMV_ID_WAIT = 6
} e_status;

