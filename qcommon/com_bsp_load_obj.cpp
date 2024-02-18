#include "qcommon.h"

#define IBSP_VERSION 4

struct BspLump
{
	unsigned int length;
	unsigned int offset;
};

struct BspHeader
{
	unsigned int ident;
	unsigned int version;
	BspLump lumps[LUMP_COUNT];
};

typedef struct comBspGlob_s
{
	BspHeader *header;
	unsigned int fileSize;
	unsigned int checksum;
} comBspGlob_t;
// static_assert((sizeof(comBspGlob_t) == 0xC), "ERROR: comBspGlob_t size is invalid!");

comBspGlob_t comBspGlob;

BspHeader* Com_GetBspHeader(unsigned int *size, unsigned int *checksum)
{
	if ( size )
		*size = comBspGlob.fileSize;

	if ( checksum )
		*checksum = comBspGlob.checksum;

	return comBspGlob.header;
}


void Com_UnloadBsp()
{
	Z_FreeInternal(comBspGlob.header);
	comBspGlob.header = NULL;
}

void Com_LoadBsp(const char *filename)
{
	fileHandle_t h;
	unsigned int bytesRead;
	int i;

	comBspGlob.fileSize = FS_FOpenFileRead(filename, &h, 0);

	if ( !h )
	{
		Com_Error(ERR_DROP, "EXE_ERR_COULDNT_LOAD\x15%s", filename);
	}

	comBspGlob.header = (BspHeader *)Z_MallocGarbage(comBspGlob.fileSize);
	bytesRead = FS_Read(comBspGlob.header, comBspGlob.fileSize, h);
	FS_FCloseFile(h);

	if ( bytesRead != comBspGlob.fileSize || comBspGlob.fileSize < 320 )
	{
		Z_Free(comBspGlob.header);
		Com_Error(ERR_DROP, "EXE_ERR_COULDNT_LOAD\x15%s", filename);
	}

	comBspGlob.checksum = Com_BlockChecksum(comBspGlob.header, comBspGlob.fileSize);

	comBspGlob.header->ident = LittleLong(comBspGlob.header->ident);
	comBspGlob.header->version = LittleLong(comBspGlob.header->version);

	if ( comBspGlob.header->ident != (uint32_t)'PSBI' || comBspGlob.header->version != IBSP_VERSION )
	{
		Z_Free(comBspGlob.header);
		Com_Error(ERR_DROP, "EXE_ERR_WRONG_MAP_VERSION_NUM\x15%s", filename);
	}

	for ( i = 0; i != LUMP_COUNT; ++i )
	{
		comBspGlob.header->lumps[i].length = LittleLong(comBspGlob.header->lumps[i].length);
		comBspGlob.header->lumps[i].offset = LittleLong(comBspGlob.header->lumps[i].offset);
	}
}

void Com_CleanupBsp()
{
	if ( Com_IsBspLoaded() )
		Com_UnloadBsp();
}
