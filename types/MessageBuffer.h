#include <stdint.h>

struct MessageBuffer
{
	char gamemsg[28];
	char gamemsg_lines[1312];
	char boldgamemsg[28];
	char boldgamemsg_lines[1312];
	char subtitle[28];
	char subtitle_lines[1312];
	char minicon[28];
	char minicon_lines[16400];
};

