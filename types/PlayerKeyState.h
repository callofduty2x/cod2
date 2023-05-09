#include <stdint.h>

struct PlayerKeyState
{
	char chatField[280];
	int32_t chat_team;
	int32_t key_overstrikeMode;
	int32_t anykeydown;
	char keys[3072];
};

