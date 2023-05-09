#include <stdint.h>

struct traceWork_t
{
	TraceExtents extents;
	char delta[12];
	int32_t deltaLen;
	int32_t deltaLenSq;
	char midpoint[12];
	char halfDelta[12];
	char halfDeltaAbs[12];
	char size[12];
	char bounds[24];
	int32_t contents;
	int32_t isPoint;
	int32_t axialCullOnly;
	int32_t radius;
	int32_t offsetZ;
	char radiusOffset[12];
	TraceThreadInfo threadInfo;
};

