#include <stdint.h>

struct animScriptData_t
{
	char animations[49152];
	int32_t numAnimations;
	char scriptAnims[84624];
	char scriptCannedAnims[84624];
	char scriptStateChange[8256];
	char scriptEvents[9804];
	char scriptItems[499712];
	int32_t numScriptItems;
	scr_animtree_t animTree;
	int16_t torsoAnim;
	int16_t legsAnim;
	int16_t turningAnim;
	char pad0[2];
	int32_t soundAlias;
	int32_t playSoundAlias;
};

