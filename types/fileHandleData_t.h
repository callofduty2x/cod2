#include <stdint.h>

struct fileHandleData_t
{
	qfile_ut handleFiles;
	int32_t handleSync;
	int32_t fileSize;
	int32_t zipFilePos;
	int32_t zipFile;
	int32_t streamed;
	char name[256];
};

