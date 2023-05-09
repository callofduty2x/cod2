#include <stdint.h>

struct displayContextDef_s
{
	int32_t bias;
	int32_t realTime;
	int32_t frameTime;
	int32_t cursorx;
	int32_t cursory;
	int32_t debug;
	int32_t screenWidth;
	int32_t screenHeight;
	int32_t screenAspect;
	int32_t FPS;
	int32_t blurRadiusOut;
	char Menus[512];
	int32_t menuCount;
	char menuStack[64];
	int32_t openMenuCount;
};

