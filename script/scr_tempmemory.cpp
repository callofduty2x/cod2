#include "com_memory.h"
#include "com_files.h"

static int currentPos;

int __cdecl Scr_Allign2(int)
{	UNIMPLEMENTED();
}

int __cdecl Scr_Allign4(int)
{	UNIMPLEMENTED();
}

int __cdecl Scr_Allign2Strict(int)
{	UNIMPLEMENTED();
}

int __cdecl Scr_Allign4Strict(int)
{	UNIMPLEMENTED();
}

void TempMemoryReset()
{
	currentPos = 0;
}

void* TempMalloc(int size)
{
	int pos;
	char *buf;

	pos = currentPos + size;
	buf = (char *)Hunk_ReallocateTempMemoryInternal(currentPos + size) + currentPos;
	currentPos = pos;

	return buf;
}

void* TempMemorySetPos(char *pos)
{
	currentPos -= (char *)TempMalloc(0) - pos;
	return Hunk_ReallocateTempMemoryInternal(currentPos);
}

char* TempMallocAlignStrict(int size)
{
	return (char *)TempMalloc(size);
}

char* TempMallocAlign(int size)
{
	return (char *)TempMalloc(size);
}

int marker_scr_tempmemory;
