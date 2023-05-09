#include <stdint.h>

typedef enum
{
	SE_NONE = 0,
	SE_KEY = 1,
	SE_CHAR = 2,
	SE_GAMEPAD_AXIS = 3,
	SE_CONSOLE = 4,
	SE_PACKET = 5
} sysEventType_t;

