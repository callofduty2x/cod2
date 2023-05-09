#include <stdint.h>

struct windowDef_t
{
	char rect[96];
	char rectClient[96];
	int32_t name;
	int32_t group;
	int32_t cinematicName;
	int32_t cinematic;
	int32_t style;
	int32_t border;
	int32_t ownerDraw;
	int32_t ownerDrawFlags;
	int32_t borderSize;
	int32_t staticFlags;
	char dynamicFlags[16];
	char rectEffects0[96];
	char rectEffects1[96];
	char offsetTime[16];
	int32_t nextTime;
	char foreColor[16];
	char backColor[16];
	char borderColor[16];
	char outlineColor[16];
	int32_t background;
};

