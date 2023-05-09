#include <stdint.h>

struct _OSVERSIONINFOA
{
	int32_t dwOSVersionInfoSize;
	int32_t dwMajorVersion;
	int32_t dwMinorVersion;
	int32_t dwBuildNumber;
	int32_t dwPlatformId;
	char szCSDVersion[128];
};

