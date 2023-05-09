#include <stdint.h>

struct hudelem_s
{
	he_type_t type;
	int32_t x;
	int32_t y;
	int32_t z;
	int32_t fontScale;
	int32_t font;
	int32_t alignOrg;
	int32_t alignScreen;
	hudelem_color_t color;
	int32_t fromColor;
	int32_t fadeStartTime;
	int32_t fadeTime;
	int32_t label;
	int32_t width;
	int32_t height;
	int32_t materialIndex;
	int32_t fromWidth;
	int32_t fromHeight;
	int32_t scaleStartTime;
	int32_t scaleTime;
	int32_t fromX;
	int32_t fromY;
	int32_t fromAlignOrg;
	int32_t fromAlignScreen;
	int32_t moveStartTime;
	int32_t moveTime;
	int32_t time;
	int32_t duration;
	int32_t value;
	int32_t text;
	int32_t sort;
	int32_t foreground;
};

