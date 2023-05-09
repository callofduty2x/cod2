#include <stdint.h>

struct ProcessInfoRec
{
	int32_t processInfoLength;
	int32_t processName;
	int64_t processNumber;
	int32_t processType;
	int32_t processSignature;
	int32_t processMode;
	int32_t processLocation;
	int32_t processSize;
	int32_t processFreeMem;
	int64_t processLauncher;
	int32_t processLaunchDate;
	int32_t processActiveTime;
	int32_t processAppSpec;
};

