#include <stdint.h>

typedef enum
{
	SESS_STATE_PLAYING = 0,
	SESS_STATE_DEAD = 1,
	SESS_STATE_SPECTATOR = 2,
	SESS_STATE_INTERMISSION = 3
} sessionState_t;

