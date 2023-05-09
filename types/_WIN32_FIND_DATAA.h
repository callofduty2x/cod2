#include <stdint.h>

struct _WIN32_FIND_DATAA
{
	int32_t dwFileAttributes;
	int64_t ftCreationTime;
	int64_t ftLastAccessTime;
	int64_t ftLastWriteTime;
	int32_t nFileSizeHigh;
	int32_t nFileSizeLow;
	int32_t dwReserved0;
	int32_t dwReserved1;
	char cFileName[260];
	char cAlternateFileName[14];
	char pad0[2];
	int32_t dwFileType;
	int32_t dwCreatorType;
	int16_t wFinderFlags;
};

