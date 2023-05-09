#include <stdint.h>

struct mover_ent_t
{
	int32_t decelTime;
	int32_t aDecelTime;
	int32_t speed;
	int32_t aSpeed;
	int32_t midTime;
	int32_t aMidTime;
	char pos1[12];
	char pos2[12];
	char pos3[12];
	char apos1[12];
	char apos2[12];
	char apos3[12];
};

