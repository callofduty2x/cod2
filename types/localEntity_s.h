#include <stdint.h>

struct localEntity_s
{
	int32_t prev;
	int32_t next;
	leType_t leType;
	int32_t endTime;
	char pos[36];
	char color[16];
	int32_t tracerClipDist;
	GfxEntity refEntity;
};

