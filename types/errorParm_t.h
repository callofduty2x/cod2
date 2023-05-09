#include <stdint.h>

typedef enum
{
	ERR_FATAL = 0,
	ERR_DROP = 1,
	ERR_SERVERDISCONNECT = 2,
	ERR_DISCONNECT = 3,
	ERR_SCRIPT = 4,
	ERR_SCRIPT_DROP = 5,
	ERR_LOCALIZATION = 6
} errorParm_t;

