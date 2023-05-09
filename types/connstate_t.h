#include <stdint.h>

typedef enum
{
	CA_DISCONNECTED = 0,
	CA_CINEMATIC = 1,
	CA_LOGO = 2,
	CA_CONNECTING = 3,
	CA_CHALLENGING = 4,
	CA_CONNECTED = 5,
	CA_LOADING = 6,
	CA_PRIMED = 7,
	CA_ACTIVE = 8
} connstate_t;

