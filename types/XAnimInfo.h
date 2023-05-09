#include <stdint.h>

struct XAnimInfo
{
	int16_t notifyChild;
	int16_t notifyIndex;
	int16_t notifyName;
	int16_t notifyType;
	int16_t prev;
	int16_t next;
	XAnimState s;
};

