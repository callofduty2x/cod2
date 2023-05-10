char const * __cdecl GetBspExtension()
{	UNIMPLEMENTED();
}

void __cdecl FS_ConvertPath(char * s)
{	UNIMPLEMENTED();
}

void __cdecl FS_ResetFiles()
{	UNIMPLEMENTED();
}

void __cdecl FS_Printf(int h, char const * fmt, ...)
{	UNIMPLEMENTED();
}

int __cdecl FS_Write(void const * buffer, int len, int h)
{	UNIMPLEMENTED();
}

int __cdecl FS_Delete(char const *)
{	UNIMPLEMENTED();
}

int __cdecl FS_CreatePath(char *)
{	UNIMPLEMENTED();
}

struct _iobuf * __cdecl FS_FileForHandle(int f)
{	UNIMPLEMENTED();
}

long __cdecl FS_HashFileName(char const * fname, int hashSize)
{	UNIMPLEMENTED();
}

int __cdecl FS_LoadStack()
{	UNIMPLEMENTED();
}

void __cdecl FS_CheckFileSystemStarted()
{	UNIMPLEMENTED();
}

void __cdecl FS_Flush(int f)
{	UNIMPLEMENTED();
}

int __cdecl FS_FTell(int f)
{	UNIMPLEMENTED();
}

int __cdecl FS_Seek(int f, long offset, int origin)
{	UNIMPLEMENTED();
}

void __cdecl FS_FCloseFile(int h)
{	UNIMPLEMENTED();
}

int __cdecl FS_filelength(int f)
{	UNIMPLEMENTED();
}

int __cdecl FS_Read(void * buffer, int len, int h)
{	UNIMPLEMENTED();
}

void __cdecl FS_BuildOSPath(char const * base, char const * game, char const * qpath, char * const ospath)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenFileAppend(char const * filename)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenTextFileWrite(char const * filename)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenFileWrite(char const * filename)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenFileRead(char const * filename, int * file, int uniqueFILE)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenFileReadStream(char const * filename, int * file, int uniqueFILE)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenFileByMode(char const * qpath, int * f, enum fsMode_t mode)
{	UNIMPLEMENTED();
}

int __cdecl FS_WriteFile(char const * qpath, void const * buffer, int size)
{	UNIMPLEMENTED();
}

void __cdecl FS_InitFilesystem()
{	UNIMPLEMENTED();
}

int com_fileAccessed;
int marker_com_files;
int fs_loadStack;
void __cdecl FS_ReplaceSeparators(char *)
{	UNIMPLEMENTED();
}

int __cdecl FS_GetHandleAndOpenFile(char const *,char const *,char const *,int)
{	UNIMPLEMENTED();
}

void __cdecl FS_BuildOSPath_Internal(char const *,char const *,char const *,char * const,int)
{	UNIMPLEMENTED();
}

int __cdecl FS_FOpenFileRead_Internal(char const *,int *,int,int)
{	UNIMPLEMENTED();
}

FS_Initialized()
{	UNIMPLEMENTED();
}

FS_UseSearchPath(searchpath_s const* pSearch)
{	UNIMPLEMENTED();
}

FS_LanguageHasAssets(int)
{	UNIMPLEMENTED();
}

FS_HandleForFile(int streamThread)
{	UNIMPLEMENTED();
}

FS_Remove(char const* osPath)
{	UNIMPLEMENTED();
}

FS_FilenameCompare(char const* s1,  char const* s2)
{	UNIMPLEMENTED();
}

FS_PureIgnoresExtension(char const* extension)
{	UNIMPLEMENTED();
}

FS_ShutdownServerIwdNames()
{	UNIMPLEMENTED();
}

FS_ShutdownServerReferencedIwds()
{	UNIMPLEMENTED();
}

FS_RegisterDvars()
{	UNIMPLEMENTED();
}

FS_ClearIwdReferences()
{	UNIMPLEMENTED();
}

FS_Shutdown(int closemfp)
{	UNIMPLEMENTED();
}

FS_FileExists(char const* file)
{	UNIMPLEMENTED();
}

FS_ShortOSFilePath(char const* filename)
{	UNIMPLEMENTED();
}

FS_GetFileOsPath(char const* filename,  char* ospath)
{	UNIMPLEMENTED();
}

FS_DisplayPath(int bLanguageCull)
{	UNIMPLEMENTED();
}

FS_Path_f()
{	UNIMPLEMENTED();
}

FS_FullPath_f()
{	UNIMPLEMENTED();
}

FS_ListFilteredFiles(searchpath_s* searchPath,  char const* path,  char const* extension,  char const* filter,  FsListBehavior_e behavior,  int* numfiles,  int allocTrackType)
{	UNIMPLEMENTED();
}

FS_GetFileList(char const* path,  char const* extension,  FsListBehavior_e behavior,  char* listbuf,  int bufsize)
{	UNIMPLEMENTED();
}

FS_SortFileList(char const** filelist,  int numfiles)
{	UNIMPLEMENTED();
}

FS_OpenFileOverwrite(char const* qpath)
{	UNIMPLEMENTED();
}

FS_CopyFile(char* fromOSPath,  char* toOSPath)
{	UNIMPLEMENTED();
}

FS_TouchFile(char const* name)
{	UNIMPLEMENTED();
}

FS_Startup(char const* gameName)
{	UNIMPLEMENTED();
}

FS_Restart(int checksumFeed)
{	UNIMPLEMENTED();
}

FS_ConditionalRestart(int checksumFeed)
{	UNIMPLEMENTED();
}

