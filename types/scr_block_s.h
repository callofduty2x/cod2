#include <stdint.h>

struct scr_block_s
{
	int32_t abortLevel;
	int32_t localVarsCreateCount;
	int32_t localVarsPublicCount;
	int32_t localVarsCount;
	int64_t localVarsInitBits;
	char localVars[256];
};

