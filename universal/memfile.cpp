void __cdecl MemFile_Shutdown(struct MemoryFile *)
{	UNIMPLEMENTED();
}

char const * __cdecl MemFile_ReadCString(struct MemoryFile * memFile)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_ReadData(struct MemoryFile * memFile, int bytes, void * data)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_SkipData(struct MemoryFile *,int)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_WriteData(struct MemoryFile * memFile, int bytes, void const * data)
{	UNIMPLEMENTED();
}

bool __cdecl MemFile_IsReading(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_InitForReading(struct MemoryFile * memFile, int size, void * buffer)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_WriteCString(struct MemoryFile * memFile, char const * string)
{	UNIMPLEMENTED();
}

bool __cdecl MemFile_IsWriting(struct MemoryFile *)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_InitForWriting(struct MemoryFile * memFile, int size, void * buffer, bool errorOnOverflow)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_CommonInit(struct MemoryFile *,int,void *,bool)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_WriteDataForArchive(struct MemoryFile *,int,void *)
{	UNIMPLEMENTED();
}

