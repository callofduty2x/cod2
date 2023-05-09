#include <stdint.h>

struct usercmd_s
{
	int32_t serverTime;
	int32_t buttons;
	int8_t weapon;
	int8_t offHandIndex;
	char pad0[2];
	char angles[12];
	int8_t forwardmove;
	int8_t rightmove;
};

