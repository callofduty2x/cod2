#include <stdint.h>

struct HFSUniStr255
{
	short length;
	char unicode[510];
};

struct FSRef
{
	char hidden[80];
};

struct KeyStruct
{
	char ignore0[64];
	CFUUIDBytes uuid1;
	int ignore1;
	char creatorName[64];
	int ignore2;
	char creatorMachine[64];
	char ignore3[32];
	int64_t dateCreated;
	int ignore4;
	char gameName[64];
	char ignore5[16];
	int gameCreator;
	int ignore6;
	char playerName[64];
	char ignore7[64];
	char uuid2[16];
	char ignore8[16];
	int checkSum;
	char ignore9[512];
};

struct CFUUIDBytes
{
	char byte0;
	char byte1;
	char byte2;
	char byte3;
	char byte4;
	char byte5;
	char byte6;
	char byte7;
	char byte8;
	char byte9;
	char byte10;
	char byte11;
	char byte12;
	char byte13;
	char byte14;
	char byte15;
};

struct LSItemInfoRecord
{
	int flags;
	int filetype;
	int creator;
	int extension;
	int iconFileName;
	int kindID;
};

struct AEDesc
{
	int descriptorType;
	int dataHandle;
};

struct CAEDesc
{
};

struct Point
{
	short v;
	short h;
};

struct MacRect
{
	short top;
	short left;
	short bottom;
	short right;
};

struct FSSpec
{
	short vRefNum;
	int parID;
	char name[64];
};

struct CAEEvent
{
};

struct CAERecord
{
};

struct CAETarget
{
};

struct ProcessSerialNumber
{
	int highLongOfPSN;
	int lowLongOfPSN;
};

struct CAEObject
{
};

struct CGSize
{
	int width;
	int height;
};

struct EventTypeSpec
{
	int eventClass;
	int eventKind;
};

struct ControlID
{
	int signature;
	int id;
};

struct ControlEditTextSelectionRec
{
	short selStart;
	short selEnd;
};

struct HICommand
{
	int attributes;
	int commandID;
};

struct _2251
{
	int menuRef;
	short menuItemIndex;
};

struct ControlKind
{
	int signature;
	int kind;
};

struct TXNTypeAttributes
{
	int tag;
	int size;
	TXNAttributeData data;
};

union TXNAttributeData
{
	int dataPtr;
	int dataValue;
	int atsuFeatures;
	int atsuVariations;
	int urlReference;
};

struct TXNATSUIFeatures
{
	int featureCount;
	int featureTypes;
	int featureSelectors;
};

struct TXNATSUIVariations
{
	int variationCount;
	int variationAxis;
	int variationValues;
};

struct ControlFontStyleRec
{
	short flags;
	short font;
	short size;
	short style;
	short mode;
	short just;
	MacRGBColor foreColor;
	char backColor[6];
};

struct MacRGBColor
{
	short red;
	short green;
	short blue;
};

struct StShowCursor
{
};

struct GDevice
{
	short gdRefNum;
	short gdID;
	short gdType;
	int gdITable;
	short gdResPref;
	int gdSearchProc;
	int gdCompProc;
	short gdFlags;
	int gdPMap;
	int gdRefCon;
	int gdNextGD;
	MacRect gdRect;
	int gdMode;
	short gdCCBytes;
	short gdCCDepth;
	int gdCCXData;
	int gdCCXMask;
	int gdExt;
};

struct ITab
{
	int iTabSeed;
	short iTabRes;
	char iTTable;
};

struct SProcRec
{
	int nxtSrch;
	int srchProc;
};

struct CProcRec
{
	int nxtComp;
	int compProc;
};

struct PixMap
{
	int baseAddr;
	short rowBytes;
	int64_t bounds;
	short pmVersion;
	short packType;
	int packSize;
	int hRes;
	int vRes;
	short pixelType;
	short pixelSize;
	short cmpCount;
	short cmpSize;
	int pixelFormat;
	int pmTable;
	int pmExt;
};

struct ColorTable
{
	int ctSeed;
	short ctFlags;
	short ctSize;
	int64_t ctTable;
};

struct ColorSpec
{
	short value;
	MacRGBColor rgb;
};

struct CGRect
{
	CGPoint origin;
	CGSize size;
};

struct CGPoint
{
	int x;
	int y;
};

struct OpaqueContextRef
{
	int mContext;
	int mDrawable;
	int mRendererID;
	char mDoubleBuffered;
};

struct CResInfo
{
	int width;
	int height;
	int depth;
	int rate;
};

struct ComponentInstanceRecord
{
	int data;
};

struct ImageDescription
{
	int idSize;
	int cType;
	int resvd1;
	short resvd2;
	short dataRefIndex;
	short version;
	short revisionLevel;
	int vendor;
	int temporalQuality;
	int spatialQuality;
	short width;
	short height;
	int hRes;
	int vRes;
	int dataSize;
	short frameCount;
	char name[32];
	short depth;
	short clutID;
};

struct random_access_iterator_tag
{
};

struct bidirectional_iterator_tag
{
};

struct forward_iterator_tag
{
};

struct input_iterator_tag
{
};

struct _D3DGAMMARAMP
{
	char red[512];
	char green[512];
	char blue[512];
};

struct _Vector_impl
{
	int _M_start;
	int _M_finish;
	int _M_end_of_storage;
};

struct __false_type
{
};

struct CDisplayInfo
{
	int mDisplayID;
	char mBounds[16];
	CResList mResolutions;
	string mCardDescription;
	int mCardVendorID;
	int mCardDeviceID;
	int mCardType;
	int mGLVendor;
	int mGLRenderer;
	int mGLExtensions;
	int mVideoMemory;
	int mTextureMemory;
	int mMaxTextureUnits;
	int mMaxTextureImageUnits;
	int mPCPixelShaderVersion;
	char mIsValid;
	char mSupportsSeparateBlendFunc;
	char mSupportsAnisotropicFiltering;
	char pad0[1];
	int mMaxSupportedAnisotropy;
	int mMaxSampleBuffers;
	int mMaxSamples;
	char mDoesSuperSampling;
	char mDoesMultiSampling;
	char mDoesAlphaSampling;
};

struct _Alloc_hider
{
	int _M_p;
};

struct _Rep
{
};

struct _Rep_base
{
	int _M_length;
	int _M_capacity;
	int _M_refcount;
};

typedef enum
{
	kCGLNoError = 0,
	kCGLBadAttribute = 10000,
	kCGLBadProperty = 10001,
	kCGLBadPixelFormat = 10002,
	kCGLBadRendererInfo = 10003,
	kCGLBadContext = 10004,
	kCGLBadDrawable = 10005,
	kCGLBadDisplay = 10006,
	kCGLBadState = 10007,
	kCGLBadValue = 10008,
	kCGLBadMatch = 10009,
	kCGLBadEnumeration = 10010,
	kCGLBadOffScreen = 10011,
	kCGLBadFullScreen = 10012,
	kCGLBadWindow = 10013,
	kCGLBadAddress = 10014,
	kCGLBadCodeModule = 10015,
	kCGLBadAlloc = 10016,
	kCGLBadConnection = 10017
} _CGLError;

typedef enum
{
	kCGLPFAAllRenderers = 1,
	kCGLPFADoubleBuffer = 5,
	kCGLPFAStereo = 6,
	kCGLPFAAuxBuffers = 7,
	kCGLPFAColorSize = 8,
	kCGLPFAAlphaSize = 11,
	kCGLPFADepthSize = 12,
	kCGLPFAStencilSize = 13,
	kCGLPFAAccumSize = 14,
	kCGLPFAMinimumPolicy = 51,
	kCGLPFAMaximumPolicy = 52,
	kCGLPFAOffScreen = 53,
	kCGLPFAFullScreen = 54,
	kCGLPFASampleBuffers = 55,
	kCGLPFASamples = 56,
	kCGLPFAAuxDepthStencil = 57,
	kCGLPFAColorFloat = 58,
	kCGLPFAMultisample = 59,
	kCGLPFASupersample = 60,
	kCGLPFASampleAlpha = 61,
	kCGLPFARendererID = 70,
	kCGLPFASingleRenderer = 71,
	kCGLPFANoRecovery = 72,
	kCGLPFAAccelerated = 73,
	kCGLPFAClosestPolicy = 74,
	kCGLPFARobust = 75,
	kCGLPFABackingStore = 76,
	kCGLPFAMPSafe = 78,
	kCGLPFAWindow = 80,
	kCGLPFAMultiScreen = 81,
	kCGLPFACompliant = 83,
	kCGLPFADisplayMask = 84,
	kCGLPFAPBuffer = 90,
	kCGLPFARemotePBuffer = 91,
	kCGLPFAVirtualScreenCount = 128
} _CGLPixelFormatAttribute;

struct RemoveDirectoryInfo
{
	int error;
	int actualObjects;
	FSCatalogInfo catalogInfo;
};

struct FSCatalogInfo
{
	short nodeFlags;
	short volume;
	int parentDirID;
	int nodeID;
	char sharingFlags;
	char userPrivileges;
	char reserved1;
	char reserved2;
	UTCDateTime createDate;
	int64_t contentModDate;
	int64_t attributeModDate;
	int64_t accessDate;
	int64_t backupDate;
	char permissions[16];
	char finderInfo[16];
	char extFinderInfo[16];
	int64_t dataLogicalSize;
	int64_t dataPhysicalSize;
	int64_t rsrcLogicalSize;
	int64_t rsrcPhysicalSize;
	int valence;
	int textEncodingHint;
};

struct UTCDateTime
{
	short highSeconds;
	int lowSeconds;
	short fraction;
};

struct CMMapFile
{
};

struct __sFILE
{
	int _p;
	int _r;
	int _w;
	short _flags;
	short _file;
	__sbuf _bf;
	int _lbfsize;
	int _cookie;
	int _close;
	int _read;
	int _seek;
	int _write;
	int64_t _ub;
	int _extra;
	int _ur;
	char _ubuf[3];
	char _nbuf;
	int64_t _lb;
	int _blksize;
	int64_t _offset;
};

struct __sbuf
{
	int _base;
	int _size;
};

struct stat
{
	int st_dev;
	int st_ino;
	short st_mode;
	short st_nlink;
	int st_uid;
	int st_gid;
	int st_rdev;
	timespec st_atimespec;
	int64_t st_mtimespec;
	int64_t st_ctimespec;
	int64_t st_size;
	int64_t st_blocks;
	int st_blksize;
	int st_flags;
	int st_gen;
	int st_lspare;
	char st_qspare[16];
};

struct timespec
{
	int tv_sec;
	int tv_nsec;
};

union CInfoPBRec
{
	HFileInfo hFileInfo;
	DirInfo dirInfo;
};

struct HFileInfo
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioFRefNum;
	char ioFVersNum;
	char filler1;
	short ioFDirIndex;
	char ioFlAttrib;
	char ioACUser;
	FInfo ioFlFndrInfo;
	int ioDirID;
	short ioFlStBlk;
	int ioFlLgLen;
	int ioFlPyLen;
	short ioFlRStBlk;
	int ioFlRLgLen;
	int ioFlRPyLen;
	int ioFlCrDat;
	int ioFlMdDat;
	int ioFlBkDat;
	FXInfo ioFlXFndrInfo;
	int ioFlParID;
	int ioFlClpSiz;
};

struct DirInfo
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioFRefNum;
	char ioFVersNum;
	char filler1;
	short ioFDirIndex;
	char ioFlAttrib;
	char ioACUser;
	DInfo ioDrUsrWds;
	int ioDrDirID;
	short ioDrNmFls;
	char filler3[18];
	int ioDrCrDat;
	int ioDrMdDat;
	int ioDrBkDat;
	DXInfo ioDrFndrInfo;
	int ioDrParID;
};

struct FInfo
{
	int fdType;
	int fdCreator;
	short fdFlags;
	Point fdLocation;
	short fdFldr;
};

struct FXInfo
{
	short fdIconID;
	char fdReserved[6];
	char fdScript;
	char fdXFlags;
	short fdComment;
	int fdPutAway;
};

struct DInfo
{
	MacRect frRect;
	short frFlags;
	int frLocation;
	short frView;
};

struct DXInfo
{
	int frScroll;
	int frOpenChain;
	char frScript;
	char frXFlags;
	short frComment;
	int frPutAway;
};

struct QElem
{
	int qLink;
	short qType;
	short qData;
};

struct MacImageInfo
{
	short width;
	short height;
	int rowBytes;
	int data;
};

struct CMacLogFile
{
};

struct StPortState
{
};

struct StGWorldState
{
};

struct StSetDirectory
{
};

struct EventRecord
{
	short what;
	int message;
	int when;
	int where;
	short modifiers;
};

struct FSVolumeInfo
{
	UTCDateTime createDate;
	int64_t modifyDate;
	int64_t backupDate;
	int64_t checkedDate;
	int fileCount;
	int folderCount;
	int64_t totalBytes;
	int64_t freeBytes;
	int blockSize;
	int totalBlocks;
	int freeBlocks;
	int nextAllocation;
	int rsrcClumpSize;
	int dataClumpSize;
	int nextCatalogID;
	char finderInfo[32];
	short flags;
	short filesystemID;
	short signature;
	short driveNumber;
	short driverRefNum;
};

typedef enum
{
	kCFCompareLessThan = -1,
	kCFCompareEqualTo = 0,
	kCFCompareGreaterThan = 1
} _18;

struct GetVolParmsInfoBuffer
{
	short vMVersion;
	int vMAttrib;
	int vMLocalHand;
	int vMServerAdr;
	int vMVolumeGrade;
	short vMForeignPrivID;
	int vMExtendedAttributes;
	int vMDeviceID;
	int vMMaxNameLength;
};

union HParamBlockRec
{
	HIOParam ioParam;
	HFileParam fileParam;
	HVolumeParam volumeParam;
	AccessParam accessParam;
	ObjParam objParam;
	CopyParam copyParam;
	WDParam wdParam;
	FIDParam fidParam;
	CSParam csParam;
	ForeignPrivParam foreignPrivParam;
};

struct HIOParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioRefNum;
	char ioVersNum;
	char ioPermssn;
	int ioMisc;
	int ioBuffer;
	int ioReqCount;
	int ioActCount;
	short ioPosMode;
	int ioPosOffset;
};

struct HFileParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioFRefNum;
	char ioFVersNum;
	char filler1;
	short ioFDirIndex;
	char ioFlAttrib;
	char ioFlVersNum;
	FInfo ioFlFndrInfo;
	int ioDirID;
	short ioFlStBlk;
	int ioFlLgLen;
	int ioFlPyLen;
	short ioFlRStBlk;
	int ioFlRLgLen;
	int ioFlRPyLen;
	int ioFlCrDat;
	int ioFlMdDat;
};

struct HVolumeParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	int filler2;
	short ioVolIndex;
	int ioVCrDate;
	int ioVLsMod;
	short ioVAtrb;
	short ioVNmFls;
	short ioVBitMap;
	short ioAllocPtr;
	short ioVNmAlBlks;
	int ioVAlBlkSiz;
	int ioVClpSiz;
	short ioAlBlSt;
	int ioVNxtCNID;
	short ioVFrBlk;
	short ioVSigWord;
	short ioVDrvInfo;
	short ioVDRefNum;
	short ioVFSID;
	int ioVBkUp;
	short ioVSeqNum;
	int ioVWrCnt;
	int ioVFilCnt;
	int ioVDirCnt;
	char ioVFndrInfo[32];
};

struct AccessParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioRefNum;
	short ioDenyModes;
	short filler4;
	char filler5;
	char ioACUser;
	int filler6;
	int ioACOwnerID;
	int ioACGroupID;
	int ioACAccess;
	int ioDirID;
};

struct ObjParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short filler7;
	short ioObjType;
	int ioObjNamePtr;
	int ioObjID;
};

struct CopyParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioDstVRefNum;
	short filler8;
	int ioNewName;
	int ioCopyName;
	int ioNewDirID;
	int filler14;
	int filler15;
	int ioDirID;
};

struct WDParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	short ioWDCreated;
	short ioWDIndex;
	int ioWDProcID;
	short ioWDVRefNum;
	short filler10;
	int filler11;
	int filler12;
	int filler13;
	int ioWDDirID;
};

struct FIDParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	int filler14;
	int ioDestNamePtr;
	int filler15;
	int ioDestDirID;
	int filler16;
	int filler17;
	int ioSrcDirID;
	short filler18;
	int ioFileID;
};

struct CSParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	int ioMatchPtr;
	int ioReqMatchCount;
	int ioActMatchCount;
	int ioSearchBits;
	int ioSearchInfo1;
	int ioSearchInfo2;
	int ioSearchTime;
	CatPositionRec ioCatPosition;
	int ioOptBuffer;
	int ioOptBufSize;
};

struct ForeignPrivParam
{
	int qLink;
	short qType;
	short ioTrap;
	int ioCmdAddr;
	int ioCompletion;
	short ioResult;
	int ioNamePtr;
	short ioVRefNum;
	int ioFiller21;
	int ioFiller22;
	int ioForeignPrivBuffer;
	int ioForeignPrivActCount;
	int ioForeignPrivReqCount;
	int ioFiller23;
	int ioForeignPrivDirID;
	int ioForeignPrivInfo1;
	int ioForeignPrivInfo2;
	int ioForeignPrivInfo3;
	int ioForeignPrivInfo4;
};

struct CatPositionRec
{
	int initialize;
	char priv[12];
};

struct UnsignedWide
{
	int lo;
	int hi;
};

struct NumVersion
{
	char nonRelRev;
	char stage;
	char minorAndBugRev;
	char majorRev;
};

struct ProcessInfoRec
{
	int processInfoLength;
	int processName;
	int64_t processNumber;
	int processType;
	int processSignature;
	int processMode;
	int processLocation;
	int processSize;
	int processFreeMem;
	int64_t processLauncher;
	int processLaunchDate;
	int processActiveTime;
	int processAppSpec;
};

struct AlertStdCFStringAlertParamRec
{
	int version;
	char movable;
	char helpButton;
	int defaultText;
	int cancelText;
	int otherText;
	short defaultButton;
	short cancelButton;
	short position;
	int flags;
};

struct _OSVERSIONINFOA
{
	int dwOSVersionInfoSize;
	int dwMajorVersion;
	int dwMinorVersion;
	int dwBuildNumber;
	int dwPlatformId;
	char szCSDVersion[128];
};

struct _MEMORYSTATUS
{
	int dwLength;
	int dwMemoryLoad;
	int dwTotalPhys;
	int dwAvailPhys;
	int dwTotalPageFile;
	int dwAvailPageFile;
	int dwTotalVirtual;
	int dwAvailVirtual;
};

union _LARGE_INTEGER
{
	int64_t QuadPart;
};

struct _3464
{
	int LowPart;
	int HighPart;
};

struct _3465
{
	int LowPart;
	int HighPart;
};

struct HWND__
{
	int unused;
};

struct _OVERLAPPED
{
	int Internal;
	int InternalHigh;
	char pad0[8];
	int hEvent;
};

union _3512
{
	int Pointer;
};

struct _3513
{
	int Offset;
	int OffsetHigh;
};

struct _SECURITY_ATTRIBUTES
{
	int nLength;
	int lpSecurityDescriptor;
	int bInheritHandle;
};

struct _opaque_pthread_mutex_t
{
	int __sig;
	char __opaque[40];
};

struct _opaque_pthread_mutexattr_t
{
	int __sig;
	int64_t __opaque;
};

struct _opaque_pthread_t
{
	int __sig;
	int __cleanup_stack;
	char __opaque[596];
};

struct __darwin_pthread_handler_rec
{
	int __routine;
	int __arg;
	int __next;
};

struct sched_param
{
	int sched_priority;
	int opaque;
};

struct _SYSTEMTIME
{
	short wYear;
	short wMonth;
	short wDayOfWeek;
	short wDay;
	short wHour;
	short wMinute;
	short wSecond;
	short wMilliseconds;
};

struct DateTimeRec
{
	short year;
	short month;
	short day;
	short hour;
	short minute;
	short second;
	short dayOfWeek;
};

union _ULARGE_INTEGER
{
	int64_t QuadPart;
};

struct _3466
{
	int LowPart;
	int HighPart;
};

struct _3467
{
	int LowPart;
	int HighPart;
};

struct tagRECT
{
	int left;
	int top;
	int right;
	int bottom;
};

struct tagPOINT
{
	int x;
	int y;
};

struct _FILETIME
{
	int dwLowDateTime;
	int dwHighDateTime;
};

struct LocalDateTime
{
	short highSeconds;
	int lowSeconds;
	short fraction;
};

union LongDateRec
{
	char list[28];
};

struct _614
{
	short era;
	short year;
	short month;
	short day;
	short hour;
	short minute;
	short second;
	short dayOfWeek;
	short dayOfYear;
	short weekOfYear;
	short pm;
	short res1;
	short res2;
	short res3;
};

struct _615
{
	short eraAlt;
	char oldDate[14];
};

struct _MEMORY_BASIC_INFORMATION
{
	int BaseAddress;
	int AllocationBase;
	int AllocationProtect;
	int RegionSize;
	int State;
	int Protect;
	int Type;
};

struct HINSTANCE__
{
	int unused;
};

struct FFData
{
	FFType findType;
	char wildcard[32];
	int items;
	char pad0[4];
	char iterValid;
};

typedef enum
{
	kExactItem = 0,
	kAnyItem = 1,
	kAnyItemType = 2
} FFType;

struct _WIN32_FIND_DATAA
{
	int dwFileAttributes;
	int64_t ftCreationTime;
	int64_t ftLastAccessTime;
	int64_t ftLastWriteTime;
	int nFileSizeHigh;
	int nFileSizeLow;
	int dwReserved0;
	int dwReserved1;
	char cFileName[260];
	char cAlternateFileName[14];
	char pad0[2];
	int dwFileType;
	int dwCreatorType;
	short wFinderFlags;
};

struct FFItem
{
	FSRef ref;
	char name[260];
	int64_t modDate;
	short flags;
};

struct WinCursor
{
};

struct ANIHeader
{
	int cbSizeOf;
	int cFrames;
	int cSteps;
	int cx;
	int cy;
	int cBitCount;
	int cPlanes;
	int JifRate;
	int flags;
};

struct WinIcon
{
};

struct HCURSOR__
{
	int unused;
};

struct tagBITMAPINFOHEADER
{
	int biSize;
	int biWidth;
	int biHeight;
	short biPlanes;
	short biBitCount;
	int biCompression;
	int biSizeImage;
	int biXPelsPerMeter;
	int biYPelsPerMeter;
	int biClrUsed;
	int biClrImportant;
};

struct tagRGBQUAD
{
	char rgbBlue;
	char rgbGreen;
	char rgbRed;
	char rgbReserved;
};

struct Cursor
{
	char data[32];
	char mask[32];
	Point hotSpot;
};

struct CColorConverter
{
	int CColorConverter;
};

typedef enum
{
	ATI_4_COMPS_CONVERTER_ARGB = 0,
	ATI_4_COMPS_CONVERTER_ABGR = 1,
	STD_CONVERTER_ARGB = 2,
	STD_CONVERTER_ABGR = 3,
	UNKNOWN_CONVERTER = 4
} ConverterType;

struct ATI4CompsConverterARGB
{
};

struct ATI4CompsConverterABGR
{
};

struct StdConverterARGB
{
};

struct StdConverterABGR
{
};

typedef enum
{
	ARGB = 0,
	ABGR = 1
} Format;

struct StColorConverter
{
};

struct CDirect3D
{
};

struct IDirect3D9
{
};

typedef enum
{
	D3DFMT_UNKNOWN = 0,
	D3DFMT_R8G8B8 = 20,
	D3DFMT_A8R8G8B8 = 21,
	D3DFMT_X8R8G8B8 = 22,
	D3DFMT_R5G6B5 = 23,
	D3DFMT_X1R5G5B5 = 24,
	D3DFMT_A1R5G5B5 = 25,
	D3DFMT_A4R4G4B4 = 26,
	D3DFMT_R3G3B2 = 27,
	D3DFMT_A8 = 28,
	D3DFMT_A8R3G3B2 = 29,
	D3DFMT_X4R4G4B4 = 30,
	D3DFMT_A2B10G10R10 = 31,
	D3DFMT_A8B8G8R8 = 32,
	D3DFMT_X8B8G8R8 = 33,
	D3DFMT_G16R16 = 34,
	D3DFMT_A2R10G10B10 = 35,
	D3DFMT_A16B16G16R16 = 36,
	D3DFMT_A8P8 = 40,
	D3DFMT_P8 = 41,
	D3DFMT_L8 = 50,
	D3DFMT_A8L8 = 51,
	D3DFMT_A4L4 = 52,
	D3DFMT_V8U8 = 60,
	D3DFMT_L6V5U5 = 61,
	D3DFMT_X8L8V8U8 = 62,
	D3DFMT_Q8W8V8U8 = 63,
	D3DFMT_V16U16 = 64,
	D3DFMT_A2W10V10U10 = 67,
	D3DFMT_UYVY = 1498831189,
	D3DFMT_R8G8_B8G8 = 1195525970,
	D3DFMT_YUY2 = 844715353,
	D3DFMT_G8R8_G8B8 = 1111970375,
	D3DFMT_DXT1 = 827611204,
	D3DFMT_DXT2 = 844388420,
	D3DFMT_DXT3 = 861165636,
	D3DFMT_DXT4 = 877942852,
	D3DFMT_DXT5 = 894720068,
	D3DFMT_D16_LOCKABLE = 70,
	D3DFMT_D32 = 71,
	D3DFMT_D15S1 = 73,
	D3DFMT_D24S8 = 75,
	D3DFMT_D24X8 = 77,
	D3DFMT_D24X4S4 = 79,
	D3DFMT_D16 = 80,
	D3DFMT_D32F_LOCKABLE = 82,
	D3DFMT_D24FS8 = 83,
	D3DFMT_L16 = 81,
	D3DFMT_VERTEXDATA = 100,
	D3DFMT_INDEX16 = 101,
	D3DFMT_INDEX32 = 102,
	D3DFMT_Q16W16V16U16 = 110,
	D3DFMT_MULTI2_ARGB8 = 827606349,
	D3DFMT_R16F = 111,
	D3DFMT_G16R16F = 112,
	D3DFMT_A16B16G16R16F = 113,
	D3DFMT_R32F = 114,
	D3DFMT_G32R32F = 115,
	D3DFMT_A32B32G32R32F = 116,
	D3DFMT_CxV8U8 = 117,
	D3DFMT_FORCE_DWORD = 2147483647
} _D3DFORMAT;

typedef enum
{
	D3DDEVTYPE_HAL = 1,
	D3DDEVTYPE_REF = 2,
	D3DDEVTYPE_SW = 3,
	D3DDEVTYPE_NULLREF = 4,
	D3DDEVTYPE_FORCE_DWORD = 2147483647
} _D3DDEVTYPE;

typedef enum
{
	D3DRTYPE_SURFACE = 1,
	D3DRTYPE_VOLUME = 2,
	D3DRTYPE_TEXTURE = 3,
	D3DRTYPE_VOLUMETEXTURE = 4,
	D3DRTYPE_CUBETEXTURE = 5,
	D3DRTYPE_VERTEXBUFFER = 6,
	D3DRTYPE_INDEXBUFFER = 7,
	D3DRTYPE_FORCE_DWORD = 2147483647
} _D3DRESOURCETYPE;

typedef enum
{
	D3DMULTISAMPLE_NONE = 0,
	D3DMULTISAMPLE_NONMASKABLE = 1,
	D3DMULTISAMPLE_2_SAMPLES = 2,
	D3DMULTISAMPLE_3_SAMPLES = 3,
	D3DMULTISAMPLE_4_SAMPLES = 4,
	D3DMULTISAMPLE_5_SAMPLES = 5,
	D3DMULTISAMPLE_6_SAMPLES = 6,
	D3DMULTISAMPLE_7_SAMPLES = 7,
	D3DMULTISAMPLE_8_SAMPLES = 8,
	D3DMULTISAMPLE_9_SAMPLES = 9,
	D3DMULTISAMPLE_10_SAMPLES = 10,
	D3DMULTISAMPLE_11_SAMPLES = 11,
	D3DMULTISAMPLE_12_SAMPLES = 12,
	D3DMULTISAMPLE_13_SAMPLES = 13,
	D3DMULTISAMPLE_14_SAMPLES = 14,
	D3DMULTISAMPLE_15_SAMPLES = 15,
	D3DMULTISAMPLE_16_SAMPLES = 16,
	D3DMULTISAMPLE_FORCE_DWORD = 2147483647
} _D3DMULTISAMPLE_TYPE;

struct IUnknown
{
	int IUnknown;
};

struct HMONITOR__
{
	int unused;
};

struct _D3DADAPTER_IDENTIFIER9
{
	char Driver[512];
	char Description[512];
	char DeviceName[32];
	LARGE_INTEGER DriverVersion;
	int VendorId;
	int DeviceId;
	int SubSysId;
	int Revision;
	char DeviceIdentifier[16];
	int WHQLLevel;
};

struct _D3DDISPLAYMODE
{
	int Width;
	int Height;
	int RefreshRate;
	int Format;
};

struct _D3DCAPS9
{
	int DeviceType;
	int AdapterOrdinal;
	int Caps;
	int Caps2;
	int Caps3;
	int PresentationIntervals;
	int CursorCaps;
	int DevCaps;
	int PrimitiveMiscCaps;
	int RasterCaps;
	int ZCmpCaps;
	int SrcBlendCaps;
	int DestBlendCaps;
	int AlphaCmpCaps;
	int ShadeCaps;
	int TextureCaps;
	int TextureFilterCaps;
	int CubeTextureFilterCaps;
	int VolumeTextureFilterCaps;
	int TextureAddressCaps;
	int VolumeTextureAddressCaps;
	int LineCaps;
	int MaxTextureWidth;
	int MaxTextureHeight;
	int MaxVolumeExtent;
	int MaxTextureRepeat;
	int MaxTextureAspectRatio;
	int MaxAnisotropy;
	int MaxVertexW;
	int GuardBandLeft;
	int GuardBandTop;
	int GuardBandRight;
	int GuardBandBottom;
	int ExtentsAdjust;
	int StencilCaps;
	int FVFCaps;
	int TextureOpCaps;
	int MaxTextureBlendStages;
	int MaxSimultaneousTextures;
	int VertexProcessingCaps;
	int MaxActiveLights;
	int MaxUserClipPlanes;
	int MaxVertexBlendMatrices;
	int MaxVertexBlendMatrixIndex;
	int MaxPointSize;
	int MaxPrimitiveCount;
	int MaxVertexIndex;
	int MaxStreams;
	int MaxStreamStride;
	int VertexShaderVersion;
	int MaxVertexShaderConst;
	int PixelShaderVersion;
	int PixelShader1xMaxValue;
	int DevCaps2;
	int MaxNpatchTessellationLevel;
	int Reserved5;
	int MasterAdapterOrdinal;
	int AdapterOrdinalInGroup;
	int NumberOfAdaptersInGroup;
	int DeclTypes;
	int NumSimultaneousRTs;
	int StretchRectFilterCaps;
	D3DVSHADERCAPS2_0 VS20Caps;
	D3DPSHADERCAPS2_0 PS20Caps;
	int VertexTextureFilterCaps;
	int MaxVShaderInstructionsExecuted;
	int MaxPShaderInstructionsExecuted;
	int MaxVertexShader30InstructionSlots;
	int MaxPixelShader30InstructionSlots;
};

struct _D3DPRESENT_PARAMETERS_
{
	int BackBufferWidth;
	int BackBufferHeight;
	int BackBufferFormat;
	int BackBufferCount;
	int MultiSampleType;
	int MultiSampleQuality;
	D3DSWAPEFFECT SwapEffect;
	int hDeviceWindow;
	int Windowed;
	int EnableAutoDepthStencil;
	int AutoDepthStencilFormat;
	int Flags;
	int FullScreen_RefreshRateInHz;
	int PresentationInterval;
};

struct _D3DVSHADERCAPS2_0
{
	int Caps;
	int DynamicFlowControlDepth;
	int NumTemps;
	int StaticFlowControlDepth;
};

struct _D3DPSHADERCAPS2_0
{
	int Caps;
	int DynamicFlowControlDepth;
	int NumTemps;
	int StaticFlowControlDepth;
	int NumInstructionSlots;
};

typedef enum
{
	D3DSWAPEFFECT_DISCARD = 1,
	D3DSWAPEFFECT_FLIP = 2,
	D3DSWAPEFFECT_COPY = 3,
	D3DSWAPEFFECT_FORCE_DWORD = 2147483647
} _D3DSWAPEFFECT;

struct IDirect3DDevice9
{
};

struct _GUID
{
	int Data1;
	short Data2;
	short Data3;
	int64_t Data4;
};

typedef enum
{
	D3DBACKBUFFER_TYPE_MONO = 0,
	D3DBACKBUFFER_TYPE_LEFT = 1,
	D3DBACKBUFFER_TYPE_RIGHT = 2,
	D3DBACKBUFFER_TYPE_FORCE_DWORD = 2147483647
} _D3DBACKBUFFER_TYPE;

typedef enum
{
	D3DPOOL_DEFAULT = 0,
	D3DPOOL_MANAGED = 1,
	D3DPOOL_SYSTEMMEM = 2,
	D3DPOOL_SCRATCH = 3,
	D3DPOOL_FORCE_DWORD = 2147483647
} _D3DPOOL;

typedef enum
{
	D3DTEXF_NONE = 0,
	D3DTEXF_POINT = 1,
	D3DTEXF_LINEAR = 2,
	D3DTEXF_ANISOTROPIC = 3,
	D3DTEXF_PYRAMIDALQUAD = 6,
	D3DTEXF_GAUSSIANQUAD = 7,
	D3DTEXF_FORCE_DWORD = 2147483647
} _D3DTEXTUREFILTERTYPE;

typedef enum
{
	D3DTS_VIEW = 2,
	D3DTS_PROJECTION = 3,
	D3DTS_TEXTURE0 = 16,
	D3DTS_TEXTURE1 = 17,
	D3DTS_TEXTURE2 = 18,
	D3DTS_TEXTURE3 = 19,
	D3DTS_TEXTURE4 = 20,
	D3DTS_TEXTURE5 = 21,
	D3DTS_TEXTURE6 = 22,
	D3DTS_TEXTURE7 = 23,
	D3DTS_FORCE_DWORD = 2147483647
} _D3DTRANSFORMSTATETYPE;

typedef enum
{
	D3DRS_ZENABLE = 7,
	D3DRS_FILLMODE = 8,
	D3DRS_SHADEMODE = 9,
	D3DRS_ZWRITEENABLE = 14,
	D3DRS_ALPHATESTENABLE = 15,
	D3DRS_LASTPIXEL = 16,
	D3DRS_SRCBLEND = 19,
	D3DRS_DESTBLEND = 20,
	D3DRS_CULLMODE = 22,
	D3DRS_ZFUNC = 23,
	D3DRS_ALPHAREF = 24,
	D3DRS_ALPHAFUNC = 25,
	D3DRS_DITHERENABLE = 26,
	D3DRS_ALPHABLENDENABLE = 27,
	D3DRS_FOGENABLE = 28,
	D3DRS_SPECULARENABLE = 29,
	D3DRS_FOGCOLOR = 34,
	D3DRS_FOGTABLEMODE = 35,
	D3DRS_FOGSTART = 36,
	D3DRS_FOGEND = 37,
	D3DRS_FOGDENSITY = 38,
	D3DRS_RANGEFOGENABLE = 48,
	D3DRS_STENCILENABLE = 52,
	D3DRS_STENCILFAIL = 53,
	D3DRS_STENCILZFAIL = 54,
	D3DRS_STENCILPASS = 55,
	D3DRS_STENCILFUNC = 56,
	D3DRS_STENCILREF = 57,
	D3DRS_STENCILMASK = 58,
	D3DRS_STENCILWRITEMASK = 59,
	D3DRS_TEXTUREFACTOR = 60,
	D3DRS_WRAP0 = 128,
	D3DRS_WRAP1 = 129,
	D3DRS_WRAP2 = 130,
	D3DRS_WRAP3 = 131,
	D3DRS_WRAP4 = 132,
	D3DRS_WRAP5 = 133,
	D3DRS_WRAP6 = 134,
	D3DRS_WRAP7 = 135,
	D3DRS_CLIPPING = 136,
	D3DRS_LIGHTING = 137,
	D3DRS_AMBIENT = 139,
	D3DRS_FOGVERTEXMODE = 140,
	D3DRS_COLORVERTEX = 141,
	D3DRS_LOCALVIEWER = 142,
	D3DRS_NORMALIZENORMALS = 143,
	D3DRS_DIFFUSEMATERIALSOURCE = 145,
	D3DRS_SPECULARMATERIALSOURCE = 146,
	D3DRS_AMBIENTMATERIALSOURCE = 147,
	D3DRS_EMISSIVEMATERIALSOURCE = 148,
	D3DRS_VERTEXBLEND = 151,
	D3DRS_CLIPPLANEENABLE = 152,
	D3DRS_POINTSIZE = 154,
	D3DRS_POINTSIZE_MIN = 155,
	D3DRS_POINTSPRITEENABLE = 156,
	D3DRS_POINTSCALEENABLE = 157,
	D3DRS_POINTSCALE_A = 158,
	D3DRS_POINTSCALE_B = 159,
	D3DRS_POINTSCALE_C = 160,
	D3DRS_MULTISAMPLEANTIALIAS = 161,
	D3DRS_MULTISAMPLEMASK = 162,
	D3DRS_PATCHEDGESTYLE = 163,
	D3DRS_DEBUGMONITORTOKEN = 165,
	D3DRS_POINTSIZE_MAX = 166,
	D3DRS_INDEXEDVERTEXBLENDENABLE = 167,
	D3DRS_COLORWRITEENABLE = 168,
	D3DRS_TWEENFACTOR = 170,
	D3DRS_BLENDOP = 171,
	D3DRS_POSITIONDEGREE = 172,
	D3DRS_NORMALDEGREE = 173,
	D3DRS_SCISSORTESTENABLE = 174,
	D3DRS_SLOPESCALEDEPTHBIAS = 175,
	D3DRS_ANTIALIASEDLINEENABLE = 176,
	D3DRS_MINTESSELLATIONLEVEL = 178,
	D3DRS_MAXTESSELLATIONLEVEL = 179,
	D3DRS_ADAPTIVETESS_X = 180,
	D3DRS_ADAPTIVETESS_Y = 181,
	D3DRS_ADAPTIVETESS_Z = 182,
	D3DRS_ADAPTIVETESS_W = 183,
	D3DRS_ENABLEADAPTIVETESSELLATION = 184,
	D3DRS_TWOSIDEDSTENCILMODE = 185,
	D3DRS_CCW_STENCILFAIL = 186,
	D3DRS_CCW_STENCILZFAIL = 187,
	D3DRS_CCW_STENCILPASS = 188,
	D3DRS_CCW_STENCILFUNC = 189,
	D3DRS_COLORWRITEENABLE1 = 190,
	D3DRS_COLORWRITEENABLE2 = 191,
	D3DRS_COLORWRITEENABLE3 = 192,
	D3DRS_BLENDFACTOR = 193,
	D3DRS_SRGBWRITEENABLE = 194,
	D3DRS_DEPTHBIAS = 195,
	D3DRS_WRAP8 = 198,
	D3DRS_WRAP9 = 199,
	D3DRS_WRAP10 = 200,
	D3DRS_WRAP11 = 201,
	D3DRS_WRAP12 = 202,
	D3DRS_WRAP13 = 203,
	D3DRS_WRAP14 = 204,
	D3DRS_WRAP15 = 205,
	D3DRS_SEPARATEALPHABLENDENABLE = 206,
	D3DRS_SRCBLENDALPHA = 207,
	D3DRS_DESTBLENDALPHA = 208,
	D3DRS_BLENDOPALPHA = 209,
	D3DRS_FORCE_DWORD = 2147483647
} _D3DRENDERSTATETYPE;

typedef enum
{
	D3DSBT_ALL = 1,
	D3DSBT_PIXELSTATE = 2,
	D3DSBT_VERTEXSTATE = 3,
	D3DSBT_FORCE_DWORD = 2147483647
} _D3DSTATEBLOCKTYPE;

typedef enum
{
	D3DTSS_COLOROP = 1,
	D3DTSS_COLORARG1 = 2,
	D3DTSS_COLORARG2 = 3,
	D3DTSS_ALPHAOP = 4,
	D3DTSS_ALPHAARG1 = 5,
	D3DTSS_ALPHAARG2 = 6,
	D3DTSS_BUMPENVMAT00 = 7,
	D3DTSS_BUMPENVMAT01 = 8,
	D3DTSS_BUMPENVMAT10 = 9,
	D3DTSS_BUMPENVMAT11 = 10,
	D3DTSS_TEXCOORDINDEX = 11,
	D3DTSS_BUMPENVLSCALE = 22,
	D3DTSS_BUMPENVLOFFSET = 23,
	D3DTSS_TEXTURETRANSFORMFLAGS = 24,
	D3DTSS_COLORARG0 = 26,
	D3DTSS_ALPHAARG0 = 27,
	D3DTSS_RESULTARG = 28,
	D3DTSS_CONSTANT = 32,
	D3DTSS_FORCE_DWORD = 2147483647
} _D3DTEXTURESTAGESTATETYPE;

typedef enum
{
	D3DSAMP_ADDRESSU = 1,
	D3DSAMP_ADDRESSV = 2,
	D3DSAMP_ADDRESSW = 3,
	D3DSAMP_BORDERCOLOR = 4,
	D3DSAMP_MAGFILTER = 5,
	D3DSAMP_MINFILTER = 6,
	D3DSAMP_MIPFILTER = 7,
	D3DSAMP_MIPMAPLODBIAS = 8,
	D3DSAMP_MAXMIPLEVEL = 9,
	D3DSAMP_MAXANISOTROPY = 10,
	D3DSAMP_SRGBTEXTURE = 11,
	D3DSAMP_ELEMENTINDEX = 12,
	D3DSAMP_DMAPOFFSET = 13,
	D3DSAMP_FORCE_DWORD = 2147483647
} _D3DSAMPLERSTATETYPE;

typedef enum
{
	D3DPT_POINTLIST = 1,
	D3DPT_LINELIST = 2,
	D3DPT_LINESTRIP = 3,
	D3DPT_TRIANGLELIST = 4,
	D3DPT_TRIANGLESTRIP = 5,
	D3DPT_TRIANGLEFAN = 6,
	D3DPT_FORCE_DWORD = 2147483647
} _D3DPRIMITIVETYPE;

typedef enum
{
	D3DQUERYTYPE_VCACHE = 4,
	D3DQUERYTYPE_RESOURCEMANAGER = 5,
	D3DQUERYTYPE_VERTEXSTATS = 6,
	D3DQUERYTYPE_EVENT = 8,
	D3DQUERYTYPE_OCCLUSION = 9,
	D3DQUERYTYPE_TIMESTAMP = 10,
	D3DQUERYTYPE_TIMESTAMPDISJOINT = 11,
	D3DQUERYTYPE_TIMESTAMPFREQ = 12,
	D3DQUERYTYPE_PIPELINETIMINGS = 13,
	D3DQUERYTYPE_INTERFACETIMINGS = 14,
	D3DQUERYTYPE_VERTEXTIMINGS = 15,
	D3DQUERYTYPE_PIXELTIMINGS = 16,
	D3DQUERYTYPE_BANDWIDTHTIMINGS = 17,
	D3DQUERYTYPE_CACHEUTILIZATION = 18
} _D3DQUERYTYPE;

struct _D3DDEVICE_CREATION_PARAMETERS
{
	int AdapterOrdinal;
	int DeviceType;
	int hFocusWindow;
	int BehaviorFlags;
};

struct IDirect3DSurface9
{
};

struct _D3DRASTER_STATUS
{
	int InVBlank;
	int ScanLine;
};

struct IDirect3DBaseTexture9
{
};

struct _D3DMATRIX
{
};

struct _D3DVIEWPORT9
{
	int X;
	int Y;
	int Width;
	int Height;
	int MinZ;
	int MaxZ;
};

struct _D3DMATERIAL9
{
	D3DCOLORVALUE Diffuse;
	char Ambient[16];
	char Specular[16];
	char Emissive[16];
	int Power;
};

struct _D3DLIGHT9
{
	D3DLIGHTTYPE Type;
	char Diffuse[16];
	char Specular[16];
	char Ambient[16];
	D3DVECTOR Position;
	char Direction[12];
	int Range;
	int Falloff;
	int Attenuation0;
	int Attenuation1;
	int Attenuation2;
	int Theta;
	int Phi;
};

struct _D3DCLIPSTATUS9
{
	int ClipUnion;
	int ClipIntersection;
};

struct tagPALETTEENTRY
{
	char peRed;
	char peGreen;
	char peBlue;
	char peFlags;
};

struct IDirect3DVertexBuffer9
{
};

struct IDirect3DVertexDeclaration9
{
};

struct IDirect3DVertexShader9
{
};

struct IDirect3DIndexBuffer9
{
};

struct IDirect3DPixelShader9
{
};

struct IDirect3DResource9
{
};

struct IDirect3DSwapChain9
{
};

struct _RGNDATA
{
	RGNDATAHEADER rdh;
	char Buffer;
};

struct IDirect3DTexture9
{
};

struct IDirect3DVolumeTexture9
{
};

struct IDirect3DCubeTexture9
{
};

struct _D3DRECT
{
	int x1;
	int y1;
	int x2;
	int y2;
};

union _3550
{
	char m[64];
};

struct _D3DCOLORVALUE
{
	int r;
	int g;
	int b;
	int a;
};

typedef enum
{
	D3DLIGHT_POINT = 1,
	D3DLIGHT_SPOT = 2,
	D3DLIGHT_DIRECTIONAL = 3,
	D3DLIGHT_FORCE_DWORD = 2147483647
} _D3DLIGHTTYPE;

struct _D3DVECTOR
{
	int x;
	int y;
	int z;
};

struct IDirect3DStateBlock9
{
};

struct _D3DVERTEXELEMENT9
{
	short Stream;
	short Offset;
	char Type;
	char Method;
	char Usage;
	char UsageIndex;
};

struct _D3DRECTPATCH_INFO
{
	int StartVertexOffsetWidth;
	int StartVertexOffsetHeight;
	int Width;
	int Height;
	int Stride;
	D3DBASISTYPE Basis;
	D3DDEGREETYPE Degree;
};

struct _D3DTRIPATCH_INFO
{
	int StartVertexOffset;
	int NumVertices;
	int Basis;
	int Degree;
};

struct IDirect3DQuery9
{
};

struct HDC__
{
	int unused;
};

struct _RGNDATAHEADER
{
	int dwSize;
	int iType;
	int nCount;
	int nRgnSize;
	char rcBound[16];
};

typedef enum
{
	D3DCUBEMAP_FACE_POSITIVE_X = 0,
	D3DCUBEMAP_FACE_NEGATIVE_X = 1,
	D3DCUBEMAP_FACE_POSITIVE_Y = 2,
	D3DCUBEMAP_FACE_NEGATIVE_Y = 3,
	D3DCUBEMAP_FACE_POSITIVE_Z = 4,
	D3DCUBEMAP_FACE_NEGATIVE_Z = 5,
	D3DCUBEMAP_FACE_FORCE_DWORD = 2147483647
} _D3DCUBEMAP_FACES;

struct _3551
{
	int _11;
	int _12;
	int _13;
	int _14;
	int _21;
	int _22;
	int _23;
	int _24;
	int _31;
	int _32;
	int _33;
	int _34;
	int _41;
	int _42;
	int _43;
	int _44;
};

typedef enum
{
	D3DBASIS_BEZIER = 0,
	D3DBASIS_BSPLINE = 1,
	D3DBASIS_CATMULL_ROM = 2,
	D3DBASIS_FORCE_DWORD = 2147483647
} _D3DBASISTYPE;

typedef enum
{
	D3DDEGREE_LINEAR = 1,
	D3DDEGREE_QUADRATIC = 2,
	D3DDEGREE_CUBIC = 3,
	D3DDEGREE_QUINTIC = 5,
	D3DDEGREE_FORCE_DWORD = 2147483647
} _D3DDEGREETYPE;

struct _D3DSURFACE_DESC
{
	int Format;
	int Type;
	int Usage;
	int Pool;
	int MultiSampleType;
	int MultiSampleQuality;
	int Width;
	int Height;
};

struct _D3DLOCKED_RECT
{
	int Pitch;
	int pBits;
};

struct _D3DVERTEXBUFFER_DESC
{
	int Format;
	int Type;
	int Usage;
	int Pool;
	int Size;
	int FVF;
};

struct _D3DINDEXBUFFER_DESC
{
	int Format;
	int Type;
	int Usage;
	int Pool;
	int Size;
};

struct _D3DVOLUME_DESC
{
	int Format;
	int Type;
	int Usage;
	int Pool;
	int Width;
	int Height;
	int Depth;
};

struct _D3DLOCKED_BOX
{
	int RowPitch;
	int SlicePitch;
	int pBits;
};

struct IDirect3DVolume9
{
};

struct _D3DBOX
{
	int Left;
	int Top;
	int Right;
	int Bottom;
	int Front;
	int Back;
};

struct CVAOPacketFixedFunction
{
};

struct CVAOPacket
{
};

struct COpenGLVAO
{
	int COpenGLVAO;
	char pad0[4];
	int mpVAStart;
	int mSize;
	CColorArray mColorArray;
	CSecondaryColorArray mSecondaryColorArray;
	CNormalArray mNormalArray;
	CVertexArray mVertexArray;
	char mTexCoordArrays[192];
	char mGenericArrays[384];
};

typedef enum
{
	UNINITIALIZED_VAO_STATUS = 0,
	USING_GENERIC_VAO = 1,
	USING_VIRGIN_VAO = 2,
	USING_CACHED_VAO = 3
} VAOStatus;

struct CColorArray
{
};

struct CSecondaryColorArray
{
};

struct CNormalArray
{
};

struct CVertexArray
{
};

struct CBaseVA
{
	int CBaseVA;
};

struct CTexCoordArray
{
};

struct VertexProgramStreamState
{
	char mNeedsValidation;
	char mEnabled;
	char pad0[2];
	int mVSize;
	int mVType;
	char mNormalized;
	char pad1[3];
	int mStride;
	int mpStream;
};

struct CVAOPacketProgrammable
{
};

struct CDirect3DDevice
{
};

struct COpenGLMatrix
{
};

typedef enum
{
	ATITextFragmentProgram = 0,
	NVidiaRegisterCombinersProgram = 1,
	ARBFragmentProgram = 2
} OpenGLPixelShaderType;

struct ProgrammableShaderType
{
	char mUsed;
	char pad0[3];
	int mStream;
	int mStreamOffset;
	int mVSize;
	int mVType;
	char mNormalized;
	char pad1[3];
	int mStride;
};

struct DXVector3
{
	char m[12];
};

struct LightInfoType
{
	char Enabled;
	char pad0[3];
	int Type;
	int Range;
	DXVector4 Diffuse;
	char Specular[16];
	char Ambient[16];
	char Direction[12];
	char Position[12];
	char DirectionCS[12];
	int Exponent;
	int Cutoff;
	int Theta;
	int Phi;
	int Falloff;
	int Attenuation0;
	int Attenuation1;
	int Attenuation2;
	char CSDirection[12];
	char CSPosition[12];
	int Range2;
	char VdLd[12];
	int CosHalfTheta;
	int CosHalfPhi;
	int C1;
};

struct CDirect3DVertexShader
{
};

struct CDirect3DPixelShader
{
};

struct CTexStage
{
};

struct DXVector4
{
	char m[16];
};

struct COpenGLVertexProgram
{
	int COpenGLVertexProgram;
};

typedef enum
{
	D3DTADDRESS_WRAP = 1,
	D3DTADDRESS_MIRROR = 2,
	D3DTADDRESS_CLAMP = 3,
	D3DTADDRESS_BORDER = 4,
	D3DTADDRESS_MIRRORONCE = 5,
	D3DTADDRESS_FORCE_DWORD = 2147483647
} _D3DTEXTUREADDRESS;

typedef enum
{
	D3DTOP_DISABLE = 1,
	D3DTOP_SELECTARG1 = 2,
	D3DTOP_SELECTARG2 = 3,
	D3DTOP_MODULATE = 4,
	D3DTOP_MODULATE2X = 5,
	D3DTOP_MODULATE4X = 6,
	D3DTOP_ADD = 7,
	D3DTOP_ADDSIGNED = 8,
	D3DTOP_ADDSIGNED2X = 9,
	D3DTOP_SUBTRACT = 10,
	D3DTOP_ADDSMOOTH = 11,
	D3DTOP_BLENDDIFFUSEALPHA = 12,
	D3DTOP_BLENDTEXTUREALPHA = 13,
	D3DTOP_BLENDFACTORALPHA = 14,
	D3DTOP_BLENDTEXTUREALPHAPM = 15,
	D3DTOP_BLENDCURRENTALPHA = 16,
	D3DTOP_PREMODULATE = 17,
	D3DTOP_MODULATEALPHA_ADDCOLOR = 18,
	D3DTOP_MODULATECOLOR_ADDALPHA = 19,
	D3DTOP_MODULATEINVALPHA_ADDCOLOR = 20,
	D3DTOP_MODULATEINVCOLOR_ADDALPHA = 21,
	D3DTOP_BUMPENVMAP = 22,
	D3DTOP_BUMPENVMAPLUMINANCE = 23,
	D3DTOP_DOTPRODUCT3 = 24,
	D3DTOP_MULTIPLYADD = 25,
	D3DTOP_LERP = 26,
	D3DTOP_FORCE_DWORD = 2147483647
} _D3DTEXTUREOP;

typedef enum
{
	D3DTTFF_DISABLE = 0,
	D3DTTFF_COUNT1 = 1,
	D3DTTFF_COUNT2 = 2,
	D3DTTFF_COUNT3 = 3,
	D3DTTFF_COUNT4 = 4,
	D3DTTFF_PROJECTED = 256,
	D3DTTFF_FORCE_DWORD = 2147483647
} _D3DTEXTURETRANSFORMFLAGS;

struct VertexProgramState
{
	int mOpenGLProgramID;
	char mStreams[384];
};

struct CDirect3DVertexBuffer
{
};

struct CMemoryBuffer
{
	int CMemoryBuffer;
};

typedef enum
{
	IS_OWNER = 0,
	IS_NOT_OWNER = 1
} OwnershipType;

struct CStaticCacheInfo
{
	int CStaticCacheInfo;
};

struct _List_impl
{
	_List_node_base _M_node;
};

struct _List_node_base
{
	int _M_next;
	int _M_prev;
};

struct CCacheInfoBlock
{
	int CCacheInfoBlock;
};

struct CTexUnit
{
	char mIsProgramableOnly;
	char mTargetEnabled[3];
	char mTexID[12];
	char mTexWrapS[12];
	char mTexWrapT[12];
	char mTexWrapR[12];
	char mTexBorderColor[12];
	char mTexMinFilter[12];
	char mTexMagFilter[12];
	char mTexAnisotropicFilter[12];
	char mTexLastLevel[12];
	int mCombinerColorOp;
	int mCombinerColorSource0;
	int mCombinerColorOperand0;
	int mCombinerColorSource1;
	int mCombinerColorOperand1;
	int mCombinerColorSource2;
	int mCombinerColorOperand2;
	int mCombinerAlphaOp;
	int mCombinerAlphaSource0;
	int mCombinerAlphaOperand0;
	int mCombinerAlphaSource1;
	int mCombinerAlphaOperand1;
	int mCombinerAlphaSource2;
	int mCombinerAlphaOperand2;
	int mCombinerRGBScale;
	int mCombinerAlphaScale;
	char mTexFactor[16];
	int mLodBias;
	char mTexMatrix[64];
	char mTexCoordArray[24];
	int mTexGenEnable;
	char mTexGenMode[16];
};

struct COpenGL
{
	int COpenGL;
};

struct COpenGLTexture
{
	int COpenGLTexture;
};

struct TextureInfoType
{
	int mpTexID;
	int mTexWrapS;
	int mTexWrapT;
	int mTexWrapR;
	int mTexBorderColor;
	int mTexMinFilter;
	int mTexMagFilter;
	int mTexLastLevel;
	int mTexAnisotropicFilter;
};

struct ParameterType
{
	int NeedsValidation;
	char v[16];
};

struct D3DXMATRIX
{
};

struct D3DXFLOAT16
{
};

struct D3DXVECTOR4
{
	int x;
	int y;
	int z;
	int w;
};

struct AttribInfo
{
	int Size;
	int Stride;
	int Type;
	int Ptr;
	char Storage[16];
};

struct CDirect3DTexture
{
};

struct CDirect3DSurface
{
};

typedef enum
{
	TEXTURE_SURFACE = 0,
	CUBE_SURFACE = 1,
	VOLUME_SURFACE = 2
} SurfaceType;

struct CDirect3DVolumeTexture
{
};

struct CDirect3DVolume
{
};

struct CDirect3DCubeTexture
{
};

struct __true_type
{
};

struct CDirect3DIndexBuffer
{
};

struct COpenGLATITextFragmentShader
{
};

struct COpenGLNVidiaRegisterCombinersProgram
{
};

struct COpenGLARBFragmentProgram
{
};

struct CDirect3DSwapChain
{
};

struct CFence
{
};

struct CDirect3DVertexDeclaration
{
};

struct FreeRequest
{
	int mPtr;
	int mLength;
	int mDelay;
};

struct OpenGLStateInfoType
{
	int PName;
	OGLSITPTypes PType;
	int SName;
};

typedef enum
{
	BOOLEAN = 0,
	INT = 1,
	FLOAT = 2,
	FOUR_BOOLEANS = 3,
	FOUR_FLOATS = 4,
	THREE_FLOATS = 5,
	MATRIX = 6,
	FOUR_INTS = 7,
	LFOUR_FLOATS = 8,
	LFLOAT = 9,
	MFOUR_FLOATS = 10,
	MFLOAT = 11,
	TEFOUR_FLOATS = 12,
	TEINT = 13,
	TGFOUR_FLOATS = 14,
	TGINT = 15
} OGLSITPTypes;

struct D3DXVECTOR3
{
};

typedef enum
{
	D3DXIFF_BMP = 0,
	D3DXIFF_JPG = 1,
	D3DXIFF_TGA = 2,
	D3DXIFF_PNG = 3,
	D3DXIFF_DDS = 4,
	D3DXIFF_PPM = 5,
	D3DXIFF_DIB = 6,
	D3DXIFF_HDR = 7,
	D3DXIFF_PFM = 8,
	D3DXIFF_FORCE_DWORD = 2147483647
} _D3DXIMAGE_FILEFORMAT;

struct _D3DXIMAGE_INFO
{
	int Width;
	int Height;
	int Depth;
	int MipLevels;
	int Format;
	int ResourceType;
	int ImageFileFormat;
};

struct ID3DXFont
{
};

struct ID3DXSprite
{
};

struct _D3DXFONT_DESCA
{
	int Height;
	int Width;
	int Weight;
	int MipLevels;
	int Italic;
	char CharSet;
	char OutputPrecision;
	char Quality;
	char PitchAndFamily;
	char FaceName[32];
};

struct _D3DXFONT_DESCW
{
	int Height;
	int Width;
	int Weight;
	int MipLevels;
	int Italic;
	char CharSet;
	char OutputPrecision;
	char Quality;
	char PitchAndFamily;
	char FaceName[128];
};

struct tagTEXTMETRICA
{
	int tmHeight;
	int tmAscent;
	int tmDescent;
	int tmInternalLeading;
	int tmExternalLeading;
	int tmAveCharWidth;
	int tmMaxCharWidth;
	int tmWeight;
	int tmOverhang;
	int tmDigitizedAspectX;
	int tmDigitizedAspectY;
	char tmFirstChar;
	char tmLastChar;
	char tmDefaultChar;
	char tmBreakChar;
	char tmItalic;
	char tmUnderlined;
	char tmStruckOut;
	char tmPitchAndFamily;
	char tmCharSet;
};

struct tagTEXTMETRICW
{
	int tmHeight;
	int tmAscent;
	int tmDescent;
	int tmInternalLeading;
	int tmExternalLeading;
	int tmAveCharWidth;
	int tmMaxCharWidth;
	int tmWeight;
	int tmOverhang;
	int tmDigitizedAspectX;
	int tmDigitizedAspectY;
	int tmFirstChar;
	int tmLastChar;
	int tmDefaultChar;
	int tmBreakChar;
	char tmItalic;
	char tmUnderlined;
	char tmStruckOut;
	char tmPitchAndFamily;
	char tmCharSet;
};

struct _DDSURFACEDESC2
{
	int dwSize;
	int dwFlags;
	int dwHeight;
	int dwWidth;
	char pad0[12];
	int dwAlphaBitDepth;
	int dwReserved;
	int lpSurface;
	char pad1[8];
	DDCOLORKEY ddckCKDestBlt;
	int64_t ddckCKSrcOverlay;
	int64_t ddckCKSrcBlt;
	char pad2[32];
	DDSCAPS2 ddsCaps;
	int dwTextureStage;
};

union _3572
{
	int lPitch;
	int dwLinearSize;
};

union _3573
{
	int dwBackBufferCount;
	int dwDepth;
};

union _3574
{
	int dwMipMapCount;
	int dwRefreshRate;
	int dwSrcVBHandle;
};

union _3575
{
	int64_t ddckCKDestOverlay;
	int dwEmptyFaceColor;
};

struct _DDCOLORKEY
{
	int dwColorSpaceLowValue;
	int dwColorSpaceHighValue;
};

union _3576
{
	DDPIXELFORMAT ddpfPixelFormat;
	int dwFVF;
};

struct _DDSCAPS2
{
	int dwCaps;
	int dwCaps2;
	int dwCaps3;
};

struct _DDPIXELFORMAT
{
	int dwSize;
	int dwFlags;
	int dwFourCC;
};

union _3561
{
	int dwCaps4;
	int dwVolumeDepth;
};

union _3562
{
	int dwRGBBitCount;
	int dwYUVBitCount;
	int dwZBufferBitDepth;
	int dwAlphaBitDepth;
	int dwLuminanceBitCount;
	int dwBumpBitCount;
	int dwPrivateFormatBitCount;
};

union _3563
{
	int dwRBitMask;
	int dwYBitMask;
	int dwStencilBitDepth;
	int dwLuminanceBitMask;
	int dwBumpDuBitMask;
	int dwOperations;
};

union _3564
{
	int dwGBitMask;
	int dwUBitMask;
	int dwZBitMask;
	int dwBumpDvBitMask;
};

union _3566
{
	int dwBBitMask;
	int dwVBitMask;
	int dwStencilBitMask;
	int dwBumpLuminanceBitMask;
};

union _3567
{
	int dwRGBAlphaBitMask;
	int dwYUVAlphaBitMask;
	int dwLuminanceAlphaBitMask;
	int dwRGBZBitMask;
	int dwYUVZBitMask;
};

struct _3565
{
	short wFlipMSTypes;
	short wBltMSTypes;
};

struct tagBITMAPFILEHEADER
{
	short bfType;
	int bfSize;
	short bfReserved1;
	short bfReserved2;
	int bfOffBits;
};

struct tagBITMAPINFO
{
	BITMAPINFOHEADER bmiHeader;
	int bmiColors;
};

struct DXTexColor
{
	char a;
	char r;
	char g;
	char b;
};

struct FIFO
{
	int FIFO;
};

struct Tuple
{
	char v[6];
};

struct CMacGameEngine
{
	int CMacGameEngine;
};

struct CompressionInfo
{
	int recordSize;
	int format;
	short compressionID;
	short samplesPerPacket;
	short bytesPerPacket;
	short bytesPerFrame;
	short bytesPerSample;
	short futureUse1;
};

struct rlimit
{
	int64_t rlim_cur;
	int64_t rlim_max;
};

struct _3555
{
	int file;
	unz_global_info gi;
	int byte_before_the_zipfile;
	int num_file;
	int pos_in_central_dir;
	int current_file_ok;
	int central_pos;
	int size_central_dir;
	int offset_central_dir;
	unz_file_info cur_file_info;
	unz_file_info_internal cur_file_info_internal;
	int pfile_in_zip_read;
};

struct unz_global_info_s
{
	int number_entry;
	int size_comment;
};

struct unz_file_info_s
{
	int version;
	int version_needed;
	int flag;
	int compression_method;
	int dosDate;
	int crc;
	int compressed_size;
	int uncompressed_size;
	int size_filename;
	int size_file_extra;
	int size_file_comment;
	int disk_num_start;
	int internal_fa;
	int external_fa;
	tm_unz tmu_date;
};

struct unz_file_info_internal_s
{
	int offset_curfile;
};

struct tm_unz_s
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
};

struct file_in_zip_read_info_s
{
	int read_buffer;
	z_stream stream;
	int pos_in_zipfile;
	int stream_initialised;
	int offset_local_extrafield;
	int size_local_extrafield;
	int pos_local_extrafield;
	int rest_read_compressed;
	int rest_read_uncompressed;
	int file;
	int compression_method;
	int byte_before_the_zipfile;
};

struct z_stream_s
{
	int next_in;
	int avail_in;
	int total_in;
	int next_out;
	int avail_out;
	int total_out;
	int msg;
	int state;
	int zalloc;
	int zfree;
	int opaque;
	int data_type;
	int adler;
	int reserved;
};

struct WSAData
{
	short wVersion;
	short wHighVersion;
	char szDescription[257];
	char szSystemStatus[129];
	short iMaxSockets;
	short iMaxUdpDg;
	char pad0[2];
	int lpVendorInfo;
};

union _3672
{
	int f;
	int n;
	int b;
};

union _3673
{
	int f;
	int n;
	int b;
};

struct _3671
{
	char va_string[2048];
	int index;
};

struct orientation_t
{
	char origin[12];
	char axis[36];
};

struct cspField_t
{
	int szName;
	int iOffset;
	int iFieldType;
};

struct TraceThreadInfo
{
	TraceCheckCount checkcount;
	int box_brush;
	int box_model;
};

struct TraceCheckCount
{
	int global;
	int edges;
	int verts;
	int partitions;
};

struct cplane_s
{
	char normal[12];
	int dist;
	char type;
	char signbits;
	short pad;
};

struct DObjAnimMat_s
{
	char quat[16];
	char trans[12];
	int transWeight;
};

union _3674
{
	int f;
	int i;
};

typedef enum
{
	PMSG_CONSOLE = 0,
	PMSG_GAME = 1,
	PMSG_BOLDGAME = 2,
	PMSG_SUBTITLE = 3,
	PMSG_LOGFILE = 4
} print_msg_type_t;

typedef enum
{
	ERR_FATAL = 0,
	ERR_DROP = 1,
	ERR_SERVERDISCONNECT = 2,
	ERR_DISCONNECT = 3,
	ERR_SCRIPT = 4,
	ERR_SCRIPT_DROP = 5,
	ERR_LOCALIZATION = 6
} errorParm_t;

struct _3728
{
	int evTime;
	sysEventType_t evType;
	int evValue;
	int evValue2;
	int evPtrLength;
	int evPtr;
};

typedef enum
{
	SE_NONE = 0,
	SE_KEY = 1,
	SE_CHAR = 2,
	SE_GAMEPAD_AXIS = 3,
	SE_CONSOLE = 4,
	SE_PACKET = 5
} sysEventType_t;

struct dvar_s
{
	int name;
	short flags;
	char type;
	char modified;
	DvarValue current;
	int latched;
	int reset;
	DvarLimits domain;
	int next;
	int hashNext;
};

union DvarValue
{
	char enabled;
	int integer;
	int value;
	int vector;
	int string;
	int color;
};

union DvarLimits
{
};

struct _3557
{
	int stringCount;
	int strings;
};

struct _3558
{
	int min;
	int max;
};

struct _3559
{
	int min;
	int max;
};

struct _3560
{
	int min;
	int max;
};

struct field_t
{
	int cursor;
	int scroll;
	int drawWidth;
	int widthInPixels;
	int charHeight;
	int fixedSize;
	char buffer[256];
};

struct SysInfo
{
	int64_t cpuGHz;
	int sysMB;
	char SSE;
	char gpuDescription[512];
};

struct _3722
{
	netadrtype_t type;
	int ip;
	short port;
};

typedef enum
{
	NA_BOT = 0,
	NA_BAD = 1,
	NA_LOOPBACK = 2,
	NA_BROADCAST = 3,
	NA_IP = 4
} netadrtype_t;

struct LargeLocal
{
};

typedef enum
{
	LOCMSG_SAFE = 0,
	LOCMSG_NOERR = 1
} msgLocErrType_t;

struct languageInfo_t
{
	int pszName;
	int bPresent;
};

struct pack_t
{
	char iwdFilename[256];
	char iwdBasename[256];
	char iwdGamename[256];
	int handle;
	int checksum;
	int pure_checksum;
	int numfiles;
	char referenced;
	char pad0[3];
	int hashSize;
	int hashTable;
	int buildBuffer;
};

struct fileInPack_s
{
	int pos;
	int name;
	int next;
};

struct searchpath_s
{
	int next;
	int pack;
	int dir;
	int bLocalized;
	int language;
};

struct directory_t
{
	char path[256];
	char gamedir[256];
};

typedef enum
{
	FS_LIST_PURE_ONLY = 0,
	FS_LIST_ALL = 1
} FsListBehavior_e;

struct _3609
{
	int file;
	int64_t gi;
	int byte_before_the_zipfile;
	int num_file;
	int pos_in_central_dir;
	int current_file_ok;
	int central_pos;
	int size_central_dir;
	int offset_central_dir;
	char cur_file_info[80];
	unz_file_info_internal cur_file_info_internal;
	int pfile_in_zip_read;
};

typedef enum
{
	FS_READ = 0,
	FS_WRITE = 1,
	FS_APPEND = 2,
	FS_APPEND_SYNC = 3
} fsMode_t;

struct fileHandleData_t
{
	qfile_ut handleFiles;
	int handleSync;
	int fileSize;
	int zipFilePos;
	int zipFile;
	int streamed;
	char name[256];
};

struct qfile_us
{
	qfile_gut file;
	int unique;
};

union qfile_gus
{
	int o;
	int z;
};

union _3621
{
	int parts;
	int model;
	int material;
	int image;
	int sound;
	int sndCurve;
	int clipMap;
	int world;
	int lightDef;
	int font;
	int menuList;
	int menu;
	int localize;
	int weapon;
	int sndDriverGlobals;
	int fx;
	int impactFx;
	int rawfile;
	int data;
};

struct _3704
{
	int magic;
	int size;
	int64_t dummy;
};

struct _3705
{
	int permanent;
	int temp;
};

struct XAnimParts_s
{
	short numframes;
	char bLoop;
	char bDelta;
	int framerate;
	int frequency;
	char notifyCount;
	char pad0[1];
	short boneCount;
	int names;
	int simpleQuatBits;
	int parts;
	int notify;
	int deltaPart;
	int name;
	char isDefault;
};

struct XAnimPart
{
	int trans;
	int quat;
};

struct XAnimNotifyInfo
{
	short name;
	char pad0[2];
	int time;
};

struct XAnimDeltaPart
{
	int trans;
	int quat;
};

struct XAnimPartTrans
{
	short size;
	char pad0[2];
	XAnimPartTransData u;
};

struct XAnimPartQuat
{
	short size;
	char pad0[2];
	XAnimPartQuatData u;
};

struct XAnimDeltaPartTrans
{
	short size;
	char pad0[2];
	XAnimDeltaPartTransData u;
};

struct XAnimDeltaPartQuat
{
	short size;
	char pad0[2];
	XAnimDeltaPartQuatData u;
};

union XAnimPartTransData
{
	XAnimPartTransFrames frames;
	char frame0[12];
};

union XAnimPartQuatData
{
	XAnimPartQuatDataFrames frames;
	int64_t frame0;
	int frame02;
};

union XAnimDeltaPartTransData
{
	XAnimDeltaPartTransFrames frames;
	char frame0[12];
};

union XAnimDeltaPartQuatData
{
	XAnimDeltaPartQuatDataFrames frames;
	int frame0;
};

struct XAnimPartTransFrames
{
	int frames;
	XAnimDynamicIndices indices;
};

struct XAnimPartQuatDataFrames
{
	XAnimPartQuatFrames u;
	short indices;
};

struct XAnimDeltaPartTransFrames
{
	int frames;
	short indices;
};

struct XAnimDeltaPartQuatDataFrames
{
	int frames;
	short indices;
};

union XAnimDynamicIndices
{
	char _1;
	short _2;
};

union XAnimPartQuatFrames
{
	int frames;
	int frames2;
};

struct XAnim_s
{
	int debugName;
	int size;
	int debugAnimNames;
	int64_t entries;
};

struct XAnimEntry
{
	short numAnims;
	short parent;
};

union _3693
{
	int parts;
	XAnimParent s;
};

struct XAnimParent
{
	short flags;
	short children;
};

struct XAnimTree_s
{
	int anims;
	short entnum;
	char bAbs;
	char bUseGoalWeight;
	short infoArray;
};

struct XAnimInfo
{
	short notifyChild;
	short notifyIndex;
	short notifyName;
	short notifyType;
	short prev;
	short next;
	XAnimState s;
};

struct XAnimState
{
	int time;
	int oldTime;
	short timeCount;
	short oldTimeCount;
	int goalTime;
	int goalWeight;
	int weight;
	int rate;
};

struct XAnimNotify_s
{
	int name;
	int type;
	int timeFrac;
};

struct XAnimTime
{
	int time;
	int frameCount;
	int frameFrac;
	int frameIndex;
};

struct XAnimSimpleRotPos
{
	int64_t rot;
	int posWeight;
	char pos[12];
};

struct DObj_s
{
	int tree;
	int skel;
	int timeStamp;
	int animToModel;
	short duplicateParts;
	char pad0[2];
	int locked;
	char numModels;
	char numBones;
	char ignoreCollision;
	char pad1[1];
	char models[32];
	int64_t modelParents;
	int64_t matOffset;
	char mins[12];
	char maxs[12];
};

struct DSkel
{
	char animPartBits[16];
	char controlPartBits[16];
	char skelPartBits[16];
	char mat[32];
};

struct XModel
{
	int parts;
	char lodInfo[80];
	int collSurfs;
	int numCollSurfs;
	int contents;
	int boneInfo;
	char mins[12];
	char maxs[12];
	short numLods;
	short collLod;
	int xskins;
	int memUsage;
	int name;
	char flags;
	char bad;
};

struct XModelLodInfo
{
	int dist;
	int filename;
	short numsurfs;
	char pad0[2];
	int surfNames;
	int surfs;
};

struct XBoneInfo_s
{
	char bounds[24];
	char offset[12];
	int radiusSquared;
};

struct XModelParts_s
{
	short numBones;
	short numRootBones;
	int hierarchy;
	int quats;
	int trans;
	int partClassification;
	char skel[80];
};

struct XModelCollSurf_s
{
	int collTris;
	int numCollTris;
	char mins[12];
	char maxs[12];
	int boneIdx;
	int contents;
	int surfFlags;
};

struct XBoneHierarchy
{
	int names;
	char parentList;
};

struct XModelSurfs_s
{
	int surfs;
	char partBits[16];
};

struct XModelCollTri_s
{
	char plane[16];
	char svec[16];
	char tvec[16];
};

struct XAnimCalcAnimInfo
{
	char rotTransArray[16384];
	char animPartBits[16];
	char ignorePartBits[16];
};

struct XAnimToXModel
{
	char partBits[16];
	char boneIndex[128];
};

struct RefString
{
	char pad0[4];
	char str;
};

union _3708
{
};

struct _3709
{
	char byteLen;
	char user;
	short refCount;
};

struct scrStringGlob_t
{
	char hashTable[65536];
	char inited;
	char pad0[3];
	int nextFreeEntry;
};

struct MemoryNode
{
	short prev;
	short next;
	int padding;
};

struct _3611
{
	int mt_buffer;
};

struct _3634
{
	char nodes[524288];
	char leftBits[256];
	char numBits[256];
	char logBits[256];
	char head[34];
	char pad0[2];
	int totalAlloc;
	int totalAllocBuckets;
};

struct trace_t
{
	int fraction;
	char normal[12];
	int surfaceFlags;
	int contents;
	int material;
	short entityNum;
	short partName;
	short partGroup;
	char allsolid;
	char startsolid;
};

struct TraceExtents
{
	char start[12];
	char end[12];
	char invDelta[12];
};

struct _3740
{
	short boneNames;
	char pad0[2];
	int64_t hierarchy;
	char modelParts[100];
	char modelSurf[20];
	XBoneInfo boneInfo;
	char partClassification;
	char pad1[1];
	short surfNames;
};

struct qtime_s
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

struct CStringEdPackage
{
	char pad0[16];
	mapStringEntries_t m_StringEntries;
};

struct _Rb_tree_node_base
{
	_Rb_tree_color _M_color;
	int _M_parent;
	int _M_left;
	int _M_right;
};

typedef enum
{
	_S_red = 0,
	_S_black = 1
} _Rb_tree_color;

struct gitem_s
{
	int classname;
	int pickup_sound;
	int64_t world_model;
	int icon;
	int pickup_name;
	int quantity;
	itemType_t giType;
	int giTag;
	int giAmmoIndex;
	int giClipIndex;
};

typedef enum
{
	IT_BAD = 0,
	IT_WEAPON = 1,
	IT_AMMO = 2,
	IT_HEALTH = 3
} itemType_t;

struct snd_listener
{
	orientation_t orient;
	int entnum;
	char active;
};

struct SndCurve
{
	int filename;
	int knotCount;
	char knots[64];
};

struct snd_alias_t
{
	int pszAliasName;
	int pszSubtitle;
	int pszSecondaryAliasName;
	int soundFile;
	int iSequence;
	float fVolMin;
	float fVolMax;
	float fPitchMin;
	float fPitchMax;
	float fDistMin;
	float fDistMax;
	int flags;
	float fSlavePercentage;
	float fProbability;
	float fLfePercentage;
	int startDelay;
	int volumeFalloffCurve;
};

struct SoundFile
{
	int soundName;
	int fileMem;
	char isStreamFound;
	char pad0[3];
	snd_alias_type_t type;
};

typedef enum
{
	SAT_UNKNOWN = 0,
	SAT_LOADED = 1,
	SAT_STREAMED = 2,
	SAT_PRIMED = 3,
	SAT_COUNT = 4
} snd_alias_type_t;

struct snd_channelvolgroup
{
	char channelvol[132];
	char active;
};

struct snd_volume_info_t
{
	int volume;
	int goalvolume;
	int goalrate;
};

struct snd_enveffect
{
	int roomtype;
	int drylevel;
	int drygoal;
	int dryrate;
	int wetlevel;
	int wetgoal;
	int wetrate;
	char active;
};

typedef enum
{
	SASYS_UI = 0,
	SASYS_CGAME = 1,
	SASYS_GAME = 2,
	SASYS_COUNT = 3
} snd_alias_system_t;

typedef enum
{
	SND_OVERLAY_NONE = 0,
	SND_OVERLAY_3D = 1,
	SND_OVERLAY_STREAM = 2,
	SND_OVERLAY_2D = 3
} snd_overlay_type_t;

struct snd_overlay_info_t
{
	int pszSampleName;
	float fBaseVolume;
	float fCurVolume;
	int dist;
	float fPitch;
};

struct MemoryFile
{
	int buffer;
	int bufferSize;
	int bytesUsed;
	char errorOnOverflow;
	char memoryOverflow;
	char pad0[2];
	int archiveProc;
};

struct snd_channel_info_t
{
	int entnum;
	int entchannel;
	int startDelay;
	int looptime;
	int endtime;
	int basevolume;
	int baserate;
	int pitch;
	int srcChannelCount;
	int pAlias0;
	int pAlias1;
	int lerp;
	char org[12];
	char offset[12];
	char paused;
	char master;
	char pad0[2];
	int system;
};

struct snd_alias_list_t
{
	int aliasName;
	int head;
	int count;
	int pHashNext;
};

typedef enum
{
	SND_STOP_ALL = 0,
	SND_KEEP_REVERB = 1,
	SND_KEEP_MUSIC = 2,
	SND_KEEP_AMBIENT = 4,
	SND_KEEP_MUSIC_AND_AMBIENT = 6,
	SND_STOP_STREAMED = 8,
	SND_KEEP_CHANNEL_VOLUMES = 16
} snd_stopsounds_arg_t;

struct _3619
{
	int fraction;
	int rate;
	int basevolume;
	int volume;
	int pan;
	char org[12];
};

struct _3617
{
	int fraction;
	int pitch;
	int volume;
	int pan;
};

struct _3618
{
	int fraction;
	int pitch;
	int volume;
	char org[12];
};

struct _3623
{
	char Initialized2d;
	char Initialized3d;
	char paused;
	char pad0[1];
	int playback_rate;
	int playback_bits;
	int playback_channels;
	int timescale;
	int pausetime;
	int cpu;
	char pad1[8];
	int volume;
	char mastervol[12];
	char channelVolGroups[544];
	int channelvol;
	char background[24];
	int ambient_track;
	int slaveLerp;
	char envEffects[96];
	int effect;
	char defaultPauseSettings[11];
	char pauseSettings[11];
	char pad2[2];
	char listeners[56];
	int time;
	int looptime;
	char chaninfo[4240];
	int max_2D_channels;
	int max_3D_channels;
	int max_stream_channels;
};

struct _3624
{
	int buffer;
	int size;
};

struct cmd_t
{
	int data;
	int maxsize;
	int cmdsize;
};

typedef enum
{
	DVAR_SOURCE_INTERNAL = 0,
	DVAR_SOURCE_EXTERNAL = 1,
	DVAR_SOURCE_SCRIPT = 2
} DvarSetSource;

struct MssSound
{
	AILSOUNDINFO info;
	char data;
};

struct _AILSOUNDINFO
{
	int format;
	int data_ptr;
	int data_len;
	int rate;
	int bits;
	int channels;
	int samples;
	int block_size;
	int initial_ptr;
};

struct snd_save_2D_sample_t
{
	int fraction;
	int pitch;
	int volume;
	int pan;
};

struct snd_save_3D_sample_t
{
	int fraction;
	int pitch;
	int volume;
	char org[12];
};

struct snd_save_stream_t
{
	int fraction;
	int rate;
	int basevolume;
	int volume;
	int pan;
	char org[12];
};

struct _AILMIXINFO
{
	char Info[36];
	ADPCMDATA mss_adpcm;
	int src_fract;
	int left_val;
	int right_val;
};

struct _ADPCMDATATAG
{
	int blocksize;
	int extrasamples;
	int blockleft;
	int step;
	int savesrc;
	int sample;
	int destend;
	int srcend;
	int samplesL;
	int samplesR;
	char moresamples[32];
};

struct MssLocal
{
	int driver_2D;
	int provider_3D;
	char handle_2D[32];
	char handle_3D[128];
	char handle_stream[52];
};

struct _3748
{
	int handle;
	int rate;
	int width;
	int channels;
	int buf;
	char bufReady[32];
	int bufSize;
	int bufUsed;
	int readBuf;
	int writeBuf;
	int64_t sampleTime;
	int64_t bufRate;
};

struct Effect
{
	int Effect;
	char pad0[60];
	FxGfxEntity mRefEnt;
	int mFlags;
	int mClusterId;
	int mSortGroup;
	int mModel;
	int mTimeStart;
	int mTimeEnd;
	FxBoltFramePtr mBolt;
};

struct FxGfxEntity
{
	int customMaterial;
	int rotation;
	char axis[36];
	char dlightColor[12];
	int materialTime;
	char origin[12];
	int64_t radius;
	int materialRGBA;
	int materialSubimageIndex;
	int scale;
	char endpos[12];
};

struct FxBoltFramePtr
{
};

struct FxArchive
{
};

struct EffectTemplate
{
	int mEffectName;
	int mPrimitiveCount;
	char mPrimitives[96];
};

struct FxBoltFrame
{
	char pad0[60];
	FxBoltInfo mBolt;
};

struct PrimitiveTemplate
{
	char mName[32];
	char mMaterialImpact[32];
	PrimType mType;
	int mParentPrimIndex;
	FxRange mSpawnDelay;
	int64_t mSpawnCount;
	int64_t mLife;
	int64_t mSpawnRange;
	MediaHandles mMediaHandles;
	int64_t mImpactFxHandles;
	int64_t mDeathFxHandles;
	int64_t mEmitterFxHandles;
	int64_t mPlayFxHandles;
	int mAttributeFlags;
	int mSpawnFlags;
	int mGroupFlags;
	char mNonUniformScale;
	char useLength;
	char pad0[2];
	char mMin[12];
	char mMax[12];
	int64_t mOrigin1X;
	int64_t mOrigin1Y;
	int64_t mOrigin1Z;
	int64_t mOrigin2X;
	int64_t mOrigin2Y;
	int64_t mOrigin2Z;
	int64_t mRadius;
	int64_t mHeight;
	int64_t mWindModifier;
	char mFxChannels[288];
	int64_t mRotation;
	int64_t mAngle1;
	int64_t mAngle2;
	int64_t mAngle3;
	int64_t mAngle1Delta;
	int64_t mAngle2Delta;
	int64_t mAngle3Delta;
	int64_t mGravity;
	int64_t mDensity;
	int64_t mVariance;
	int64_t mTexCoordS;
	int64_t mTexCoordT;
	int64_t mElasticity;
	StartFrameMode mSequenceStartFrameMode;
	int mSequenceFixedFrameValue;
	PlayRateMode mSequencePlayRateMode;
	int mSequenceFixedFpsValue;
	LoopMode mSequenceLoopMode;
	int mSequenceLoopTimes;
	int spawnFrustumCullRadius;
};

struct FxBoltInfo
{
	int dobjHandle;
	int boneIndex;
};

typedef enum
{
	PT_NONE = 0,
	PT_PARTICLE = 1,
	PT_LINE = 2,
	PT_TAIL = 3,
	PT_CYLINDER = 4,
	PT_EMITTER = 5,
	PT_DECAL = 6,
	PT_ORIENTEDPARTICLE = 7,
	PT_FXRUNNER = 8,
	PT_LIGHT = 9,
	PT_CAMERASHAKE = 10,
	PT_SCREENFLASH = 11,
	PT_CLOUD = 12
} PrimType;

struct FxRange
{
	int mMin;
	int mMax;
};

struct MediaHandles
{
	TMediaList mMediaList;
};

typedef enum
{
	SFM_FIXED_FRAME = 0,
	SFM_RANDOM = 1,
	SFM_INDEXED = 2,
	SFM_MODE_COUNT = 3
} StartFrameMode;

typedef enum
{
	PRM_FIXED_FPS = 0,
	PRM_SYNC_TO_PARTICLE_LIFETIME = 1,
	PRM_MODE_COUNT = 2
} PlayRateMode;

typedef enum
{
	LM_FOREVER = 0,
	LM_TIMES = 1,
	LM_MODE_COUNT = 2
} LoopMode;

typedef enum
{
	FXCHAN_COLOR = 0,
	FXCHAN_COLOR_RAND = 1,
	FXCHAN_ALPHA = 2,
	FXCHAN_ALPHA_RAND = 3,
	FXCHAN_SIZE = 4,
	FXCHAN_SIZE_RAND = 5,
	FXCHAN_SIZE2 = 6,
	FXCHAN_SIZE2_RAND = 7,
	FXCHAN_LENGTH = 8,
	FXCHAN_LENGTH_RAND = 9,
	FXCHAN_ROTATION_DELTA = 10,
	FXCHAN_ROTATION_DELTA_RAND = 11,
	FXCHAN_VELOCITY_X = 12,
	FXCHAN_VELOCITY_Y = 13,
	FXCHAN_VELOCITY_Z = 14,
	FXCHAN_VELOCITY_X_RAND = 15,
	FXCHAN_VELOCITY_Y_RAND = 16,
	FXCHAN_VELOCITY_Z_RAND = 17,
	FXCHAN_VELOCITY2_X = 18,
	FXCHAN_VELOCITY2_Y = 19,
	FXCHAN_VELOCITY2_Z = 20,
	FXCHAN_VELOCITY2_X_RAND = 21,
	FXCHAN_VELOCITY2_Y_RAND = 22,
	FXCHAN_VELOCITY2_Z_RAND = 23,
	FXCHAN_COUNT = 24
} FxChannelId;

struct FxChannelInstance
{
	FxCurveIterator curveIterator;
	int scale;
};

struct TMediaList
{
	int elements;
	short size;
	short maxSize;
};

union TMediaElement
{
	int model;
	int material;
	EffectTemplateLoadPtr u;
	int data;
};

struct FxChannel
{
	int curve;
	int64_t scaleRange;
};

struct BackCompatibleParameters
{
	char fxChannels[1536];
};

struct GPGroup
{
};

struct GPValue
{
};

struct FxCurveIterator
{
	int master;
	int currentKeyIndex;
};

union EffectTemplateLoadPtr
{
	int fx;
	int name;
};

struct FxFlagEntry
{
	int flag;
	int64_t masks;
};

struct GPObject
{
};

struct FxChannelBackwardCompatible
{
	char start[24];
	char end[24];
	int64_t parm;
	int flags;
	char containsData;
};

struct FxCurve
{
	int dimensionCount;
	int keyCount;
	int keys;
};

struct TextPool
{
};

struct _3580
{
	int fraction;
	char normal[12];
	int surfaceFlags;
	int contents;
	int material;
	short entityNum;
	short partName;
	short partGroup;
	char allsolid;
	char startsolid;
};

struct ScheduledEffect
{
	int mFx;
	int mPrimIndex;
	int mStartTime;
	int64_t mBolt;
	char mOrigin[12];
	char mAxis[36];
	int mSeed;
	int mIndexInBatch;
	int mScheduledNext;
};

struct EffectVisInfo
{
	char origin[12];
	int distSq;
	int vis;
};

struct EffectPrimitive
{
	int fx;
	int primTemp;
	int boltFrame;
};

struct Particle
{
	char pad0[324];
	char colorChannelInstance[12];
	char colorRandChannelInstance[12];
	char alphaChannelInstance[12];
	char alphaRandChannelInstance[12];
	char sizeChannelInstance[12];
	char sizeRandChannelInstance[12];
	char size2ChannelInstance[12];
	char size2RandChannelInstance[12];
	char rotationDeltaChannelInstance[12];
	char rotationDeltaRandChannelInstance[12];
	char velocityXChannelInstance[12];
	char velocityYChannelInstance[12];
	char velocityZChannelInstance[12];
	char velocityXRandChannelInstance[12];
	char velocityYRandChannelInstance[12];
	char velocityZRandChannelInstance[12];
	char velocity2XChannelInstance[12];
	char velocity2YChannelInstance[12];
	char velocity2ZChannelInstance[12];
	char velocity2XRandChannelInstance[12];
	char velocity2YRandChannelInstance[12];
	char velocity2ZRandChannelInstance[12];
};

struct SortedCluster
{
	int clusterId;
	int distSq;
};

struct Cloud
{
	char pad0[604];
	char useLength;
	char pad1[3];
	int randomLengthWeight;
	char lengthChannelInstance[12];
	char lengthRandChannelInstance[12];
};

struct Flash
{
};

struct Light
{
	char pad0[204];
	char colorChannelInstance[12];
	char colorRandChannelInstance[12];
	char sizeChannelInstance[12];
	char sizeRandChannelInstance[12];
};

struct Cylinder
{
};

struct Tail
{
	char pad0[604];
	int randomLengthWeight;
	char lengthChannelInstance[12];
	char lengthRandChannelInstance[12];
};

struct Line
{
};

struct Emitter
{
};

struct OrientedParticle
{
};

struct FxHelper
{
	int time;
	int mTime;
	int mOldTime;
	int mFrameTime;
	int mTimeFrozen;
	FxCamera mCamera;
	char mPrevCamera[112];
	int mSeed;
	int adsZoomFactor;
};

struct FxCamera
{
	char vieworg[12];
	char frustum[96];
	int numPlanes;
};

struct GfxEntity
{
	refEntityType_t reType;
	int renderFxFlags;
	char pad0[12];
	char axis[36];
	int scale;
	char origin[12];
	char endpos[12];
	int customMaterial;
	int materialRGBA;
	int materialTime;
	int materialSubimageIndex;
	int64_t radius;
	int rotation;
	int minScreenRadius;
};

struct refdef_s
{
	int x;
	int y;
	int width;
	int height;
	int fov_x;
	int fov_y;
	char vieworg[12];
	char viewaxis[36];
	int time;
	int zNear;
	int blurRadius;
	int viewIndex;
};

typedef enum
{
	RT_DOBJ = 0,
	RT_XMODEL = 1,
	RT_STATICMODEL = 2,
	RT_BRUSHMODEL = 3,
	RT_SPRITE = 4,
	RT_RAIL_CORE = 5,
	RT_PARTICLE_CLOUD = 6,
	RT_ORIENTED_QUAD = 7,
	RT_LINE = 8,
	RT_CYLINDER = 9,
	RT_MAX_REF_ENTITY_TYPE = 10
} refEntityType_t;

union _3666
{
	char baseCoords[12];
	char origin[12];
};

struct GfxWorldVertex
{
	char xyz[12];
	char normal[12];
	GfxColor color;
	int64_t texCoord;
	int64_t lmapCoord;
	char binormal[12];
	char tangent[12];
};

struct _3667
{
	int colorForDir;
	int sunVisibility;
};

union GfxColor
{
	int packed;
	int array;
};

struct EffectCluster
{
	char origin[12];
	int refCount;
};

struct SortedEffect
{
	int effect;
	int distSq;
};

struct GenericParser2
{
};

struct FxScheduler
{
	char pad0[4];
	int mScheduledHead;
	int mScheduledCount;
};

typedef enum
{
	MEDIA_MATERIALS = 0,
	MEDIA_MODELS = 1,
	MEDIA_EFFECTS = 2
} EMediaTypes;

struct cmodel_t
{
	char mins[12];
	char maxs[12];
	int radius;
	cLeaf_t leaf;
};

struct cLeaf_t
{
	short firstCollAabbIndex;
	short collAabbCount;
	int brushContents;
	int terrainContents;
	char mins[12];
	char maxs[12];
	int leafBrushNode;
	short cluster;
};

struct traceWork_t
{
	TraceExtents extents;
	char delta[12];
	int deltaLen;
	int deltaLenSq;
	char midpoint[12];
	char halfDelta[12];
	char halfDeltaAbs[12];
	char size[12];
	char bounds[24];
	int contents;
	int isPoint;
	int axialCullOnly;
	int radius;
	int offsetZ;
	char radiusOffset[12];
	TraceThreadInfo threadInfo;
};

struct cLeafBrushNode_s
{
	char axis;
	char pad0[1];
	short leafBrushCount;
	int contents;
	cLeafBrushNodeData_t data;
};

union cLeafBrushNodeData_t
{
	cLeafBrushNodeLeaf_t leaf;
	cLeafBrushNodeChildren_t children;
};

struct cLeafBrushNodeLeaf_t
{
	int brushes;
};

struct cLeafBrushNodeChildren_t
{
	int dist;
	int range;
	int childOffset;
};

struct cbrush_t
{
	char mins[12];
	int contents;
	char maxs[12];
	int numsides;
	int sides;
	char axialMaterialNum[12];
};

struct cbrushside_t
{
	int plane;
	int materialNum;
};

struct _3681
{
	int plane;
	int children;
};

struct leafList_s
{
	int count;
	int maxcount;
	int overflowed;
	int list;
	char bounds[24];
	int lastLeaf;
};

struct CollisionTriangle
{
	char plane[16];
	char svec[16];
	char tvec[16];
	char verts[12];
	char edges[12];
};

struct _3684
{
	char origin[12];
	char axis[36];
};

struct CollisionAabbTree
{
	char origin[12];
	char halfSize[12];
	short materialIndex;
	short childCount;
	CollisionAabbTreeIndex u;
};

union CollisionAabbTreeIndex
{
	int firstChildIndex;
	int partitionIndex;
};

struct _3687
{
	char triCount;
	char borderCount;
	char pad0[2];
	int tris;
	int borders;
};

struct CollisionBorder
{
	char distEq[12];
	int zBase;
	int zSlope;
	int start;
	int length;
};

struct _3682
{
	short firstCollAabbIndex;
	short collAabbCount;
	int brushContents;
	int terrainContents;
	char mins[12];
	char maxs[12];
	int leafBrushNode;
	short cluster;
};

struct playerState_s
{
	int commandTime;
	int pm_type;
	int bobCycle;
	int pm_flags;
	int pm_time;
	char origin[12];
	char velocity[12];
	int64_t oldVelocity;
	int weaponTime;
	int weaponDelay;
	int grenadeTimeLeft;
	int weaponRestrictKickTime;
	int foliageSoundTime;
	int gravity;
	int leanf;
	int speed;
	char delta_angles[12];
	int groundEntityNum;
	char vLadderVec[12];
	int jumpTime;
	int jumpOriginZ;
	int legsTimer;
	int legsAnim;
	int torsoTimer;
	int torsoAnim;
	int legsAnimDuration;
	int torsoAnimDuration;
	int damageTimer;
	int damageDuration;
	int flinchYaw;
	int movementDir;
	int eFlags;
	int eventSequence;
	char events[16];
	char eventParms[16];
	int oldEventSequence;
	int clientNum;
	int offHandIndex;
	int weapon;
	int weaponstate;
	float fWeaponPosFrac;
	int adsDelayTime;
	int viewmodelIndex;
	char viewangles[12];
	int viewHeightTarget;
	int viewHeightCurrent;
	int viewHeightLerpTime;
	int viewHeightLerpTarget;
	int viewHeightLerpDown;
	int viewHeightLerpPosAdj;
	int64_t viewAngleClampBase;
	int64_t viewAngleClampRange;
	int damageEvent;
	int damageYaw;
	int damagePitch;
	int damageCount;
	char stats[24];
	char ammo[512];
	char ammoclip[512];
	char weapons[16];
	int64_t weaponslots;
	char weaponrechamber[16];
	char mins[12];
	char maxs[12];
	int proneDirection;
	int proneDirectionPitch;
	int proneTorsoPitch;
	int viewlocked;
	int viewlocked_entNum;
	int cursorHint;
	int cursorHintString;
	int cursorHintEntIndex;
	int iCompassFriendInfo;
	float fTorsoHeight;
	float fTorsoPitch;
	float fWaistPitch;
	int holdBreathScale;
	int holdBreathTimer;
	MantleState mantleState;
	int entityEventSequence;
	int weapAnim;
	int aimSpreadScale;
	int shellshockIndex;
	int shellshockTime;
	int shellshockDuration;
	char objective[448];
	int deltaTime;
};

struct MantleState
{
	int yaw;
	int timer;
	int transIndex;
	int flags;
};

struct _3593
{
	char current[3968];
	char archival[3968];
};

struct objective_t
{
	objectiveState_t state;
	char origin[12];
	int entNum;
	int teamNum;
	int icon;
};

typedef enum
{
	OBJST_EMPTY = 0,
	OBJST_ACTIVE = 1,
	OBJST_INVISIBLE = 2,
	OBJST_DONE = 3,
	OBJST_CURRENT = 4,
	OBJST_FAILED = 5,
	OBJST_NUMSTATES = 6
} objectiveState_t;

struct hudelem_s
{
	he_type_t type;
	int x;
	int y;
	int z;
	int fontScale;
	int font;
	int alignOrg;
	int alignScreen;
	hudelem_color_t color;
	int fromColor;
	int fadeStartTime;
	int fadeTime;
	int label;
	int width;
	int height;
	int materialIndex;
	int fromWidth;
	int fromHeight;
	int scaleStartTime;
	int scaleTime;
	int fromX;
	int fromY;
	int fromAlignOrg;
	int fromAlignScreen;
	int moveStartTime;
	int moveTime;
	int time;
	int duration;
	int value;
	int text;
	int sort;
	int foreground;
};

typedef enum
{
	HE_TYPE_FREE = 0,
	HE_TYPE_TEXT = 1,
	HE_TYPE_VALUE = 2,
	HE_TYPE_PLAYERNAME = 3,
	HE_TYPE_MAPNAME = 4,
	HE_TYPE_GAMETYPE = 5,
	HE_TYPE_MATERIAL = 6,
	HE_TYPE_TIMER_DOWN = 7,
	HE_TYPE_TIMER_UP = 8,
	HE_TYPE_TENTHS_TIMER_DOWN = 9,
	HE_TYPE_TENTHS_TIMER_UP = 10,
	HE_TYPE_CLOCK_DOWN = 11,
	HE_TYPE_CLOCK_UP = 12,
	HE_TYPE_WAYPOINT = 13,
	HE_TYPE_COUNT = 14
} he_type_t;

union hudelem_color_t
{
	int rgba;
};

struct _3592
{
	char r;
	char g;
	char b;
	char a;
};

struct entityState_s
{
	int number;
	int eType;
	int eFlags;
	trajectory_t pos;
	char apos[36];
	int time;
	int time2;
	char origin2[12];
	char angles2[12];
	int otherEntityNum;
	int attackerEntityNum;
	int groundEntityNum;
	int constantLight;
	int loopSound;
	int surfType;
	char pad0[4];
	int clientNum;
	int iHeadIcon;
	int iHeadIconTeam;
	int solid;
	int eventParm;
	int eventSequence;
	char events[16];
	char eventParms[16];
	int weapon;
	int legsAnim;
	int torsoAnim;
	int leanf;
	char pad1[4];
	int dmgFlags;
	int animMovetype;
	float fTorsoHeight;
	float fTorsoPitch;
	float fWaistPitch;
};

struct trajectory_t
{
	trType_t trType;
	int trTime;
	int trDuration;
	char trBase[12];
	char trDelta[12];
};

union _3596
{
	int brushmodel;
	int item;
	int xmodel;
};

union _3597
{
	int scale;
	int eventParm2;
};

typedef enum
{
	TR_STATIONARY = 0,
	TR_INTERPOLATE = 1,
	TR_LINEAR = 2,
	TR_LINEAR_STOP = 3,
	TR_SINE = 4,
	TR_GRAVITY = 5,
	TR_GRAVITY_PAUSED = 6,
	TR_ACCELERATE = 7,
	TR_DECELERATE = 8
} trType_t;

typedef enum
{
	PCT_CLIENT = 0,
	PCT_ACTOR = 1
} proneCheckType_t;

struct pmove_t
{
	int ps;
	usercmd_t cmd;
	char oldcmd[28];
	int tracemask;
	int numtouch;
	char touchents[128];
	char mins[12];
	char maxs[12];
	int xyspeed;
	int proneChange;
	char handler;
	char mantleStarted;
	char pad0[2];
	char mantleEndPos[12];
	int mantleDuration;
};

struct usercmd_s
{
	int serverTime;
	int buttons;
	char weapon;
	char offHandIndex;
	char pad0[2];
	char angles[12];
	char forwardmove;
	char rightmove;
};

struct pml_t
{
	char forward[12];
	char right[12];
	char up[12];
	int frametime;
	int msec;
	int walking;
	int groundPlane;
	int almostGroundPlane;
	char groundTrace[36];
	int impactSpeed;
	char previous_origin[12];
	char previous_velocity[12];
	int previous_waterlevel;
};

struct viewLerpWaypoint_s
{
	int iFrac;
	float fViewHeight;
	int iOffset;
};

typedef enum
{
	TEAM_FREE = 0,
	TEAM_AXIS = 1,
	TEAM_ALLIES = 2,
	TEAM_SPECTATOR = 3,
	TEAM_NUM_TEAMS = 4
} team_t;

struct lerpFrame_t
{
	int yawAngle;
	int yawing;
	int pitchAngle;
	int pitching;
	int animationNumber;
	int animation;
	int animationTime;
	char oldFramePos[12];
	int animSpeedScale;
	int oldFrameSnapshotTime;
};

struct animation_s
{
	char name[64];
	int initialLerp;
	int moveSpeed;
	int duration;
	int nameHash;
	int flags;
	int64_t movetype;
	int noteType;
};

struct pmoveHandler_t
{
	int trace;
	int pointcontents;
	int playerEvent;
};

struct DObjModel_s
{
	int model;
	int boneName;
	int ignoreCollision;
};

struct dheader_s
{
	int ident;
	int version;
	char lumps[312];
};

struct lump_t
{
	int filelen;
	int fileofs;
};

struct clipMap_t
{
	int name;
	int numStaticModels;
	int staticModelList;
	int numMaterials;
	int materials;
	int numBrushSides;
	int brushsides;
	int numNodes;
	int nodes;
	int numLeafs;
	int leafs;
	int leafbrushNodesCount;
	int leafbrushNodes;
	int numLeafBrushes;
	int leafbrushes;
	int numLeafSurfaces;
	int leafsurfaces;
	int vertCount;
	int verts;
	int edgeCount;
	int edges;
	int triCount;
	int tris;
	int borderCount;
	int borders;
	int partitionCount;
	int partitions;
	int aabbTreeCount;
	int aabbTrees;
	int numSubModels;
	int cmodels;
	short numBrushes;
	char pad0[2];
	int brushes;
	int numClusters;
	int clusterBytes;
	int visibility;
	int vised;
	int numEntityChars;
	int entityString;
	int box_brush;
	char box_model[72];
	int pathNodeCount;
	int pathNodes;
	int chainNodeCount;
	int chainNodes;
	int chainNodesRev;
	int visBytes;
	int pathVis;
	int nodeTreeCount;
	int nodeTree;
	int checksum;
};

struct dmaterial_t
{
	char material[64];
	int surfaceFlags;
	int contentFlags;
};

struct cNode_t
{
	int plane;
	int children;
};

struct CollisionVertex
{
	char xyz[12];
};

struct CollisionEdge
{
	char origin[12];
	char axis[36];
};

struct CollisionPartition
{
	char triCount;
	char borderCount;
	char pad0[2];
	int tris;
	int borders;
};

struct cStaticModel_s
{
	cStaticModelWritable writable;
	char pad0[2];
	int xmodel;
	char origin[12];
	char invAxis[36];
	char absmin[12];
	char absmax[12];
};

struct cStaticModelWritable
{
	short nextModelInWorldSector;
};

struct DObjTrace_s
{
	int fraction;
	int surfaceflags;
	char normal[12];
	short partName;
	short partGroup;
};

struct DSurface_s
{
	short modelIndex;
	short subMatIndex;
};

typedef enum
{
	LANGUAGE_ENGLISH = 0,
	LANGUAGE_FRENCH = 1,
	LANGUAGE_GERMAN = 2,
	LANGUAGE_ITALIAN = 3,
	LANGUAGE_SPANISH = 4,
	LANGUAGE_BRITISH = 5,
	LANGUAGE_RUSSIAN = 6,
	LANGUAGE_POLISH = 7,
	LANGUAGE_KOREAN = 8,
	LANGUAGE_TAIWANESE = 9,
	LANGUAGE_JAPANESE = 10,
	LANGUAGE_CHINESE = 11,
	LANGUAGE_THAI = 12,
	LANGUAGE_LEET = 13,
	MAX_LANGUAGES = 14
} language_t;

struct _3799
{
	int language;
	int strings;
};

struct _3612
{
	char normal[12];
	int dist;
};

struct _3616
{
	short numSides;
	short materialNum;
};

struct _3614
{
	char pad0[4];
	int materialNum;
};

union _3615
{
	int planeNum;
	int bound;
};

struct _3689
{
	char origin[12];
	char halfSize[12];
	short materialIndex;
	short childCount;
	CollisionAabbTreeIndex u;
};

struct _3651
{
	char origin[12];
	char halfSize[12];
	short materialIndex;
	short childCount;
};

union _3652
{
	int firstChildIndex;
	int partitionIndex;
};

struct _3629
{
	int cluster;
	int area;
	int firstCollAabbIndex;
	int collAabbCount;
	int firstLeafBrush;
	int numLeafBrushes;
	int cellNum;
	int firstLightIndex;
	int numLights;
};

struct _3610
{
	char mins[12];
	char maxs[12];
	int firstTriangle;
	int numTriangles;
	int firstSurface;
	int numSurfaces;
	int firstBrush;
	int numBrushes;
};

struct _3613
{
	int planeNum;
	int64_t children;
	char mins[12];
	char maxs[12];
};

struct _3683
{
	char xyz[12];
};

struct _3646
{
	int checkStamp;
	char xyz[12];
};

struct _3647
{
	int checkStamp;
	char origin[12];
	char axis[36];
	int length;
};

struct _3648
{
	char plane[16];
	char svec[16];
	char tvec[16];
	char vertIndices[12];
	char edgeIndices[12];
};

struct _3686
{
	char distEq[12];
	int zBase;
	int zSlope;
	int start;
	int length;
};

struct _3649
{
	char distEq[12];
	int zBase;
	int zSlope;
	int start;
	int length;
};

struct _3650
{
	short checkStamp;
	char triCount;
	char borderCount;
	int firstTriIndex;
	int firstBorderIndex;
};

struct _3699
{
	int numPlanes;
	int planes;
	int cmod_base;
};

struct WeaponDef
{
	int szInternalName;
	int szDisplayName;
	int szOverlayName;
	int szGunXModel;
	int szHandXModel;
	char szXAnims[92];
	int szModeName;
	int playerAnimType;
	weapType_t weapType;
	weapClass_t weapClass;
	weapSlot_t weapSlot;
	OffhandClass offhandClass;
	int bSlotStackable;
	weapStance_t stance;
	int szViewFlashEffect;
	int szWorldFlashEffect;
	int szPickupSound;
	int szAmmoPickupSound;
	int szProjectileSound;
	int szPullbackSound;
	int szFireSound;
	int szFireSoundPlayer;
	int szFireLoopSound;
	int szFireLoopSoundPlayer;
	int szFireStopSound;
	int szFireStopSoundPlayer;
	int szFireLastSound;
	int szFireLastSoundPlayer;
	int meleeSwipeSound;
	int szRechamberSound;
	int szRechamberSoundPlayer;
	int szReloadSound;
	int szReloadSoundPlayer;
	int szReloadEmptySound;
	int szReloadEmptySoundPlayer;
	int szReloadStartSound;
	int szReloadStartSoundPlayer;
	int szReloadEndSound;
	int szReloadEndSoundPlayer;
	int szRaiseSound;
	int szAltSwitchSound;
	int szPutawaySound;
	int szNoteTrackSoundA;
	int szNoteTrackSoundB;
	int szNoteTrackSoundC;
	int szNoteTrackSoundD;
	int szShellEjectEffect;
	int szLastShotEjectEffect;
	int szReticleCenter;
	int szReticleSide;
	int iReticleCenterSize;
	int iReticleSideSize;
	int iReticleMinOfs;
	char vStandMove[12];
	char vStandRot[12];
	char vDuckedOfs[12];
	char vDuckedMove[12];
	char vDuckedRot[12];
	char vProneOfs[12];
	char vProneMove[12];
	char vProneRot[12];
	float fPosMoveRate;
	float fPosProneMoveRate;
	float fStandMoveMinSpeed;
	float fDuckedMoveMinSpeed;
	float fProneMoveMinSpeed;
	float fPosRotRate;
	float fPosProneRotRate;
	float fStandRotMinSpeed;
	float fDuckedRotMinSpeed;
	float fProneRotMinSpeed;
	int szWorldModel;
	int szHudIcon;
	int szModeIcon;
	int iStartAmmo;
	int szAmmoName;
	int iAmmoIndex;
	int szClipName;
	int iClipIndex;
	int iMaxAmmo;
	int iClipSize;
	int shotCount;
	int szSharedAmmoCapName;
	int iSharedAmmoCapIndex;
	int iSharedAmmoCap;
	int damage;
	int playerDamage;
	int iMeleeDamage;
	int iDamageType;
	int iFireDelay;
	int iMeleeDelay;
	int iFireTime;
	int iRechamberTime;
	int iRechamberBoltTime;
	int iHoldFireTime;
	int iMeleeTime;
	int iReloadTime;
	int iReloadEmptyTime;
	int iReloadAddTime;
	int iReloadStartTime;
	int iReloadStartAddTime;
	int iReloadEndTime;
	int iDropTime;
	int iRaiseTime;
	int iAltDropTime;
	int iAltRaiseTime;
	int quickDropTime;
	int quickRaiseTime;
	int iFuseTime;
	int autoAimRange;
	int slowdownAimRange;
	int slowdownAimRangeAds;
	int lockonAimRange;
	int lockonAimRangeAds;
	int enemyCrosshairRange;
	float fMoveSpeedScale;
	float fAdsZoomFov;
	float fAdsZoomInFrac;
	float fAdsZoomOutFrac;
	int szOverlayMaterial;
	weapOverlayReticle_t overlayReticle;
	int overlayWidth;
	int overlayHeight;
	float fAdsBobFactor;
	float fAdsViewBobMult;
	float fHipSpreadStandMin;
	float fHipSpreadDuckedMin;
	float fHipSpreadProneMin;
	int hipSpreadStandMax;
	int hipSpreadDuckedMax;
	int hipSpreadProneMax;
	float fHipSpreadDecayRate;
	float fHipSpreadFireAdd;
	float fHipSpreadTurnAdd;
	float fHipSpreadMoveAdd;
	float fHipSpreadDuckedDecay;
	float fHipSpreadProneDecay;
	float fHipReticleSidePos;
	int iAdsTransInTime;
	int iAdsTransOutTime;
	float fAdsIdleAmount;
	float fHipIdleAmount;
	int adsIdleSpeed;
	int hipIdleSpeed;
	float fIdleCrouchFactor;
	float fIdleProneFactor;
	float fGunMaxPitch;
	float fGunMaxYaw;
	int swayMaxAngle;
	int swayLerpSpeed;
	int swayPitchScale;
	int swayYawScale;
	int swayHorizScale;
	int swayVertScale;
	int swayShellShockScale;
	int adsSwayMaxAngle;
	int adsSwayLerpSpeed;
	int adsSwayPitchScale;
	int adsSwayYawScale;
	int adsSwayHorizScale;
	int adsSwayVertScale;
	int bRifleBullet;
	int armorPiercing;
	int bSemiAuto;
	int bBoltAction;
	int bADSPositionInfo;
	int bRechamberWhileAds;
	int adsViewErrorMin;
	int adsViewErrorMax;
	int bCookOffHold;
	int bClipOnly;
	int bWideListIcon;
	int bADSFire;
	int killIcon;
	int wideKillIcon;
	int flipKillIcon;
	int bNoPartialReload;
	int bSegmentedReload;
	int iReloadAmmoAdd;
	int iReloadStartAdd;
	int szAltWeaponName;
	int iAltWeaponIndex;
	int iDropAmmoMin;
	int iDropAmmoMax;
	int iExplosionRadius;
	int iExplosionInnerDamage;
	int iExplosionOuterDamage;
	int iProjectileSpeed;
	int iProjectileSpeedUp;
	int szProjectileModel;
	weapProjExposion_t projExplosion;
	int szProjExplosionEffect;
	int szProjExplosionSound;
	int bProjImpactExplode;
	char parallelBounce[92];
	char perpendicularBounce[92];
	int szProjTrailEffect;
	int iProjectileDLight;
	char vProjectileColor[12];
	float fAdsAimPitch;
	float fAdsCrosshairInFrac;
	float fAdsCrosshairOutFrac;
	int adsGunKickReducedKickBullets;
	int adsGunKickReducedKickPercent;
	float fAdsGunKickPitchMin;
	float fAdsGunKickPitchMax;
	float fAdsGunKickYawMin;
	float fAdsGunKickYawMax;
	float fAdsGunKickAccel;
	float fAdsGunKickSpeedMax;
	float fAdsGunKickSpeedDecay;
	float fAdsGunKickStaticDecay;
	float fAdsViewKickPitchMin;
	float fAdsViewKickPitchMax;
	float fAdsViewKickYawMin;
	float fAdsViewKickYawMax;
	float fAdsViewKickCenterSpeed;
	float fAdsViewScatterMin;
	float fAdsViewScatterMax;
	float fAdsSpread;
	int hipGunKickReducedKickBullets;
	int hipGunKickReducedKickPercent;
	float fHipGunKickPitchMin;
	float fHipGunKickPitchMax;
	float fHipGunKickYawMin;
	float fHipGunKickYawMax;
	float fHipGunKickAccel;
	float fHipGunKickSpeedMax;
	float fHipGunKickSpeedDecay;
	float fHipGunKickStaticDecay;
	float fHipViewKickPitchMin;
	float fHipViewKickPitchMax;
	float fHipViewKickYawMin;
	float fHipViewKickYawMax;
	float fHipViewKickCenterSpeed;
	float fHipViewScatterMin;
	float fHipViewScatterMax;
	int fightDist;
	int maxDist;
	int64_t accuracyGraphName;
	int64_t accuracyGraphKnots;
	int64_t accuracyGraphKnotCount;
	int iPositionReloadTransTime;
	int leftArc;
	int rightArc;
	int topArc;
	int bottomArc;
	int accuracy;
	int aiSpread;
	int playerSpread;
	int64_t minTurnSpeed;
	int64_t maxTurnSpeed;
	int pitchConvergenceTime;
	int yawConvergenceTime;
	int suppressTime;
	int maxRange;
	float fAnimHorRotateInc;
	float fPlayerPositionDist;
	int szUseHintString;
	int dropHintString;
	int iUseHintStringIndex;
	int dropHintStringIndex;
	int horizViewJitter;
	int vertViewJitter;
	int szScript;
	float fOOPosAnimLength;
	int minDamage;
	int minPlayerDamage;
	float fMaxDamageRange;
	float fMinDamageRange;
	int destabilizationBaseTime;
	int destabilizationTimeReductionRatio;
	int destabilizationAngleMax;
	int destabilizeDistance;
	char locationDamageMultipliers[76];
	int fireRumble;
	int meleeImpactRumble;
};

typedef enum
{
	WEAPTYPE_BULLET = 0,
	WEAPTYPE_GRENADE = 1,
	WEAPTYPE_PROJECTILE = 2,
	WEAPTYPE_BINOCULARS = 3,
	WEAPTYPE_NUM = 4
} weapType_t;

typedef enum
{
	WEAPCLASS_RIFLE = 0,
	WEAPCLASS_MG = 1,
	WEAPCLASS_SMG = 2,
	WEAPCLASS_SPREAD = 3,
	WEAPCLASS_PISTOL = 4,
	WEAPCLASS_GRENADE = 5,
	WEAPCLASS_ROCKETLAUNCHER = 6,
	WEAPCLASS_TURRET = 7,
	WEAPCLASS_NON_PLAYER = 8,
	WEAPCLASS_ITEM = 9,
	WEAPCLASS_NUM = 10
} weapClass_t;

typedef enum
{
	WEAPSLOT_NONE = 0,
	WEAPSLOT_PRIMARY = 1,
	WEAPSLOT_PRIMARYB = 2,
	WEAPSLOT_NUM = 3
} weapSlot_t;

typedef enum
{
	OFFHAND_CLASS_NONE = 0,
	OFFHAND_CLASS_FRAG_GRENADE = 1,
	OFFHAND_CLASS_SMOKE_GRENADE = 2,
	OFFHAND_CLASS_COUNT = 3
} OffhandClass;

typedef enum
{
	WEAPSTANCE_STAND = 0,
	WEAPSTANCE_DUCK = 1,
	WEAPSTANCE_PRONE = 2,
	WEAPSTANCE_NUM = 3
} weapStance_t;

typedef enum
{
	WEAPOVERLAYRETICLE_NONE = 0,
	WEAPOVERLAYRETICLE_CROSSHAIR = 1,
	WEAPOVERLAYRETICLE_FG42 = 2,
	WEAPOVERLAYRETICLE_SPRINGFIELD = 3,
	WEAPOVERLAYRETICLE_BINOCULARS = 4,
	WEAPOVERLAYRETICLE_NUM = 5
} weapOverlayReticle_t;

typedef enum
{
	WEAPPROJEXP_GRENADE = 0,
	WEAPPROJEXP_ROCKET = 1,
	WEAPPROJEXP_NONE = 2,
	WEAPPROJEXP_NUM = 3
} weapProjExposion_t;

struct weaponState_t
{
	int ps;
	int xyspeed;
	int frametime;
	char vLastMoveAng[12];
	float fLastIdleFactor;
	int time;
	int damageTime;
	int v_dmg_pitch;
	int v_dmg_roll;
	char vGunOffset[12];
	char vGunSpeed[12];
	char swayAngles[12];
	int weapIdleTime;
};

struct viewState_t
{
	int ps;
	int damageTime;
	int time;
	int v_dmg_pitch;
	int v_dmg_roll;
	int xyspeed;
	int frametime;
	float fLastIdleFactor;
	int weapIdleTime;
};

struct VariableValue_s
{
	VariableUnion u;
	int type;
};

union VariableUnion
{
	int intValue;
	int floatValue;
	int stringValue;
	int vectorValue;
	int codePosValue;
	int pointerValue;
	int stackValue;
	int entityOffset;
};

struct scr_entref_t
{
	short entnum;
	short classnum;
};

struct function_stack_t
{
	int pos;
	int localId;
	int localVarCount;
	int top;
	int startTop;
};

struct scr_anim_s
{
	short index;
	short tree;
};

struct scr_animtree_t
{
	int anims;
};

struct _3635
{
	int localVars;
	int maxstack;
	int function_count;
	int function_frame;
	int top;
	char debugCode;
	char abort_on_error;
	char terminal_error;
	char pad0[1];
	int inparamcount;
	int outparamcount;
	char function_frame_start[768];
	char stack[16384];
};

struct function_frame_t
{
	char fs[20];
	int topType;
};

struct _3636
{
	int dummy;
};

struct VariableValueInternal
{
	Variable hash;
	char pad0[10];
	short nextSibling;
};

struct Variable
{
	short id;
};

union _3654
{
	short next;
	VariableUnion u;
	ObjectInfo o;
};

union _3655
{
	int status;
	int type;
	int name;
	int classnum;
	int notifyName;
	int waitTime;
	int parentLocalId;
};

union _3656
{
	short next;
	short index;
};

struct ObjectInfo
{
	short refCount;
};

union _3653
{
	short size;
	short entnum;
	short nextEntId;
	short self;
};

struct VariableStackBuffer
{
	int pos;
	short size;
	short bufLen;
	short localId;
	char time;
	char buf;
};

struct ThreadDebugInfo
{
	char pos[128];
	int posSize;
	int varUsage;
	int endonUsage;
};

struct _3657
{
	char variableList[1048544];
};

struct scr_classStruct_t
{
	short id;
	short entArrayId;
	char charId;
	char pad0[3];
	int name;
};

struct scr_block_s
{
	int abortLevel;
	int localVarsCreateCount;
	int localVarsPublicCount;
	int localVarsCount;
	int64_t localVarsInitBits;
	char localVars[256];
};

struct scr_localVar_t
{
	int name;
};

struct VariableCompileValue
{
	int64_t value;
	int sourcePos;
};

struct ContinueStatementInfo
{
	int codePos;
	int nextCodePos;
	int next;
};

struct BreakStatementInfo
{
	int codePos;
	int nextCodePos;
	int next;
};

struct CaseStatementInfo
{
	int name;
	int codePos;
	int sourcePos;
	int next;
};

struct PrecacheEntry
{
	short filename;
	char include;
	char pad0[1];
	int sourcePos;
	int next;
};

struct _3620
{
	char dummy;
};

struct _3677
{
	int codePos;
	int prevOpcodePos;
	int fileId;
	int threadId;
	int cumulOffset;
	int maxOffset;
	int maxCallOffset;
	char bConstRefCount;
	char in_developer_thread;
	char pad0[2];
	int developer_thread_sourcePos;
	short firstThread;
	char bCanIgnoreCase;
	char pad1[1];
	int currentCaseStatement;
	char bCanBreak;
	char bCanIgnoreBreak;
	char pad2[2];
	int currentBreakStatement;
	char bCanContinue;
	char bCanIgnoreContinue;
	char pad3[2];
	int currentContinueStatement;
	int breakChildBlocks;
	int breakChildCount;
	int breakBlock;
	int continueChildBlocks;
	int continueChildCount;
	char forceNotCreate;
	char pad4[3];
	int precachescriptList;
	int precachescriptListHead;
	char value_start[384];
};

struct SaveSourceBufferInfo
{
	int sourceBuf;
	int len;
};

struct Scr_SourcePos_t
{
	int bufferIndex;
	int lineNum;
	int sourcePos;
};

struct _3645
{
	int pos;
	int localId;
	int localVarCount;
	int top;
	int startTop;
};

struct _3661
{
	int opcodeLookup;
	int opcodeLookupMaxLen;
	int opcodeLookupLen;
	int sourcePosLookup;
	int sourcePosLookupMaxLen;
	int sourcePosLookupLen;
	int sourceBufferLookupMaxLen;
	int currentCodePos;
	int currentSourcePosCount;
	int saveSourceBufferLookup;
	int saveSourceBufferLookupLen;
	int delayedSourceIndex;
	int threadStartSourceIndex;
};

struct _3701
{
	int animtrees;
	int animtree_node;
	int animTreeNames;
	char xanim_lookup[1024];
	int64_t xanim_num;
	int animTreeIndex;
	char animtree_loading;
};

struct _3724
{
	int start;
	int pos;
	char using_xanim_lookup[512];
	int bAnimCheck;
};

struct MantleResults
{
	char dir[12];
	char startPos[12];
	char ledgePos[12];
	char endPos[12];
	int flags;
	int duration;
};

struct MantleAnimTransition
{
	int upAnimIndex;
	int overAnimIndex;
	int height;
};

union _3659
{
	char baseCoords[12];
	char origin[12];
};

struct _3660
{
	int colorForDir;
	int sunVisibility;
};

union GfxModel
{
	int obj;
	int model;
	int bmodel;
	int data;
};

struct g_sa_type
{
	char initialized[3];
	char pad0[1];
	int randSeed;
	char pHash[4096];
	char aliasInfo[48];
	char soundFileInfo[24];
	char szLoadSpec[64];
	char curvesInitialized;
	char pad1[3];
	char volumeFalloffCurves[1152];
	char volumeFalloffCurveNames[1024];
};

struct SoundFileInfo
{
	int count;
	int files;
};

struct com_parse_mark_t
{
	int lines;
	int text;
	int ungetToken;
	int backup_lines;
	int backup_text;
};

struct ParseThreadInfo
{
	char parseInfo[17856];
	int parseInfoNum;
	int tokenPos;
	int prevTokenPos;
	char line[1024];
};

struct statmonitor_s
{
	int endtime;
	int material;
};

union sval_u
{
	int type;
	int stringValue;
	int idValue;
	int floatValue;
	int intValue;
	int node;
	int sourcePosValue;
	int codePosValue;
	int debugString;
	int block;
};

struct archivedEntityShared_t
{
	int svFlags;
	int64_t clientMask;
	char absmin[12];
	char absmax[12];
};

struct worldSector_s
{
	worldContents_t contents;
	worldTree_t tree;
};

struct worldContents_s
{
	int contentsStaticModels;
	int contentsEntities;
	short entities;
	short staticModels;
};

struct worldTree_s
{
	int dist;
	short axis;
	char pad0[2];
	int child;
};

union _3780
{
	short parent;
	short nextFree;
};

struct areaParms_t
{
	int start;
	int mins;
	int maxs;
	int list;
	int count;
	int maxcount;
	int contentmask;
	int results;
};

struct gentity_s
{
	char s[240];
	entityShared_t r;
};

struct entityShared_t
{
	char linked;
	char bmodel;
	char svFlags;
	char pad0[1];
	int64_t clientMask;
	char inuse;
	char pad1[3];
	int broadcastTime;
	char mins[12];
	char maxs[12];
	int contents;
	char absmin[12];
	char absmax[12];
	char currentOrigin[12];
	char currentAngles[12];
	int ownerNum;
	int eventTime;
};

struct sightpointtrace_t
{
	char start[12];
	char end[12];
	int64_t passEntityNum;
	int contentmask;
	int locational;
};

struct staticmodeltrace_t
{
	TraceExtents extents;
	int contents;
};

struct sightclip_t
{
	char mins[12];
	char maxs[12];
	char outerSize[12];
	char start[12];
	char end[12];
	int64_t passEntityNum;
	int contentmask;
};

struct locTraceWork_t
{
	int contents;
	char extents[36];
};

struct pointtrace_t
{
	char extents[36];
	int passEntityNum;
	int passOwnerNum;
	int contentmask;
	int bLocational;
	int priorityMap;
};

struct moveclip_t
{
	char mins[12];
	char maxs[12];
	char outerSize[12];
	char extents[36];
	int passEntityNum;
	int passOwnerNum;
	int contentmask;
};

struct cm_world_t
{
	char mins[12];
	char maxs[12];
	char lockTree;
	char pad0[1];
	short freeHead;
	char sectors[24576];
};

typedef enum
{
	FMV_IDLE = 0,
	FMV_PLAY = 1,
	FMV_EOF = 2,
	FMV_ID_BLT = 3,
	FMV_ID_IDLE = 4,
	FMV_LOOPED = 5,
	FMV_ID_WAIT = 6
} e_status;

struct _3803
{
	char linbuf[2097152];
	char file[65536];
	char sqrTable[512];
	char mcomp[1024];
	char qStatus[262144];
	int oldXOff;
	int oldYOff;
	int oldysize;
	int oldxsize;
	int currentHandle;
};

struct cin_cache
{
	char fileName[256];
	int CIN_WIDTH;
	int CIN_HEIGHT;
	int xpos;
	int ypos;
	int width;
	int height;
	int looping;
	int holdAtEnd;
	int dirty;
	int alterGameState;
	int silent;
	int material;
	int letterBox;
	int sound;
	int iFile;
	int status;
	int startTime;
	int lastFrameTime;
	int lastTime;
	int tfps;
	int RoQPlayed;
	int ROQSize;
	int RoQFrameSize;
	int onQuad;
	int numQuads;
	int samplesPerLine;
	int roq_id;
	int screenDelta;
	int VQ0;
	int VQ1;
	int VQNormal;
	int VQBuffer;
	int samplesPerPixel;
	int gray;
	int xsize;
	int ysize;
	int maxsize;
	int minsize;
	int half;
	int smootheddouble;
	int inMemory;
	int normalBuffer0;
	int roq_flags;
	int roqF0;
	int roqF1;
	int64_t t;
	int roqFPS;
	int playonwalls;
	int buf;
	connstate_t previousGameState;
};

typedef enum
{
	CA_DISCONNECTED = 0,
	CA_CINEMATIC = 1,
	CA_LOGO = 2,
	CA_CONNECTING = 3,
	CA_CHALLENGING = 4,
	CA_CONNECTED = 5,
	CA_LOADING = 6,
	CA_PRIMED = 7,
	CA_ACTIVE = 8
} connstate_t;

struct MD4_CTX
{
	char state[16];
	int64_t count;
	char buffer[64];
};

struct TestLod
{
	char enabled;
	char pad0[3];
	int dist;
};

struct snd_alias_build_s
{
	char szSourceFile[64];
	char szAliasName[64];
	char szSecondaryAliasName[64];
	int subtitleText;
	int iSequence;
	char szSoundFile[64];
	int permSoundFile;
	float fVolMin;
	float fVolMax;
	float fVolMod;
	float fPitchMin;
	float fPitchMax;
	float fDistMin;
	float fDistMax;
	int iChannel;
	snd_alias_type_t eType;
	int volumeFalloffCurve;
	float fSlavePercentage;
	float fProbability;
	float fLfePercentage;
	int startDelay;
	char bLooping;
	char bMaster;
	char bSlave;
	char bFullDryLevel;
	char bNoWetLevel;
	char error;
	char keep;
	char pad0[1];
	int pSameSoundFile;
	int pNext;
};

typedef enum
{
	SA_INVALID = 0,
	SA_NAME = 1,
	SA_SEQUENCE = 2,
	SA_FILE = 3,
	SA_SUBTITLE = 4,
	SA_VOL_MIN = 5,
	SA_VOL_MAX = 6,
	SA_VOL_MOD = 7,
	SA_PITCH_MIN = 8,
	SA_PITCH_MAX = 9,
	SA_DIST_MIN = 10,
	SA_DIST_MAX = 11,
	SA_CHANNEL = 12,
	SA_TYPE = 13,
	SA_LOOP = 14,
	SA_PROBABILITY = 15,
	SA_LOADSPEC = 16,
	SA_MASTERSLAVE = 17,
	SA_SECONDARYALIASNAME = 18,
	SA_VOLUMEFALLOFFCURVE = 19,
	SA_STARTDELAY = 20,
	SA_SPEAKERMAP = 21,
	SA_REVERB = 22,
	SA_LFEPERCENTAGE = 23,
	SA_NUMFIELDS = 24
} snd_alias_members_t;

struct saLoadObjGlob_type
{
	int tempAliases;
	int tempAliasCount;
	char volumeModGroups[2176];
	char volumeModGroupsInitialized;
	char refreshVolumeModGroupsCommandInitialized;
};

struct VolumeModGroup
{
	char name[64];
	int value;
};

union _3678
{
	short b;
	short s;
};

union _3680
{
	int b;
	int f;
};

struct _3696
{
	char entries[4112];
	char mins[12];
	char maxs[12];
	int collLod;
	char flags;
};

struct XModelConfigEntry
{
	char filename[1024];
	int dist;
};

union _3679
{
	int b;
	int i;
};

struct infoParm_t
{
	int name;
	int clearSolid;
	int surfaceFlags;
	int contents;
	int toolFlags;
};

struct source_s
{
	char filename[64];
	char includepath[64];
	int punctuations;
	int scriptstack;
	int tokens;
	int defines;
	int definehash;
	int indentstack;
	int skip;
	char pad0[4];
	token_t token;
};

struct token_s
{
	char string[1024];
	int type;
	int subtype;
	int intvalue;
	char pad0[4];
	char floatvalue[16];
	int whitespace_p;
	int endwhitespace_p;
	int line;
	int linescrossed;
	int next;
};

struct punctuation_s
{
	int p;
	int n;
	int next;
};

struct script_s
{
	char filename[64];
	int buffer;
	int script_p;
	int end_p;
	int lastscript_p;
	int whitespace_p;
	int endwhitespace_p;
	int length;
	int line;
	int lastline;
	int tokenavailable;
	int flags;
	int punctuations;
	int punctuationtable;
	char pad0[12];
	char token[1088];
	int next;
};

struct define_s
{
	int name;
	int flags;
	int builtin;
	int numparms;
	int parms;
	int tokens;
	int next;
	int hashnext;
};

struct indent_s
{
	int type;
	int skip;
	int script;
	int next;
};

struct pc_token_s
{
	int type;
	int subtype;
	int intvalue;
	int floatvalue;
	char string[1024];
};

struct directive_s
{
	int name;
	int func;
};

struct _3782
{
	int evTime;
	int evType;
	int evValue;
	int evValue2;
	int evPtrLength;
	int evPtr;
};

struct _3776
{
	netadrtype_t type;
	int ip;
	short port;
};

struct _3798
{
	int reflib_library;
	int reflib_active;
	int hWnd;
	int hInstance;
	int activeApp;
	int isMinimized;
	int sysMsgTime;
};

struct _3461
{
	int dd_fd;
	int dd_loc;
	int dd_size;
	int dd_buf;
	int dd_len;
	int dd_seek;
	int dd_rewind;
	int dd_flags;
	__darwin_pthread_mutex_t dd_lock;
	int dd_td;
};

struct GfxSceneEntity
{
	int refCount;
	GfxModel u;
	int cent;
	int cullState;
	int surfCount;
	char curMins[12];
	char curMaxs[12];
	int materials;
	int surfs;
};

typedef enum
{
	SF_BAD = 0,
	SF_POLY = 1,
	SF_ENTITY = 2,
	SF_XMODEL_SKINNED = 3,
	SF_XMODEL_RIGID = 4,
	SF_STATICMODEL_CACHED = 5,
	SF_TRIANGLES = 6,
	SF_RAW_GEOMETRY = 7,
	SF_NUM_SURFACE_TYPES = 8,
	SF_MAX = 4294967295
} surfaceType_t;

struct GfxBrushModel
{
	char bounds[24];
	int surfaceCount;
	int startSurfIndex;
};

struct Material
{
	MaterialInfo info;
	int64_t stateBits;
	short textureCount;
	short constantCount;
	int techniqueSet;
	int textures;
	int constants;
};

struct MaterialInfoObj_s
{
	int name;
	int refImageName;
	short hashIndex;
	short sortedIndex;
	char gameFlags;
	char sortKey;
	char textureAtlasRowCount;
	char textureAtlasColumnCount;
	int maxDeformMove;
	char deformFlags;
	char usage;
	short toolFlags;
	int locale;
	short autoTexScaleWidth;
	short autoTexScaleHeight;
	int tessSize;
	int surfaceFlags;
	int contents;
};

struct MaterialTechniqueSet
{
	int name;
	char techniques[136];
};

struct MaterialTextureDef
{
	int name;
	char samplerState;
	char semantic;
	char unused_0;
	char unused_1;
	MaterialTextureDefInfo u;
};

union MaterialTextureDefInfo
{
	int image;
	int water;
};

struct MaterialConstantDefObj
{
	int name;
	char literal[16];
};

struct MaterialTechnique
{
	int name;
	short flags;
	short passCount;
	MaterialPassArray passArray;
};

struct GfxImage
{
	D3DRESOURCETYPE mapType;
	GfxTexture texture;
	Picmip picmip;
	char semantic;
	char noPicmip;
	char track;
	char pad0[3];
	CardMemory cardMemory;
	short width;
	short height;
	short depth;
	char category;
	char pad1[1];
	int name;
};

struct MaterialWaterDef
{
	int textureWidth;
	int horizontalWorldLength;
	int verticalWorldLength;
	int amplitude;
	int windSpeed;
	int64_t windDirection;
	int map;
};

union MaterialPassArray
{
	char dx7[92];
	char dx9[28];
};

union GfxTexture
{
	int basemap;
	int map;
	int volmap;
	int cubemap;
	int loadDef;
};

struct Picmip
{
	short platform;
};

struct CardMemory
{
	int64_t platform;
};

struct water_t
{
	WaterWritable writable;
	int H0;
	int wTerm;
	int M;
	int N;
	int Lx;
	int Lz;
	int gravity;
	int windvel;
	int64_t winddir;
	int amplitude;
	char codeConstant[16];
	int image;
};

struct MaterialPassDx7
{
	int stateMap;
	char gridLighting;
	char projectToInfinity;
	char ambientLighting;
	char objectiveGlow;
	char fogToBlack;
	short genTexCoords;
	char pad0[1];
	char samplers[16];
	char colorStageBits[32];
	char alphaStageBits[32];
};

struct MaterialPassDx9
{
	int stateMap;
	int vertexDecl;
	int vertexShader;
	int pixelShader;
	short vertexArgCount;
	short pixelArgCount;
	int vertexArgs;
	int pixelArgs;
};

struct GfxImageLoadDef
{
	char format;
	char flags;
	char dimensions[6];
	int data;
	int resourceSize;
};

struct WaterWritable
{
	int frameCount;
};

struct MaterialStateMap
{
	int name;
	char ruleSet[44];
};

struct MaterialShaderArgument
{
	short type;
	short dest;
	MaterialArgumentDef u;
};

struct MaterialVertexDeclaration
{
	int data;
	int streamCount;
	char decl[16];
};

struct MaterialShader
{
	int name;
	int program;
	short programLen;
	char shaderType;
	char shaderVersion;
	MaterialShaderPtr u;
};

struct complex_s
{
	int real;
	int imag;
};

union MaterialArgumentDef
{
	int literalConst;
	MaterialArgumentCodeConst codeConst;
	int codeSampler;
	int name;
};

union MaterialShaderPtr
{
	int vs;
	int ps;
};

struct MaterialArgumentCodeConst
{
	short index;
	char firstRow;
	char rowCount;
};

struct MaterialStreamRouting
{
	char source;
	char dest;
};

struct MaterialStateMapRuleSet
{
	int ruleCount;
	char rules[32];
};

struct MaterialStateMapRule
{
	int64_t stateBitsMask;
	int64_t stateBitsValue;
	int64_t stateBitsSet;
	int64_t stateBitsClear;
};

struct GfxDrawSurf
{
	int sort;
	int surface;
};

struct GfxViewParms
{
	char origin[12];
	char axis[36];
	char viewport[24];
	char viewMatrix[64];
	char projectionMatrix[64];
	char viewProjectionMatrix[64];
	char inverseViewProjectionMatrix[64];
	int depthHackNearClip;
};

typedef enum
{
	SHADOW_NONE = 0,
	SHADOW_COOKIE = 1
} ShadowType;

struct GfxPostProcessParms
{
	int blurRadius;
	char isRenderingFullScreen;
};

struct GfxLight
{
	int def;
	char position[16];
	char color[12];
	GfxLightInfo u;
};

union GfxLightInfo
{
	GfxLightDir dir;
};

struct GfxLightDef
{
	GfxLightType type;
	GfxLightImage cookie;
	int64_t attenuation;
	int name;
};

struct GfxLightDir
{
	char ambientColor[12];
};

typedef enum
{
	GFX_LIGHT_TYPE_SUN = 0,
	GFX_LIGHT_TYPE_SKY = 1,
	GFX_LIGHT_TYPE_POINT = 2,
	GFX_LIGHT_TYPE_COUNT = 3
} GfxLightType;

struct GfxLightImage
{
	int image;
	char samplerState;
};

struct GfxModelSurface
{
	int surfType;
	int xsurf;
};

struct XSurface_s
{
	char tileMode;
	char pad0[1];
	short vertCount;
	short triCount;
	short boneOffset;
	int triIndices;
	int verts;
	XRigidSurface surfRigid;
	int indexBuffer;
};

struct XRigidSurface
{
	int vb;
};

struct XVertexBuffer
{
	XVertexInfo v;
	char w[16];
};

struct XVertexInfo_s
{
	char normal[12];
	int color;
	char binormal[12];
	int texCoordX;
	char tangent[12];
	int texCoordY;
	char offset[12];
	char numWeights;
	char boneWeight;
	short boneOffset;
};

struct XBlendInfo_s
{
	char offset[12];
	short boneOffset;
	short boneWeight;
};

struct GfxSurface
{
	int material;
	short lightmapIndex;
	short sortGroup;
};

union _3707
{
	int data;
	int tris;
};

struct srfTriangles_t
{
	int surfaceType;
	char bounds[24];
	int firstVertex;
	short vertexCount;
	short indexCount;
	int indices;
};

struct srfPoly_t
{
	int surfaceType;
	int material;
	short lmapIndex;
	short vertCount;
	int verts;
};

struct PointLightPartition
{
	int light;
	int firstDrawSurf;
	int drawSurfCount;
};

struct GfxStaticModelInstance
{
	int cullDist;
	char origin[12];
	int model;
	char mins[12];
	char maxs[12];
	char axis[36];
	int scale;
	char baseLightingCoords[12];
};

struct GfxScene
{
	int viewCount;
	GfxSceneDef def;
	int dlightCount;
	char dlights[1408];
	char dlightCulled[32];
	int drawSurfCount;
	int drawSurfs;
	int polyCount;
	char sceneEnts[106392];
	int sceneEntMaterialCount;
	char sceneMaterials[16384];
};

struct GfxSceneDef
{
	int time;
	int floatTime;
	int entityCount;
	int entities;
};

struct trXSkin_t
{
	int materialHandles;
};

union _3729
{
	int verts;
	int blends;
};

union _3664
{
	short b;
	short s;
};

union _3665
{
	short b;
	short s;
};

struct _3715
{
	int verts;
	int vertCount;
	int vertLimit;
	int polys;
	int polyCount;
	int polyLimit;
	int strings;
	int stringCount;
	int stringLimit;
	int externStrings;
	int externStringCount;
	int externMaxStringCount;
	int lines;
	int lineCount;
	int lineLimit;
	int externLines;
	int externLineCount;
	int externMaxLineCount;
	int plumes;
	int plumeCount;
	int plumeLimit;
};

struct GfxDebugPoly
{
	char color[16];
	int firstVert;
	int vertCount;
};

struct trDebugString_t
{
	char xyz[12];
	char color[16];
	int scale;
	char text[96];
};

struct trDebugLine_t
{
	char start[12];
	char end[12];
	char color[16];
	int depthTest;
};

struct GfxDebugPlume
{
	char origin[12];
	char color[16];
	int score;
	int startTime;
	int duration;
};

struct GfxCmdHeader
{
	short id;
	short byteCount;
};

typedef enum
{
	TECHNIQUE_DEPTH_PREPASS = 0,
	TECHNIQUE_SKY = 1,
	TECHNIQUE_BUILD_FLOAT_Z = 2,
	TECHNIQUE_FOGABLE_FIRST = 3,
	TECHNIQUE_UNLIT = 3,
	TECHNIQUE_UNLIT_FOG_LINEAR = 4,
	TECHNIQUE_UNLIT_FOG_EXP = 5,
	TECHNIQUE_LIGHTING_FIRST = 6,
	TECHNIQUE_LIGHTMAP = 6,
	TECHNIQUE_LIGHTMAP_FOG_LINEAR = 7,
	TECHNIQUE_LIGHTMAP_FOG_EXP = 8,
	TECHNIQUE_LIGHTPROBE_NOT_CACHED_FIRST = 9,
	TECHNIQUE_LIGHTPROBE = 9,
	TECHNIQUE_LIGHTPROBE_FOG_LINEAR = 10,
	TECHNIQUE_LIGHTPROBE_FOG_EXP = 11,
	TECHNIQUE_LIGHTPROBE_SMODEL = 12,
	TECHNIQUE_LIGHTPROBE_SMODEL_FOG_LINEAR = 13,
	TECHNIQUE_LIGHTPROBE_SMODEL_FOG_EXP = 14,
	TECHNIQUE_LIGHTPROBE_NOT_CACHED_LAST = 14,
	TECHNIQUE_LIGHTPROBE_SMODEL_CACHED = 15,
	TECHNIQUE_LIGHTPROBE_SMODEL_CACHED_FOG_LINEAR = 16,
	TECHNIQUE_LIGHTPROBE_SMODEL_CACHED_FOG_EXP = 17,
	TECHNIQUE_LIGHTING_LAST = 17,
	TECHNIQUE_POINTLIGHT = 18,
	TECHNIQUE_POINTLIGHT_FOG_LINEAR = 19,
	TECHNIQUE_POINTLIGHT_FOG_EXP = 20,
	TECHNIQUE_EMISSIVE = 21,
	TECHNIQUE_EMISSIVE_FOG_LINEAR = 22,
	TECHNIQUE_EMISSIVE_FOG_EXP = 23,
	TECHNIQUE_EMISSIVE_FEATHERED = 24,
	TECHNIQUE_EMISSIVE_FEATHERED_FOG_LINEAR = 25,
	TECHNIQUE_EMISSIVE_FEATHERED_FOG_EXP = 26,
	TECHNIQUE_FOGABLE_LAST = 26,
	TECHNIQUE_FAKELIGHT_NORMAL = 27,
	TECHNIQUE_FAKELIGHT_VIEW = 28,
	TECHNIQUE_WIREFRAME_SOLID = 29,
	TECHNIQUE_WIREFRAME_SHADED = 30,
	TECHNIQUE_SHADOWCOOKIE_CASTER = 31,
	TECHNIQUE_SHADOWCOOKIE_RECEIVER = 32,
	TECHNIQUE_DEBUG_BUMPMAP = 33,
	TECHNIQUE_COUNT = 34,
	TECHNIQUE_TOTAL_COUNT = 35,
	TECHNIQUE_NONE = -1
} MaterialTechniqueType;

struct Font_s
{
	int name;
	int pixelHeight;
	int glyphCount;
	int material;
	int glyphs;
};

struct Glyph
{
	short letter;
	char x0;
	char y0;
	char dx;
	char pixelWidth;
	char pixelHeight;
	char pad0[1];
	int s0;
	int t0;
	int s1;
	int t1;
};

typedef enum
{
	R_RENDERTARGET_FRAME_BUFFER = 0,
	R_RENDERTARGET_RESOLVED_POST_SUN = 1,
	R_RENDERTARGET_RESOLVED_SCENE = 2,
	R_RENDERTARGET_DYNAMICSHADOWS = 3,
	R_RENDERTARGET_SHADOWCOOKIE = 4,
	R_RENDERTARGET_SHADOWCOOKIE_BLUR = 5,
	R_RENDERTARGET_FLOAT_Z = 6,
	R_RENDERTARGET_SAVED_SCREEN = 7,
	R_RENDERTARGET_BLURRED_SCREEN = 8,
	R_RENDERTARGET_GLOW_0 = 9,
	R_RENDERTARGET_GLOW_1 = 10,
	R_RENDERTARGET_PINGPONG_0 = 11,
	R_RENDERTARGET_PINGPONG_1 = 12,
	R_RENDERTARGET_COUNT = 13,
	R_RENDERTARGET_NONE = 14
} GfxRenderTargetId;

struct GfxLodParms
{
	char origin[12];
	int scale;
	int bias;
};

struct GfxCmdDrawPoints
{
	int header;
	short pointCount;
	short size;
	char verts[16];
};

struct GfxPointVertex
{
	char xyz[12];
	int color;
};

struct GfxCmdDrawLines
{
	int header;
	short lineCount;
	short width;
	char verts[32];
};

struct GfxBackEndData
{
	int frameCount;
	int drawSurfCount;
	char drawSurfs[524288];
	int surfPos;
	char surfsBuffer[131072];
	int entityCount;
	char entities[949344];
	int polyCount;
	char polys[32768];
	int polyVertCount;
	char polyVerts[557056];
	int skinnedCacheVb;
	int viewParmCount;
	char viewParms[8300];
	GfxFog fogSettings;
	GfxCmdArray commands;
	char debugGlobals[84];
};

struct GfxFog
{
	GfxFogOffset techniqueOffset;
	int startTime;
	int finishTime;
	GfxColor color;
	int fogStart;
	int fogEnd;
	int density;
	char registered;
	char drawSky;
	char clearScreen;
};

struct GfxCmdArray
{
	char cmds[196608];
	int usedTotal;
	int usedCritical;
	int lastCmd;
};

struct SkinBuffers
{
	char matArrayBuf[8192];
};

struct r_vb_state_t
{
	int used;
	int total;
	int buffer;
};

typedef enum
{
	FOG_OFFSET_NONE = 0,
	FOG_OFFSET_LINEAR = 1,
	FOG_OFFSET_EXP = 2,
	FOG_OFFSET_COUNT = 3
} GfxFogOffset;

union _3714
{
	char dx7[12288];
	char dx9[32768];
};

struct DObjSkelMat_s
{
	char axis[48];
	char origin[16];
};

struct GfxSModelCachedVertexDx7
{
	char xyz[12];
	int color;
	int64_t texCoord;
};

struct GfxSModelCachedVertex
{
	char xyz[12];
	char normal[12];
	int color;
	int64_t texCoord;
	int baseLightingCoords;
	char binormal[12];
	char tangent[12];
};

struct GfxDebugFrameGlob
{
	int restoreCmdList;
	int restoreFrontEndDataOut;
	char restoreSkinnedCache;
	char pad0[3];
	char frontEndDataOut[2399596];
};

struct trStatistics_t
{
	int c_indexes;
	int c_fxIndexes;
	int c_viewIndexes;
	int c_shadowIndexes;
	int c_vertexes;
	int c_batches;
	int c_refents;
	int dc;
	Image_MemUsage c_imageUsage;
};

struct Image_MemUsage
{
	int total;
	int lightmap;
	int minspec;
};

struct refexport_t
{
	int Shutdown;
	int BeginRegistration;
	int RegisterModel;
	int RegisterInlineModel;
	int RegisterMaterial;
	int RegisterRawImage;
	int Material_IsDefault;
	int LoadWorld;
	int GetWorldBounds;
	int FinishLoadingModels;
	int SetIgnorePrecacheErrors;
	int GetIgnorePrecacheErrors;
	int GetMinSpecImageMemory;
	int GetMaterialName;
	int GetMaterialSubimageCount;
	int IsMaterialRefractive;
	int GetFarPlaneDist;
	int EndRegistration;
	int ClearScene;
	int DefaultVertexFrames;
	int AddPolyToScene;
	int AddLightToScene;
	int InterpretSunLightParseParams;
	int ResetSunLightParseParams;
	int SetCullDist;
	int SetFog;
	int SwitchFog;
	int ArchiveFogState;
	int ClearFogs;
	int SetSunLightOverride;
	int ResetSunLightOverride;
	int RenderScene;
	int BeginDelayedDrawing;
	int EndDelayedDrawing;
	int IssueDelayedDrawing;
	int ClearFlares;
	int SetMaterialColor;
	int DrawStretchPic;
	int DrawStretchPicRotate;
	int DrawStretchRaw;
	int DrawQuadPic;
	int DrawSprite;
	int BeginFrame;
	int EndFrame;
	int BeginDebugFrame;
	int EndDebugFrame;
	int EndView;
	int DoneRenderingViews;
	int SaveScreen;
	int BlendSavedScreen;
	int ClearScreen;
	int SetViewport;
	int MarkFragments;
	int ModelBounds;
	int TrackStatistics;
	int PickMaterial;
	int RegisterFont;
	int ResetImageAllocations;
	int FreeImageAllocations;
	int BeginCubemapShot;
	int EndCubemapShot;
	int SaveCubemapShot;
	int LightingFromCubemapShots;
	int LocateDebugStrings;
	int LocateDebugLines;
	int AddPlume;
	int ShutdownDebug;
	int UpdateColor;
	int NormalizedTextScale;
	int TextWidth;
	int TextHeight;
	int DrawText;
	int DrawTextInSpace;
	int ConsoleTextWidth;
	int DrawConsoleText;
	int DrawTextWithCursor;
	int DObjGetSurfMaterials;
	int DObjReplaceMaterial;
	int ParseSunLight;
	int Material_Duplicate;
	int DuplicateFont;
	char XModelAllowReadSurface;
	char pad0[3];
	int SyncRenderThread;
	int AbortRenderCommands;
	int IsGpuFenceFinished;
	int SyncGpu;
	int GpuWaited;
	int SetLodOrigin;
};

struct refimport_t
{
	int Printf;
	int Error;
	int Milliseconds;
	int Hunk_AllocInternal;
	int Hunk_AllocateTempMemoryInternal;
	int Z_MallocInternal;
	int Z_FreeInternal;
	int Hunk_AllocAlignInternal;
	int Z_VirtualReserveInternal;
	int Z_VirtualCommitInternal;
	int Z_VirtualDecommitInternal;
	int Z_VirtualFreeInternal;
	int Hunk_FreeTempMemory;
	int Hunk_ClearTempMemory;
	int Hunk_HideTempMemory;
	int Hunk_ShowTempMemory;
	int Hunk_AllocateTempMemoryHighInternal;
	int Hunk_ClearTempMemoryHigh;
	int Sys_DirectXFatalError;
	int Sys_ShowSplashWindow;
	int Sys_HideSplashWindow;
	int Sys_LoadingKeepAlive;
	int Dvar_RegisterBool;
	int Dvar_RegisterInt;
	int Dvar_RegisterFloat;
	int Dvar_RegisterString;
	int Dvar_RegisterEnum;
	int Dvar_RegisterColor;
	int Dvar_RegisterVec2;
	int Dvar_RegisterVec3;
	int Dvar_RegisterVec4;
	int Dvar_UnregisterSystem;
	int Dvar_ChangeResetValue;
	int Dvar_IsAtDefaultValue;
	int Dvar_ClearModified;
	int Dvar_SetModified;
	int Dvar_UpdateEnumDomain;
	int Dvar_SetBool;
	int Dvar_SetInt;
	int Dvar_SetFloat;
	int Dvar_SetString;
	int Dvar_SetColor;
	int Dvar_SetVec2;
	int Dvar_SetVec3;
	int Dvar_SetVec4;
	int Dvar_SetFromString;
	int Dvar_SetBoolByName;
	int Dvar_SetIntByName;
	int Dvar_SetFloatByName;
	int Dvar_SetStringByName;
	int Dvar_SetColorByName;
	int Dvar_SetVec2ByName;
	int Dvar_SetVec3ByName;
	int Dvar_SetVec4ByName;
	int Dvar_SetFromStringByName;
	int Dvar_GetBool;
	int Dvar_GetInt;
	int Dvar_GetFloat;
	int Dvar_GetString;
	int Dvar_GetVariantString;
	int Dvar_EnumToString;
	int Dvar_Reset;
	int Cmd_AddCommand;
	int Cmd_RemoveCommand;
	int Cmd_Argc;
	int Cmd_Argv;
	int Cbuf_ExecuteText;
	int Com_SaveDvarsToBuffer;
	int Com_LoadDvarsFromBuffer;
	int Com_GetBsp;
	int SEH_ReadCharFromString;
	int CL_UpdateDebugData;
	int CL_FlushDebugData;
	int StatMon_Warning;
	int FS_ReadFile;
	int FS_FreeFile;
	int FS_FOpenFileRead;
	int FS_ListFiles;
	int FS_FreeFileList;
	int FS_FileExists;
	int FS_WriteFile;
	int FS_FOpenFileByMode;
	int FS_FCloseFile;
	int FS_Read;
	int FS_Write;
	int CM_SaveLump;
	int CM_BoxTrace;
	int CM_BoxSightTrace;
	int CM_RayTriangleIntersect;
	int XModelPrecache;
	int XModelGetSurfaces;
	int XModelBad;
	int Hunk_OverrideDataForFile;
	int XModelGetNumLods;
	int XModelSetTestLods;
	int XModelGetLodForDist;
	int XModelGetLodOutDist;
	int XModelGetSurfaceName;
	int XModelGetName;
	int XModelGetFlags;
	int XModelNumBones;
	int XModelGetSkins;
	int XModelGetMemUsage;
	int XModelGetLodName;
	int XModelGetBasePose;
	int XModelGetBasePoseBone;
	int DObjBad;
	int DB_EnumXAssets;
	int DObjGetBounds;
	int DObjGetSurface;
	int DObjGetNumModels;
	int DObjGetNumSurfaces;
	int DObjGetSurfaces;
	int DObjGetPartBits;
	int DObjGetRotTransArray;
	int DObjSkelAreBonesUpToDate;
	int DObjGetMatOffset;
	int DObjGetModel;
	int DObjGetSurfaceName;
	int DObjCreate;
	int DObjGetAllocSkelSize;
	int DObjCreateSkel;
	int DObjCalcAnim;
	int DObjCalcSkel;
	int DObjNumBones;
	int DObjGetBoneInfo;
	int DObjGetLodForDist;
	int DObjGetLodOutDist;
	int DObjCompleteHierarchyBits;
	int DObjSetModel;
	int CIN_UploadCinematic;
	int CIN_PlayCinematic;
	int CIN_RunCinematic;
	int CG_DObjCalcPose;
	int CL_GetHudMsgIconMaterialName;
};

struct GfxGammaRamp
{
	char entries[512];
};

struct GfxWindowParms
{
	int hwnd;
	int hz;
	char fullscreen;
	char pad0[3];
	int x;
	int y;
	int width;
	int height;
	int tileCount;
	int aaSamples;
};

struct vidConfig_t
{
	int width;
	int height;
	int displayFrequency;
	int isFullscreen;
	int aspectRatioWindow;
	int aspectRatioPixel;
	int maxTextureSize;
	int maxTextureMaps;
	int maxTextureCoords;
	int maxActiveLights;
	char deviceSupportsGamma;
};

struct DxGlobals
{
	int hinst;
	int d3d9;
	int device;
	int adapterIndex;
	int backBufferFormat;
	int displayModeCount;
	char displayModes[4096];
	char resolutionNameTable[1028];
	char refreshRateNameTable[1028];
	char modeText[5120];
	int gpuSync;
	int multiSampleType;
	int multiSampleQuality;
	int sunSpriteSamples;
	char renderTargets[260];
	int singleSampleDepthStencilSurface;
	short cubemapShotRes;
	short cubemapShotPixelBorder;
	char deviceLost;
	char inScene;
	short feedbackWidth;
	short feedbackHeight;
	char pad0[2];
	int targetWindowIndex;
	int windowCount;
	char windows[16];
	int flushGpuQuery;
	int gpuSyncDelay;
	int gpuSyncAlreadyWaited;
	char flushGpuQueryIssued;
	char pad1[3];
	int anisotropy;
	int maxAnisotropy;
	int maxClipPlanes;
	char stencilTwoSided;
	char stencilWrap;
	char slopeScaleDepthBias;
	char canMipCubemaps;
	char hasBlendOp;
	char hasSeparateAlphaBlend;
	char hasTransparencyMsaa;
	char pad2[1];
	char dynamicIndexBufferPool[12];
	int dynamicIndexBuffer;
	char skinnedCacheVbPool[24];
	char dynamicVertexBufferPool[12];
	int dynamicVertexBuffer;
	int particleCloudVertexBuffer;
	int particleCloudIndexBuffer;
	int skinnedCacheLockAddr;
	int smodelCacheVb;
	int smodelCacheIndices;
	int dynamicBufferFrame;
	int tempSkinBuf;
	int tempSkinPos;
};

struct GfxRenderTarget
{
	int image;
	int colorSurface;
	int depthStencilSurface;
	int width;
	int height;
};

struct GfxWindowTarget
{
	int hwnd;
	int swapChain;
	int width;
	int height;
};

struct r_ib_state_t
{
	int used;
	int total;
	int buffer;
};

struct r_global_permanent_t
{
	int materialLoaded;
	int materialCount;
	char sortedMaterials[4096];
	int whiteImage;
	int blackImage;
	int identityNormalMapImage;
	int specularityImage;
	int lightmapWeightsImage;
	int64_t lightGridWeightsImage;
	int outdoorImage;
	int dlightDef;
	int defaultMaterial;
	int rawMaterial;
	int stencilPlaneMaterial;
	int whiteMaterial;
	int additiveMaterial;
	int pointMaterial;
	int lineMaterial;
	int clearAlphaStencilMaterial;
	int shadowClearMaterial;
	int shadowCookieOverlayMaterial;
	int shadowCookieBlurMaterial;
	int glareBlindMaterial;
	int normalFillMaterial;
	int alphaBlendFillMaterial;
	int alphaTestPassFillMaterial;
	int alphaTestFailFillMaterial;
	int additiveFillMaterial;
	int depthOnlyFillMaterial;
	int stencilOneSideKeepFillMaterial;
	int stencilOneSideRejectFillMaterial;
	int stencilTwoSideKeepFillMaterial;
	int stencilTwoSideRejectFillMaterial;
	int phongBumpFillMaterial;
	int phongBumpSpecFillMaterial;
	int colorChannelMixerMaterial;
	int frameColorDebugMaterial;
	int frameAlphaDebugMaterial;
	int rawImage;
	int world;
	int sunHalfAngleImage;
	int waterColorImage;
	int feedbackReplaceMaterial;
	int feedbackBlendMaterial;
	char symmetricFilterMaterial[32];
	int shellShockMaterial;
	int glowSetupMaterial;
	int glowApplySkyBleedMaterial;
	int glowApplyBloomMaterial;
	int savedScreenTime;
	char rawTexdef[12];
};

struct GfxWorld
{
	int name;
	int baseName;
	int nodeCount;
	int nodes;
	int surfaceCount;
	int surfaces;
	int skySurfCount;
	int skyStartSurfs;
	int skyImage;
	char skySamplerState;
	char pad0[3];
	int vertexCount;
	GfxWorldVertexData vd;
	SunLightParseParams sunParse;
	GfxLight sunLight;
	char sunColorFromBsp[12];
	int cullGroupCount;
	int cullGroups;
	int smodelCount;
	int smodelInsts;
	int cellCount;
	int cells;
	int lightmapCount;
	int lightmaps;
	int smodelLightingImage;
	char smodelLightingLookupScale[12];
	GfxLightGrid lightGrid;
	int smodelLightingColorTable;
	int smodelLightingSunVisTable;
	int modelCount;
	int models;
	char mins[12];
	char maxs[12];
	int checksum;
	int materialMemoryCount;
	int materialMemory;
	sunflare_t sun;
	char outdoorLookupMatrix[64];
	int outdoorImage;
};

struct GfxWorldVertexData
{
	int vertices;
	int worldVb;
};

struct SunLightParseParams
{
	char name[64];
	int ambientScale;
	char ambientColor[12];
	int diffuseFraction;
	int sunLight;
	char sunColor[12];
	char diffuseColor[12];
	char diffuseColorHasBeenSet;
	char pad0[3];
	char angles[12];
};

struct GfxLightGrid
{
	int pointCount;
	int points;
	int colorCount;
	int colors;
};

struct sunflare_t
{
	char hasValidData;
	char pad0[3];
	int spriteMaterial;
	int flareMaterial;
	int spriteSize;
	int flareMinSize;
	int flareMinDot;
	int flareMaxSize;
	int flareMaxDot;
	int flareMaxAlpha;
	int flareFadeInTime;
	int flareFadeOutTime;
	int blindMinDot;
	int blindMaxDot;
	int blindMaxDarken;
	int blindFadeInTime;
	int blindFadeOutTime;
	int glareMinDot;
	int glareMaxDot;
	int glareMaxLighten;
	int glareFadeInTime;
	int glareFadeOutTime;
	char sunFxPosition[12];
};

struct mnode_t
{
	int contents;
	int parent;
	int cellIndex;
	mnode_info_t u;
};

struct GfxCullGroup
{
	char mins[12];
	char maxs[12];
	int surfaceCount;
	int startSurfIndex;
};

struct GfxCell
{
	GfxCellWritable writable;
	char mins[12];
	char maxs[12];
	int aabbTree;
	int portalCount;
	int portals;
	int cullGroupCount;
	int cullGroups;
	int occluderCount;
	int occluders;
	int modelRefs;
};

struct MaterialMemory
{
	int material;
	int memory;
};

union mnode_info_t
{
	mnode_node_t node;
	mnode_leaf_t leaf;
};

struct GfxCellWritable
{
	int markCount;
};

struct GfxLightGridPoint
{
	int xyzHighBits;
	char xyzLowBitsAndSunVisible;
	char needsTrace;
	short colorsIndex;
};

struct GfxLightGridColors
{
	char rgb[24];
};

struct mnode_node_t
{
	int plane;
	int64_t children;
};

struct mnode_leaf_t
{
	int cluster;
};

struct GfxAabbTree
{
	char mins[12];
	char maxs[12];
	int surfaceCount;
	int startSurfIndex;
	int staticModelCount;
	int staticModels;
	int childCount;
	int children;
};

struct GfxPortal
{
	GfxPortalWritable writable;
	DpvsPlane plane;
	int cell;
	int vertices;
	char vertexCount;
	char hullPointCount;
	char pad0[2];
	int hullPoints;
	char hullAxis[24];
};

struct GfxSceneModelCellRef
{
	int entIndex;
	char mins[12];
	char maxs[12];
	int next;
};

struct GfxPortalWritable
{
	char isQueued;
	char isAncestor;
	char pad0[2];
	int queuedParent;
};

struct DpvsPlane
{
	char coeffs[16];
	char side[3];
	DpvsPlaneInfo u;
};

struct GfxOccluder
{
	int planeCount;
	int planes;
	int edgeCount;
	int edges;
	int vertexCount;
	int vertices;
	int ignoreStackLevel;
	int viewPlaneCount;
	int viewPlanes;
};

union DpvsPlaneInfo
{
	char frontal;
	char ignoreStackLevel;
};

struct GfxOccluderEdge
{
	int64_t plane;
	int64_t vertex;
};

struct r_globals_t
{
	char registered;
	char forbidDelayLoadImages;
	char ignorePrecacheErrors;
	char pad0[1];
	char viewOrg[12];
	char viewDir[12];
	int frameCountInternal;
	int markCount;
	int totalImageMemory;
	char materialHashTable[4096];
	int sceneWaterMapSetupsCount;
	char sceneWaterMapSetups[1088];
	char fogSettings[160];
	int fogIndex;
	char sinTable[4096];
	char fftTrigTable[2048];
	char fftBitswap[1024];
	int modelDObj;
	char modelDObjBuf[100];
	int stats;
	GfxLodParms lodParms;
	int debugViewParms;
	int smodelDyncs;
	int surfaces;
	int cullGroups;
};

struct GfxStaticModelDynamic
{
	int viewCount;
	int staticSurfs;
};

struct GfxSurfaceDynamic
{
	int viewCount;
};

struct GfxCullGroupDynamic
{
	int viewCount;
};

struct GfxStaticSurface
{
	char cachedLods[16];
};

struct GfxStaticModelSurfaceCached
{
	int baseVertIndex;
	int smodelIndex;
	int xsurf;
	int surface;
};

struct DxTextureStageEnums
{
	int op;
	char arg[12];
};

struct DxTextureOpDecode
{
	int enumerant;
	int usedArgs;
};

struct GfxCodeMatrices
{
	int worldScale;
	char pad0[12];
	GfxCodeMatrix world;
	char normalizedWorld[272];
	char view[272];
	char projection[272];
	char worldView[272];
	char normalizedWorldView[272];
	char viewProjection[272];
	char worldViewProjection[272];
	char normalizedWorldViewProjection[272];
	char shadowLookupMatrix[272];
	char lightGridLookupMatrix[272];
	char worldOutdoorLookup[272];
	char OGLworldViewProjection[272];
};

struct GfxCodeMatrix
{
	char matrix[256];
	int valid;
};

struct GfxViewport
{
	int x;
	int y;
	int width;
	int height;
};

struct DxState
{
	char vertexShaderConsts[4096];
	char pixelShaderConsts[4096];
	int64_t refStateBits;
	int64_t activeStateBits;
	int stencilRefValue;
	char refColorStageBits[32];
	char refAlphaStageBits[32];
	char activeColorStageBits[32];
	char activeAlphaStageBits[32];
	char gridLighting;
	short genTexCoords;
	char pad0[1];
	int renderTargetId;
	int renderTargetWidth;
	int renderTargetHeight;
	GfxViewportBehavior viewportBehavior;
	int renderTargetSurface;
	int depthStencilSurface;
	char viewport[24];
	char viewportIsNull;
	char pad1[3];
	int indexBuffer;
	char streams[12];
	int indexBufferDeselecting;
	int vertexBufferDeselecting;
	char samplerState[16];
	char samplerImage[64];
	int textureColorArg;
	int pixelShader;
	int vertexShader;
	int vertexDecl;
	int fvf;
	char alphaRef;
	char pad2[3];
	int textureFactor;
	int ambientColor;
	int clipPlaneCount;
};

typedef enum
{
	GFX_USE_VIEWPORT_FOR_VIEW = 0,
	GFX_USE_VIEWPORT_FULL = 1
} GfxViewportBehavior;

struct _3726
{
	GfxColor color;
	D3DFOGMODE mode;
	int start;
	int end;
	int density;
};

struct _3725
{
	int vb;
	int offset;
	int stride;
};

typedef enum
{
	D3DFOG_NONE = 0,
	D3DFOG_EXP = 1,
	D3DFOG_EXP2 = 2,
	D3DFOG_LINEAR = 3,
	D3DFOG_FORCE_DWORD = 2147483647
} _D3DFOGMODE;

struct DxStencilDecode
{
	int shift;
	int renderState;
};

union XAssetHeader
{
	int parts;
	int model;
	int material;
	int image;
	int sound;
	int sndCurve;
	int clipMap;
	int world;
	int lightDef;
	int font;
	int menuList;
	int menu;
	int localize;
	int weapon;
	int sndDriverGlobals;
	int fx;
	int impactFx;
	int rawfile;
	int data;
};

typedef enum
{
	GFX_LOCK_BEGIN_FRAME = 0,
	GFX_LOCK_RESUME_FRAME = 1
} GfxLockType;

struct GfxModelSkinnedSurface
{
	GfxModelSurface surf;
	int skinnedCachedOffset;
};

union _3720
{
	int variant;
	int dx7;
	int dx9;
};

struct GfxVertexDx7
{
	char xyz[12];
	char normal[12];
	int color;
	int64_t texCoord;
};

struct GfxVertex
{
	char xyzw[16];
	char normal[12];
	int color;
	int64_t texCoord;
	char binormal[12];
	char tangent[12];
};

struct GfxModelRigidSurface
{
	int64_t surf;
	char boneAxis[48];
};

struct SkinXModelCmd
{
	int surfs;
	int e;
	int mat;
	char surfacePartBits[16];
	char surfCount;
	char boneCount;
	char matOffset[64];
};

struct SkinRigidXModelCmd
{
	int surfs;
	int surfCount;
	int e;
	char mat[32];
};

struct GfxStaticModelCachedSurface
{
	int64_t surf;
	int surface;
	int ent;
};

union _3732
{
	int v;
	int w;
};

union _3734
{
	int v;
	int w;
};

struct stream_source_info_t
{
	char Stream;
	char Offset;
	char Type;
};

struct stream_dest_info_t
{
	char Usage;
	char UsageIndex;
};

typedef enum
{
	MTL_VERTEX_SHADER = 0,
	MTL_PIXEL_SHADER = 1
} MaterialShaderType;

struct _3752
{
	int vertexDeclCount;
	char vertexDeclHashTable[768];
	int techniqueSetCount;
	char techniqueSetHashTable[4096];
	int techniqueCount;
	char techniqueHashTable[4096];
	int literalCount;
	char literalTable[256];
	int stateMapCount;
	char stateMapHashTable[128];
	int stringCount;
	char stringHashTable[256];
	int shaderCount;
	char shaderHashTable[1024];
};

struct BuiltInMaterialTable
{
	int name;
	int material;
};

struct GfxRenderCommandExecState
{
	int cmd;
	int stackPos;
	int64_t retCmd;
};

struct GfxCmdCall
{
	GfxCmdHeader header;
	int subCmd;
};

struct GfxCmdSetClipPlanes
{
	int header;
	int clipPlaneCount;
	char clipPlanes[16];
};

struct GfxCmdStretchRaw
{
	int header;
	int x;
	int y;
	int w;
	int h;
	int cols;
	int rows;
	int data;
	int client;
	int dirty;
};

struct GfxCmdClearScreen
{
	int header;
	char whichToClear;
	char stencil;
	char pad0[2];
	int depth;
	char color[16];
};

struct GfxCmdSetMaterialColor
{
	int header;
	char color[16];
};

struct GfxCmdSetLightProperties
{
	int header;
	int lightIndex;
	char position[16];
	char ambient[16];
	char color[16];
	char specular[16];
	int lightDef;
};

struct GfxCmdSetStencilRefValue
{
	int header;
	int refValue;
};

struct GfxCmdSetShadowCookie
{
	int header;
	char lookupMatrix[64];
	int fade;
};

struct GfxCmdBeginView
{
	int header;
	GfxSceneDef sceneDef;
	int viewParms;
	GfxLodParms lodParms;
	int viewCount;
};

struct GfxCmdSetViewport
{
	int header;
	char viewport[16];
};

struct GfxCmdSetRenderTarget
{
	int header;
	GfxRenderTargetId renderTargetId;
};

typedef enum
{
	GFX_DRAW_SURFS_ITER_FORWARD = 0,
	GFX_DRAW_SURFS_ITER_BACKWARD = 1
} GfxDrawSurfOrder;

struct GfxCmdDrawSurfs
{
	int header;
	int order;
	int drawSurfs;
	int drawSurfCount;
	int techType;
};

struct GfxCmdDrawSunPostEffects
{
	int header;
	int viewIndex;
};

struct GfxCmdDrawTriangles
{
	int header;
	int material;
	int techType;
	short indexCount;
	short vertexCount;
};

struct GfxCmdDrawSprite
{
	int header;
	int material;
	int rgbaColor;
	char pos[12];
	int radius;
	int minScreenRadius;
	int renderFxFlags;
};

struct GfxCmdDrawTextInSpace
{
	int header;
	char org[12];
	int font;
	char xPixelStep[12];
	char yPixelStep[12];
	int color;
	int text;
};

typedef enum
{
	GFX_PRIM_STATS_WORLD = 0,
	GFX_PRIM_STATS_SMODELCACHED = 1,
	GFX_PRIM_STATS_SMODELRIGID = 2,
	GFX_PRIM_STATS_XMODELCACHED = 3,
	GFX_PRIM_STATS_XMODELRIGID = 4,
	GFX_PRIM_STATS_XMODELSKINNED = 5,
	GFX_PRIM_STATS_BMODEL = 6,
	GFX_PRIM_STATS_FX = 7,
	GFX_PRIM_STATS_HUD = 8,
	GFX_PRIM_STATS_DEBUG = 9,
	GFX_PRIM_STATS_CODE = 10,
	GFX_PRIM_STATS_COUNT = 11
} GfxPrimStatsTarget;

struct GfxCmdStretchPic
{
	int header;
	int material;
	int x;
	int y;
	int w;
	int h;
	int s0;
	int t0;
	int s1;
	int t1;
	int color;
};

struct GfxCmdDrawFullScreenColoredQuad
{
	int header;
	int material;
	int s0;
	int t0;
	int s1;
	int t1;
	int color;
};

struct GfxCmdBlendSavedScreen
{
	int header;
	int fadeMsec;
	int material;
};

struct GfxCmdDrawText
{
	int header;
	int x;
	int y;
	int font;
	int xScale;
	int yScale;
	int color;
	int style;
	int cursorPos;
	char cursor;
	char pad0[3];
	int maxChars;
	char text[3];
};

struct GfxCmdApplyLatePostEffects
{
	int header;
	int blurRadius;
};

struct GfxCmdStretchPicRotate
{
	int header;
	int material;
	int x;
	int y;
	int w;
	int h;
	int s0;
	int t0;
	int s1;
	int t1;
	int color;
	int rotation;
};

struct GfxCmdDrawQuadPic
{
	int header;
	int material;
	char verts[32];
	int color;
};

struct GfxCmdStencilPlanes
{
	int header;
	int nearDist;
	int planeCount;
	int planeDists;
};

struct materialCommands_t
{
	char pad0[370608];
	int indices;
	int optimizedIndices;
	GfxOptimizedVertexSource optimizedVertexSource;
	int material;
	int techType;
	int lmapIndex;
	int materialTime;
	MaterialVertexDeclType declType;
	int indexCount;
	int vertexCount;
	int firstVertex;
	int lastVertex;
	int optimizedIndexCount;
	int optimizedVertexCount;
	int firstOptimizedVertex;
};

union _3718
{
};

typedef enum
{
	OPT_VERTS_NONE = 0,
	OPT_VERTS_WORLD = 1,
	OPT_VERTS_SMC = 2,
	OPT_VERTS_COUNT = 3
} GfxOptimizedVertexSource;

typedef enum
{
	VERTDECL_GENERIC = 0,
	VERTDECL_WORLD = 1,
	VERTDECL_POS_TEX = 2,
	VERTDECL_STATICMODELCACHE = 3,
	VERTDECL_COUNT = 4
} MaterialVertexDeclType;

union _3719
{
	char generic[348800];
	char world[370600];
};

struct GfxWorldVertexDx7
{
	char xyz[12];
	int color;
	int64_t texCoord;
	int64_t lmapCoord;
};

struct r_backEndGlobals_t
{
	char codeConsts[944];
	int frameCount;
	int viewCount;
	char sceneDef[16];
	int viewParms;
	char lodParms[20];
	char sceneViewport[16];
	char viewProjectionMatrix[64];
	int tileIndex;
	int tileCount;
	int width;
	int height;
	int currentEntity;
	int currentEntityLighting;
	char worldEntity[116];
	char viewportIsDirty;
	char projection2D;
	char defaultSamplerState;
	char pad0[1];
	int color_axis;
	int color_allies;
	int fogColor;
	int glowIndexFirst;
	int glowCount;
	int64_t glowImage;
	int texScrollAmountDx7;
	char codeMatrixStack[10656];
	int codeMatrixStackLevel;
	int resolvedPostSunTarget;
	int resolvedSceneTarget;
	int currentFeedbackImage;
	char light[136];
	char entityLighting[212784];
	char shadowLookupMatrix[64];
	int debugFont;
};

struct GfxEntityLighting
{
	int viewCount;
	int sunVisibility;
	char colorForDir[96];
};

struct GfxBackEndLightSettings
{
	char position[16];
	char ambient[16];
	char color[16];
	char specular[16];
	int def;
};

struct DebugGlobals
{
	int verts;
	int vertCount;
	int vertLimit;
	int polys;
	int polyCount;
	int polyLimit;
	int strings;
	int stringCount;
	int stringLimit;
	int externStrings;
	int externStringCount;
	int externMaxStringCount;
	int lines;
	int lineCount;
	int lineLimit;
	int externLines;
	int externLineCount;
	int externMaxLineCount;
	int plumes;
	int plumeCount;
	int plumeLimit;
};

struct SunFlareDynamic
{
	int flareIntensity;
	int currentBlind;
	int currentGlare;
	int lastTime;
	char error;
	char pad0[3];
	int cumulVisibility;
	int lastVisibility;
	int lastDot;
	int hitNum;
	int64_t sunQuery;
	short sunQueryIssued;
};

struct static_model_tree_list_t
{
	int prev;
	int next;
};

struct static_model_node_t
{
	short usedVerts;
	char inuse;
	char reserved;
};

union static_model_leaf_t
{
	char surf[16];
	static_model_node_list_t freenode;
};

struct static_model_node_list_t
{
	int prev;
	int next;
};

struct SkinStaticModelCachedCmd
{
	int cached;
	int smodelIndex;
	int material;
};

struct static_model_cache_t
{
	char trees[50176];
	char freelist[40];
	int64_t usedlist;
};

struct GfxBspLoad
{
	int header;
	int fileBase;
	int fileSize;
	int materials;
	int materialCount;
	char lmapMergeInfo[640];
};

struct r_lightmapMerge_t
{
	short index;
	char pad0[2];
	int64_t shift;
	int64_t scale;
};

struct dnode_t
{
	int planeNum;
	int64_t children;
	char mins[12];
	char maxs[12];
};

struct dleaf_t
{
	int cluster;
	int area;
	int firstLeafSurface;
	int numLeafSurfaces;
	int firstLeafBrush;
	int numLeafBrushes;
	int cellNum;
	int firstLightIndex;
	int numLights;
};

struct DiskGfxPortal
{
	int planeIndex;
	int cellIndex;
	int firstPortalVertex;
	int portalVertexCount;
};

struct DiskGfxCell
{
	char mins[12];
	char maxs[12];
	int aabbTreeIndex;
	int firstPortal;
	int portalCount;
	int firstCullGroup;
	int cullGroupCount;
	int firstOccluder;
	int occluderCount;
};

struct DiskGfxAabbTree
{
	int firstSurface;
	int surfaceCount;
	int childCount;
};

struct DiskGfxOccluder
{
	int firstPlane;
	short planeCount;
	short edgeCount;
	int firstEdge;
	int firstPortalVertex;
	short portalVertexCount;
};

struct DiskGfxOccluderEdge
{
	short planeIndex;
	short vertexIndex;
};

struct DiskGfxCullGroup
{
	char mins[12];
	char maxs[12];
	int firstSurface;
	int surfaceCount;
};

struct DiskTriangleSoup
{
	short materialIndex;
	short lightmapIndex;
	int firstVertex;
	short vertexCount;
	short indexCount;
	int firstIndex;
};

struct DiskGfxVertex
{
	char xyz[12];
	char normal[12];
	int color;
	int64_t texCoord;
	int64_t lmapCoord;
	char tangent[12];
	char binormal[12];
};

struct r_lightmapGroup_t
{
	int wideCount;
	int highCount;
};

struct dmodel_t
{
	char mins[12];
	char maxs[12];
	int firstTriangle;
	int numTriangles;
	int firstSurface;
	int numSurfaces;
	int firstBrush;
	int numBrushes;
};

struct r_globals_load_t
{
	int occluderIndices;
	int cullGroupIndices;
	int occluders;
	int portalVerts;
	int aabbTrees;
	int aabbTreeCount;
};

struct _3753
{
	char imageHashTable[8192];
	int picmip;
	int picmipBump;
	int picmipSpec;
	int64_t totalMemory;
};

typedef enum
{
	CUBEMAPSHOT_NONE = 0,
	CUBEMAPSHOT_UP = 1,
	CUBEMAPSHOT_DOWN = 2,
	CUBEMAPSHOT_LEFT = 3,
	CUBEMAPSHOT_RIGHT = 4,
	CUBEMAPSHOT_FRONT = 5,
	CUBEMAPSHOT_BACK = 6,
	CUBEMAPSHOT_COUNT = 7
} CubemapShot;

typedef enum
{
	R_SCREENSHOT_JPG = 0,
	R_SCREENSHOT_TGA = 1
} GfxScreenshotType;

typedef enum
{
	RENDERTARGET_USAGE_RENDER = 0,
	RENDERTARGET_USAGE_TEXTURE = 1,
	RENDERTARGET_USAGE_READBACK = 2
} RenderTargetUsage;

struct _3637
{
	int xyzHighBits;
	char xyzLowBitsAndSunVisible;
	char needsTrace;
	short colorsIndex;
};

struct lightGlob_type
{
	int defCount;
	char defs[256];
};

typedef enum
{
	R_DRAWGROUP_GLUE_ISSUE = 0,
	R_DRAWGROUP_GLUE_SKIP = 1
} GfxDrawGroupGlueBehavior;

typedef enum
{
	R_DRAWGROUP_DEPTH_PREPASS = 0,
	R_DRAWGROUP_SHADOW_COOKIE = 1,
	R_DRAWGROUP_WORLD_SUN = 2,
	R_DRAWGROUP_WORLD_REMAINDER = 3,
	R_DRAWGROUP_POST_AA = 4,
	R_DRAWGROUP_COUNT = 5
} GfxDrawGroupType;

struct GfxDrawGroupCommands
{
	char isIssuingGlue;
	char pad0[3];
	int begin;
	char perView[16];
	int end;
};

typedef enum
{
	DPVS_DONT_CLIP_CHILDREN = 0,
	DPVS_CLIP_CHILDREN = 1
} DpvsClipChildren;

struct PortalHeapNode
{
	int portal;
	int dist;
};

typedef enum
{
	DPVS_DONT_FORCE_BEVELS = 0,
	DPVS_FORCE_BEVELS = 1
} DpvsForceBevels;

struct DpvsScene
{
	char modelRefs[131072];
	int modelRefCount;
};

struct DpvsDebug
{
	char drawWorld;
	char drawEntities;
	char drawSModels;
	char drawXModels;
	char drawBModels;
};

struct GfxMarkFragment
{
	int markMaterial;
	short lmapIndex;
	char pointCount;
	char pad0[1];
	int firstPoint;
};

struct GfxMarkPoint
{
	char xyz[12];
	int64_t lmapCoord;
	char normal[12];
};

typedef enum
{
	DX_CAPS_RESPONSE_QUIT = 0,
	DX_CAPS_RESPONSE_WARN = 1,
	DX_CAPS_RESPONSE_INFO = 2,
	DX_CAPS_RESPONSE_FORBID_DX7 = 3,
	DX_CAPS_RESPONSE_FORBID_DX9 = 4
} DxCapsResponse;

struct DxCapsCheckBits
{
	int offset;
	int setBits;
	int clearBits;
	int response;
	int msg;
};

struct DxCapsCheckInteger
{
	int offset;
	int min;
	int max;
	int response;
	int msg;
};

struct GfxDrawPrimArgs
{
	int firstVertexFromBase;
	int vertexCount;
	int primCount;
};

struct GfxStateOverride
{
	int64_t stateBitsMaskClear;
	int64_t stateBitsMaskSet;
};

struct _3710
{
	int vertexStride;
};

struct ShadowCandidate
{
	int entIndex;
	int weight;
};

struct ShadowCookie
{
	int firstCasterDrawSurf;
	int firstReceiverDrawSurf;
	int firstUnusedDrawSurf;
	char shadowLookupMatrix[64];
	char boxMin[12];
	char boxMax[12];
	int shadowViewParms;
	int fade;
};

struct ShadowCookieList
{
	char cookies[2592];
	int cookieCount;
};

struct ShadowCookieGlob
{
	int weightCap;
	int lastTime;
};

struct WaterGlob
{
	char H[131072];
	char pixels[65536];
};

typedef enum
{
	FOG_COLOR_SRC_UNSPECIFIED = 0,
	FOG_COLOR_SRC_STANDARD = 1,
	FOG_COLOR_SRC_BLACK = 2
} FogColorSrcEnum;

struct GfxImageFileHeader
{
	char tag[3];
	char version;
	char format;
	char flags;
	char dimensions[6];
	char fileSizeForPicmip[16];
};

struct WaveletDecode
{
	short value;
	short bit;
	int data;
	int width;
	int height;
	int channels;
	int bpp;
	int mipLevel;
	char dataInitialized;
};

struct IncludeClass
{
};

struct ID3DXInclude
{
	int ID3DXInclude;
};

typedef enum
{
	D3DXINC_LOCAL = 0,
	D3DXINC_SYSTEM = 1,
	D3DXINC_FORCE_DWORD = 2147483647
} _D3DXINCLUDE_TYPE;

struct MaterialObj
{
	MaterialInfoObj info;
	int64_t stateBits;
	short textureCount;
	short constantCount;
	int techniqueSet;
	int textures;
	int constants;
};

struct GfxCachedShaderText
{
	int name;
	int text;
	int textSize;
};

struct ShaderConstantRouting
{
	int name;
	char firstElem;
	char elemCount;
	char pad0[2];
	int constantInfo;
	int typeInfo;
};

struct CodeConstantSource
{
	int name;
	char source;
	char pad0[3];
	int subtable;
	int arrayCount;
	int arrayStride;
};

struct _D3DXSHADER_CONSTANTINFO
{
	int Name;
	short RegisterSet;
	short RegisterIndex;
	short RegisterCount;
	short Reserved;
	int TypeInfo;
	int DefaultValue;
};

struct _D3DXSHADER_TYPEINFO
{
	short Class;
	short Type;
	short Rows;
	short Columns;
	short Elements;
	short StructMembers;
	int StructMemberInfo;
};

typedef enum
{
	MTL_TEXFUNC_VALID_COLOR = 1,
	MTL_TEXFUNC_VALID_ALPHA = 2,
	MTL_TEXFUNC_VALID_BOTH = 3
} MtlTextureFunctionValidDx7;

struct CodeSamplerSource
{
	int name;
	MaterialTextureSource source;
	int subtable;
	int arrayCount;
	int arrayStride;
};

typedef enum
{
	TEXTURE_SRC_CODE_BLACK = 0,
	TEXTURE_SRC_CODE_WHITE = 1,
	TEXTURE_SRC_CODE_IDENTITY_NORMAL_MAP = 2,
	TEXTURE_SRC_CODE_SPECULARITY = 3,
	TEXTURE_SRC_CODE_SMODEL_LIGHTING = 4,
	TEXTURE_SRC_CODE_LIGHT_GRID_WEIGHTS_0 = 5,
	TEXTURE_SRC_CODE_LIGHT_GRID_WEIGHTS_1 = 6,
	TEXTURE_SRC_CODE_LIGHTMAP_WEIGHTS = 7,
	TEXTURE_SRC_CODE_LIGHTMAP_0 = 8,
	TEXTURE_SRC_CODE_LIGHTMAP_1 = 9,
	TEXTURE_SRC_CODE_LIGHTMAP_2 = 10,
	TEXTURE_SRC_CODE_LIGHTMAP_3 = 11,
	TEXTURE_SRC_CODE_SHADOWCOOKIE = 12,
	TEXTURE_SRC_CODE_FEEDBACK = 13,
	TEXTURE_SRC_CODE_RESOLVED_POST_SUN = 14,
	TEXTURE_SRC_CODE_RESOLVED_SCENE = 15,
	TEXTURE_SRC_CODE_SKY = 16,
	TEXTURE_SRC_CODE_LIGHT0_ATTENUATION = 17,
	TEXTURE_SRC_CODE_LIGHT1_ATTENUATION = 18,
	TEXTURE_SRC_CODE_DYNAMIC_SHADOWS = 19,
	TEXTURE_SRC_CODE_OUTDOOR = 20,
	TEXTURE_SRC_CODE_FLOATZ = 21,
	TEXTURE_SRC_CODE_SUN_HALF_ANGLE = 22,
	TEXTURE_SRC_CODE_WATER_COLOR = 23
} MaterialTextureSource;

struct ID3DXConstantTable
{
};

struct _D3DXCONSTANTTABLE_DESC
{
	int Creator;
	int Version;
	int Constants;
};

struct _D3DXCONSTANT_DESC
{
	int Name;
	D3DXREGISTER_SET RegisterSet;
	int RegisterIndex;
	int RegisterCount;
	D3DXPARAMETER_CLASS Class;
	D3DXPARAMETER_TYPE Type;
	int Rows;
	int Columns;
	int Elements;
	int StructMembers;
	int Bytes;
	int DefaultValue;
};

typedef enum
{
	D3DXRS_BOOL = 0,
	D3DXRS_INT4 = 1,
	D3DXRS_FLOAT4 = 2,
	D3DXRS_SAMPLER = 3,
	D3DXRS_FORCE_DWORD = 2147483647
} _D3DXREGISTER_SET;

typedef enum
{
	D3DXPC_SCALAR = 0,
	D3DXPC_VECTOR = 1,
	D3DXPC_MATRIX_ROWS = 2,
	D3DXPC_MATRIX_COLUMNS = 3,
	D3DXPC_OBJECT = 4,
	D3DXPC_STRUCT = 5,
	D3DXPC_FORCE_DWORD = 2147483647
} _D3DXPARAMETER_CLASS;

typedef enum
{
	D3DXPT_VOID = 0,
	D3DXPT_BOOL = 1,
	D3DXPT_INT = 2,
	D3DXPT_FLOAT = 3,
	D3DXPT_STRING = 4,
	D3DXPT_TEXTURE = 5,
	D3DXPT_TEXTURE1D = 6,
	D3DXPT_TEXTURE2D = 7,
	D3DXPT_TEXTURE3D = 8,
	D3DXPT_TEXTURECUBE = 9,
	D3DXPT_SAMPLER = 10,
	D3DXPT_SAMPLER1D = 11,
	D3DXPT_SAMPLER2D = 12,
	D3DXPT_SAMPLER3D = 13,
	D3DXPT_SAMPLERCUBE = 14,
	D3DXPT_PIXELSHADER = 15,
	D3DXPT_VERTEXSHADER = 16,
	D3DXPT_PIXELFRAGMENT = 17,
	D3DXPT_VERTEXFRAGMENT = 18,
	D3DXPT_FORCE_DWORD = 2147483647
} _D3DXPARAMETER_TYPE;

struct _D3DXSHADER_CONSTANTTABLE
{
	int Size;
	int Creator;
	int Version;
	int Constants;
	int ConstantInfo;
	int Flags;
	int Target;
};

typedef enum
{
	MTL_PARSE_SUCCESS = 0,
	MTL_PARSE_NO_MATCH = 1,
	MTL_PARSE_ERROR = 2
} MtlParseSuccess;

struct MtlStateMapBitName
{
	int name;
	int bits;
};

struct MtlStateMapBitGroup
{
	int name;
	int bitNames;
	int64_t stateBitsMask;
};

struct ID3DXBuffer
{
};

struct _D3DXMACRO
{
	int Name;
	int Definition;
};

struct _3775
{
	int cachedShaderCount;
	int cachedShaderText;
};

struct MtlTextureFunctionDx7
{
	int name;
	int enumerant;
	int argCount;
	int valid;
};

struct PassOptionDx7
{
	int name;
	int valueOffset;
};

struct GfxImageFilterPass
{
	int material;
	int srcWidth;
	int srcHeight;
	int dstWidth;
	int dstHeight;
	int tapHalfCount;
	char tapOffsetsAndWeights[128];
};

struct GfxImageFilter
{
	int passCount;
	char passes[2432];
	int sourceImage;
	int finalTarget;
	int64_t pingPongTargets;
};

struct OutdoorGlob
{
	char bbox[24];
	char scale[12];
	char invScale[12];
	char add[12];
	int pic;
};

struct WaveletHuffmanDecode
{
	short value;
	short bits;
};

struct CCallOfDutyEngine
{
};

struct yy_buffer_state
{
	int yy_input_file;
	int yy_ch_buf;
	int yy_buf_pos;
	int yy_buf_size;
	int yy_n_chars;
	int yy_is_our_buffer;
	int yy_is_interactive;
	int yy_at_bol;
	int yy_fill_buffer;
	int yy_buffer_status;
};

struct CMutex
{
};

struct CSoundEngine
{
};

struct CThread
{
	int CThread;
};

typedef enum
{
	kItem_KeyCodePart1 = 1,
	kItem_KeyCodePart2 = 2,
	kItem_KeyCodePart3 = 3,
	kItem_KeyCodePart4 = 4,
	kItem_KeyCodePart5 = 5
} _3640;

struct _Deque_impl
{
	int _M_map;
	int _M_map_size;
	char _M_start[16];
	char _M_finish[16];
};

struct CAStreamBasicDescription
{
};

struct AudioStreamBasicDescription
{
	int64_t mSampleRate;
	int mFormatID;
	int mFormatFlags;
	int mBytesPerPacket;
	int mFramesPerPacket;
	int mBytesPerFrame;
	int mChannelsPerFrame;
	int mBitsPerChannel;
	int mReserved;
};

struct CSampleSound
{
};

struct CSoundObject
{
	int CSoundObject;
};

struct AudioBufferList
{
	int mNumberBuffers;
	char mBuffers[12];
};

struct AudioBuffer
{
	int mNumberChannels;
	int mDataByteSize;
	int mData;
};

struct StMutexLock
{
};

struct AudioStreamPacketDescription
{
	int64_t mStartOffset;
	int mVariableFramesInPacket;
	int mDataByteSize;
};

struct AudioTimeStamp
{
	int64_t mSampleTime;
	int64_t mHostTime;
	int64_t mRateScalar;
	int64_t mWordClockTime;
	SMPTETime mSMPTETime;
	int mFlags;
	int mReserved;
};

struct SMPTETime
{
	short mSubframes;
	short mSubframeDivisor;
	int mCounter;
	int mType;
	int mFlags;
	short mHours;
	short mMinutes;
	short mSeconds;
	short mFrames;
};

struct AURenderCallbackStruct
{
	int inputProc;
	int inputProcRefCon;
};

struct MixerDistanceParams
{
	int mReferenceDistance;
	int mMaxDistance;
	int mMaxAttenuation;
};

struct StThreadLock
{
};

struct AudioChannelLayout
{
	int mChannelLayoutTag;
	int mChannelBitmap;
	int mNumberChannelDescriptions;
	char mChannelDescriptions[20];
};

struct AudioChannelDescription
{
	int mChannelLabel;
	int mChannelFlags;
	char mCoordinates[12];
};

struct ComponentDescription
{
	int componentType;
	int componentSubType;
	int componentManufacturer;
	int componentFlags;
	int componentFlagsMask;
};

struct ComponentRecord
{
	int data;
};

struct CD3DXBuffer
{
};

struct CD3DXConstantTable
{
};

typedef enum
{
	CD3DX_REGISTER_INDEX_ARG = 0,
	CD3DX_REGISTER_COUNT_ARG = 1,
	CD3DX_PARAMETER_CLASS_ARG = 2,
	CD3DX_PARAMETER_TYPE_ARG = 3,
	CD3DX_ELEMENTS_ARG = 4,
	CD3DX_NUM_ARGS = 5
} _3607;

struct CStreamSound
{
};

struct SoundDescription
{
	int descSize;
	int dataFormat;
	int resvd1;
	short resvd2;
	short dataRefIndex;
	short version;
	short revlevel;
	int vendor;
	short numChannels;
	short sampleSize;
	short compressionID;
	short packetSize;
	int sampleRate;
};

struct PlayerKeyState
{
	char chatField[280];
	int chat_team;
	int key_overstrikeMode;
	int anykeydown;
	char keys[3072];
};

struct qkey_t
{
	int down;
	int repeats;
	int binding;
};

struct keyname_t
{
	int name;
	int keynum;
};

struct client_s
{
	int state;
	int sendAsActive;
	int dropReason;
	char userinfo[1024];
	char reliableCommandInfo[132096];
	int reliableSequence;
	int reliableAcknowledge;
	int reliableSent;
	int messageAcknowledge;
	int gamestateMessageNum;
	int challenge;
	usercmd_t lastUsercmd;
	int lastClientCommand;
	char lastClientCommandString[1024];
	int gentity;
	char name[32];
	char downloadName[64];
	int download;
	int downloadSize;
	int downloadCount;
	int downloadClientBlock;
	int downloadCurrentBlock;
	int downloadXmitBlock;
	char downloadBlocks[32];
	char downloadBlockSize[32];
	int downloadEOF;
	int downloadSendTime;
	int deltaMessage;
	int nextReliableTime;
	int lastPacketTime;
	int lastConnectTime;
	int nextSnapshotTime;
	int rateDelayed;
	int timeoutCount;
	char frames[317568];
	int ping;
	int rate;
	int snapshotMsec;
	int pureAuthentic;
	netchan_t netchan;
	int guid;
	short scriptId;
	char pad0[2];
	int bIsTestClient;
	int serverId;
	char voicePackets[10440];
	int voicePacketCount;
	char muteList[64];
	char sendVoice;
};

struct netchan_t
{
	int outgoingSequence;
	netsrc_t sock;
	int dropped;
	int incomingSequence;
	netadr_t remoteAddress;
	int qport;
	int fragmentSequence;
	int fragmentLength;
	char fragmentBuffer[16384];
	int unsentFragments;
	int unsentFragmentStart;
	int unsentLength;
	char unsentBuffer[16384];
	int pProf;
};

struct svscmd_info_t
{
	char cmd[1024];
	int time;
	int type;
};

struct clientSnapshot_t
{
	playerState_t ps;
	int num_entities;
	int num_clients;
	int first_entity;
	int first_client;
	int messageSent;
	int messageAcked;
	int messageSize;
};

typedef enum
{
	NS_CLIENT1 = 0,
	NS_SERVER = 1,
	NS_MAXCLIENTS = 1,
	NS_PACKET = 2
} netsrc_t;

struct netadr_t
{
	netadrtype_t type;
	int ip;
	short port;
};

struct VoicePacket_t
{
	char talker;
	char data[256];
	int dataSize;
};

struct netProfileInfo_t
{
	netProfileStream_t send;
	char recieve[752];
};

struct netProfileStream_t
{
	char packets[720];
	int iCurrPacket;
	int iBytesPerSecond;
	int iLastBPSCalcTime;
	int iCountedPackets;
	int iCountedFragments;
	int iFragmentPercentage;
	int iLargestPacket;
	int iSmallestPacket;
};

struct netProfilePacket_t
{
	int iTime;
	int iSize;
	int bFragment;
};

struct MenuList
{
	int menuCount;
	int menus;
};

struct menuDef_t
{
	Window window;
	int font;
	int fullScreen;
	int itemCount;
	int fontIndex;
	char cursorItem[16];
	int fadeCycle;
	int fadeClamp;
	int fadeAmount;
	int fadeInAmount;
	int blurRadius;
	int onOpen;
	int onClose;
	int onESC;
	int onKey;
	int soundName;
	int imageTrack;
	char focusColor[16];
	char disableColor[16];
	int items;
};

struct windowDef_t
{
	char rect[96];
	char rectClient[96];
	int name;
	int group;
	int cinematicName;
	int cinematic;
	int style;
	int border;
	int ownerDraw;
	int ownerDrawFlags;
	int borderSize;
	int staticFlags;
	char dynamicFlags[16];
	char rectEffects0[96];
	char rectEffects1[96];
	char offsetTime[16];
	int nextTime;
	char foreColor[16];
	char backColor[16];
	char borderColor[16];
	char outlineColor[16];
	int background;
};

struct ItemKeyHandler
{
	int key;
	int action;
	int next;
};

struct itemDef_s
{
	char window[528];
	char textRect[96];
	int type;
	int dataType;
	int alignment;
	int fontEnum;
	int textalignment;
	int textalignx;
	int textaligny;
	int textscale;
	int textStyle;
	int text;
	int textSavegameInfo;
	int parent;
	int mouseEnterText;
	int mouseExitText;
	int mouseEnter;
	int mouseExit;
	int action;
	int onAccept;
	int onFocus;
	int leaveFocus;
	int dvar;
	int dvarTest;
	int onKey;
	int enableDvar;
	int dvarFlags;
	int focusSound;
	int special;
	char cursorPos[16];
	itemDefData_t typeData;
	int imageTrack;
};

struct rectDef_s
{
	int x;
	int y;
	int w;
	int h;
	int horzAlign;
	int vertAlign;
};

union itemDefData_t
{
	int listBox;
	int editField;
	int multi;
	int enumDvarName;
	int data;
};

struct listBoxDef_s
{
	char startPos[16];
	char endPos[16];
	int drawPadding;
	char cursorPos[16];
	int elementWidth;
	int elementHeight;
	int elementStyle;
	int numColumns;
	char columnInfo[192];
	int doubleClick;
	int notselectable;
	int noScrollBars;
};

struct editFieldDef_s
{
	int minVal;
	int maxVal;
	int defVal;
	int range;
	int maxChars;
	int maxCharsGotoNext;
	int maxPaintChars;
	int paintOffset;
};

struct multiDef_s
{
	char dvarList[128];
	char dvarStr[128];
	char dvarValue[128];
	int count;
	int strDef;
};

struct columnInfo_s
{
	int pos;
	int width;
	int maxChars;
};

struct clientInfo_t
{
	int infoValid;
	int nextValid;
	int clientNum;
	char name[32];
	team_t team;
	int oldteam;
	int score;
	int location;
	int health;
	char model[64];
	char attachModelNames[384];
	char attachTagNames[384];
	lerpFrame_t legs;
	char torso[48];
	int lerpMoveDir;
	int lerpLean;
	char playerAngles[12];
	int leftHandGun;
	int dobjDirty;
	char angles[72];
	char tag_origin_angles[12];
	char tag_origin_offset[12];
	char clientConditions[72];
	int pXAnimTree;
	int iDObjWeapon;
	int stanceTransitionTime;
	int turnAnimEndTime;
	char turnAnimType;
};

struct centity_s
{
	entityState_t currentState;
	char nextState[240];
	char nextValid;
	char cullIn;
	char bMuzzleFlash;
	char bTrailMade;
	int previousEventSequence;
	int miscTime;
	char lerpOrigin[12];
	char lerpAngles[12];
	char lightingOrigin[12];
	int dl_time;
	int voiceChatSprite;
	int voiceChatSpriteTime;
	int tree;
	int localClientNum;
};

struct clientState_s
{
	int clientIndex;
	int team;
	int modelindex;
	char attachModelIndex[24];
	char attachTagIndex[24];
	char name[32];
};

struct weaponInfo_s
{
	int viewModelDObj;
	char viewModelAnimRates[92];
	char handModel[64];
	int iPrevAnim;
	int tree;
	int registered;
	int item;
	int pszTranslatedDisplayName;
	int pszTranslatedModename;
	int pszTranslatedAIOverlayDescription;
	int worldSurfModel;
	int viewFlashEffect;
	int worldFlashEffect;
	char weaponMidpoint[12];
	int missileSound;
	int pullbackSound;
	int flashSound;
	int flashSoundPlayer;
	int lastShotSound;
	int lastShotSoundPlayer;
	int meleeSwipeSound;
	int rechamberSound;
	int rechamberSoundPlayer;
	int reloadSound;
	int reloadSoundPlayer;
	int reloadEmptySound;
	int reloadEmptySoundPlayer;
	int reloadStartSound;
	int reloadStartSoundPlayer;
	int reloadEndSound;
	int reloadEndSoundPlayer;
	int raiseSound;
	int altSwitchSound;
	int putawaySound;
	char noteTrackSound[16];
	int ammoIcon;
	int hHudIcon;
	int hModeIcon;
	int missileSurfModel;
	int missileTrailFunc;
	int missileDlight;
	char missileDlightColor[12];
	int missileRenderfx;
	int shellEjectEffect;
	int lastShotEjectEffect;
	int projExplosionEffect;
	int projExplosionSound;
	int projTrailEffect;
	int trailRadius;
	int wiTrailTime;
	int hReticleCenter;
	int hReticleSide;
	int hADSOverlay;
	char vPositionOrg[24];
	char vPositionAng[24];
};

struct _3712
{
	int registered;
	int64_t models;
	char icons[16];
	int pickupSound;
	int ammoPickupSound;
};

struct _3727
{
	gameState_t gameState;
	int viewX;
	int viewY;
	int viewWidth;
	int viewHeight;
	int viewAspect;
	int serverCommandSequence;
	int processedSnapshotNum;
	int localServer;
	char gametype[32];
	char szHostName[256];
	int maxclients;
	char mapname[64];
	char redTeam[64];
	char blueTeam[64];
	int voteTime;
	int voteYes;
	int voteNo;
	char voteString[256];
	int64_t teamVoteTime;
	int64_t teamVoteYes;
	int64_t teamVoteNo;
	int64_t teamVoteModified;
	char teamVoteString[512];
	int levelStartTime;
	int64_t teamScores;
	char gameModels[1024];
	char fxs[256];
	int smokeGrenadeFx;
	char shellshockParms[2112];
	shellshock_parms_t holdBreathParams;
	int numInlineModels;
	char inlineDrawModel[4092];
	char inlineModelMidpoints[12276];
	char teamChatMsgs[2168];
	char teamChatMsgTimes[32];
	int teamChatPos;
	int teamLastChatPos;
	cgMedia_t media;
	int compassWidth;
	int compassHeight;
	int compassY;
	char corpseinfo[9664];
};

struct gameState_t
{
	char stringOffsets[8192];
	char stringData[16000];
	int dataCount;
};

struct shellshock_parms_t
{
};

struct cgMedia_t
{
	int whiteMaterial;
	int softLineMaterial;
	int softLineHMaterial;
	int teamStatusBar;
	int voiceChatMaterial;
	int balloonMaterial;
	int connectionMaterial;
	int youInKillCamMaterial;
	int tracerMaterial;
	int lagometerMaterial;
	char hintMaterials[532];
	char stanceMaterials[16];
	int objectiveMaterials;
	int64_t friendMaterials;
	int damageMaterial;
	int mantleHint;
	int smallDevFont;
	int bigDevFont;
	int noAmmoSound;
	int landDmgSound;
	int teleInSound;
	char grenadeBounceSound[92];
	char grenadeExplodeSound[92];
	char rocketExplodeSound[92];
	char bulletHitSmallSound[92];
	char shotgunHitSound[92];
	char bulletHitLargeSound[92];
	char stepRunSound[92];
	char stepRunSoundPlayer[92];
	char stepWalkSound[92];
	char stepWalkSoundPlayer[92];
	char stepProneSound[92];
	char stepProneSoundPlayer[92];
	char landSound[92];
	char landSoundPlayer[92];
	int runningEquipmentSound;
	int runningEquipmentSoundPlayer;
	int walkingEquipmentSound;
	int walkingEquipmentSoundPlayer;
	int foliageMovement;
	int bulletWhizby;
	int meleeSwingLarge;
	int meleeSwingSmall;
	int meleeHit;
	int meleeHitOther;
	int playerHeartBeatSound;
	int playerBreathInSound;
	int playerBreathOutSound;
	int playerBreathGaspSound;
	int playerSwapOffhand;
	int checkbox_clear;
	int checkbox_checked;
	int checkbox_fail;
	int compassping_friendlyfiring;
	int compassping_friendlyyelling;
	int compassping_enemyfiring;
	int compassping_enemyyelling;
	int compassping_grenade;
	int compassping_explosion;
	int grenadeIcon;
	int grenadePointer;
	int fx;
	int fxNoBloodFleshHit;
};

struct _3721
{
	int use;
	int fadeInTime;
	int fadeOutTime;
	int drylevel;
	int wetlevel;
	char roomtype[16];
	char channelvolume[44];
	int modEndDelay;
	int loopFadeTime;
	int loopEndDelay;
};

struct FxImpactTable
{
	int name;
	int table;
};

typedef enum
{
	DEMO_TYPE_NONE = 0,
	DEMO_TYPE_CLIENT = 1,
	DEMO_TYPE_SERVER = 2
} DemoType;

struct playerEntity_t
{
	float fLastWeaponPosFrac;
	int bPositionToADS;
	char vPositionLastOrg[12];
	float fLastIdleFactor;
	char vLastMoveOrg[12];
	char vLastMoveAng[12];
};

struct shellshock_t
{
	int parms;
	int startTime;
	int duration;
	int loopEndTime;
	int sensitivity;
	int64_t viewDelta;
	int hasSavedScreen;
};

struct bgs_t
{
	animScriptData_t animScriptData;
	char pad0[20];
	int time;
	int latestSnapshotTime;
	int frametime;
	int anim_user;
	int GetXModel;
	int CreateDObj;
	int SafeDObjFree;
	int AllocXAnim;
	char clientinfo[77312];
};

struct MarkPoly
{
	int prevMark;
	int nextMark;
	int lastFrameDrawn;
	char origin[12];
	int radius;
	int mtlHandle;
	short lmapIndex;
	char vertCount;
	char pad0[1];
	char verts[612];
};

struct score_t
{
	int client;
	int score;
	int ping;
	int deaths;
	int team;
	int hStatusIcon;
};

struct viewDamage_t
{
	int time;
	int duration;
	int yaw;
};

struct cameraShake_t
{
	int time;
	int scale;
	int length;
	int radius;
	char src[12];
	int size;
	int rumbleScale;
};

struct compassactor_t
{
	int iLastUpdate;
	int64_t vLastPos;
	float fLastYaw;
	int pingTime;
	int beginFadeTime;
	char enemy;
};

struct animScriptData_t
{
	char animations[49152];
	int numAnimations;
	char scriptAnims[84624];
	char scriptCannedAnims[84624];
	char scriptStateChange[8256];
	char scriptEvents[9804];
	char scriptItems[499712];
	int numScriptItems;
	scr_animtree_t animTree;
	short torsoAnim;
	short legsAnim;
	short turningAnim;
	char pad0[2];
	int soundAlias;
	int playSoundAlias;
};

struct _3622
{
	int colorForDir;
	int sunVisibility;
};

struct animScript_t
{
	int numItems;
	char items[512];
};

struct animScriptItem_t
{
	int numConditions;
	char conditions[108];
	int numCommands;
	char commands[128];
};

struct animScriptCondition_t
{
	int index;
	int64_t value;
};

struct animScriptCommand_t
{
	int bodyPart;
	int animIndex;
	int animDuration;
	int soundAlias;
};

struct displayContextDef_s
{
	int bias;
	int realTime;
	int frameTime;
	int cursorx;
	int cursory;
	int debug;
	int screenWidth;
	int screenHeight;
	int screenAspect;
	int FPS;
	int blurRadiusOut;
	char Menus[512];
	int menuCount;
	char menuStack[64];
	int openMenuCount;
};

struct _3785
{
	char active;
	char pad0[3];
	int keyCatchers;
	char displayHUDWithKeycatchUI;
	char cgameInitialized;
	char cgameInitCalled;
	char usingAds;
	int frameActiveClientCount;
	int frameClientIndex;
	int timeoutcount;
	clSnapshot_t snap;
	int serverTime;
	int oldServerTime;
	int oldFrameServerTime;
	int serverTimeDelta;
	int oldSnapServerTime;
	int extrapolatedSnapshot;
	int newSnapshots;
	gameState_t gameState;
	char mapname[64];
	int parseEntitiesNum;
	int parseClientsNum;
	int64_t mouseDx;
	int64_t mouseDy;
	int mouseIndex;
	char stanceHeld;
	char pad1[3];
	int stancePosition;
	int stanceTime;
	int cgameUserCmdValue;
	int cgameUserHoldableValue;
	int cgameInShellshock;
	int cgameSensitivity;
	int cgameMaxPitchSpeed;
	int cgameMaxYawSpeed;
	char cgameKickAngles[12];
	char viewangles[12];
	int serverId;
	char color_allies[16];
	char color_axis[16];
	int skelTimeStamp;
	int skelMemPos;
	char skelMemory[262144];
	int skelMemoryStart;
	char allowedAllocSkel;
	char pad2[3];
	char cmds[3584];
	int cmdNumber;
	char outPackets[384];
	char snapshots[318208];
	char entityBaselines[245760];
	char parseEntities[491520];
	char parseClients[188416];
	int corruptedTranslationFile;
	char translationVersion[256];
	char voicePackets[2600];
	int voicePacketCount;
	int voicePacketLastTransmit;
};

struct clSnapshot_t
{
	int valid;
	int snapFlags;
	int serverTime;
	int messageNum;
	int deltaNum;
	int ping;
	int cmdNum;
	playerState_t ps;
	int numEntities;
	int numClients;
	int parseEntitiesNum;
	int parseClientsNum;
	int serverCommandNum;
};

struct outPacket_t
{
	int p_cmdNumber;
	int p_serverTime;
	int p_realtime;
};

struct ClientVoicePacket_t
{
	int dataSize;
	char data[256];
};

struct msg_t
{
	int overflowed;
	int data;
	int maxsize;
	int cursize;
	int readcount;
	int bit;
};

struct _3568
{
	char talker;
	char data[256];
	int dataSize;
};

struct _3702
{
	int Printf;
	int Error;
	int Milliseconds;
	int Hunk_AllocInternal;
	int Hunk_AllocateTempMemoryInternal;
	int Z_MallocInternal;
	int Z_FreeInternal;
	int Hunk_AllocAlignInternal;
	int Z_VirtualReserveInternal;
	int Z_VirtualCommitInternal;
	int Z_VirtualDecommitInternal;
	int Z_VirtualFreeInternal;
	int Hunk_FreeTempMemory;
	int Hunk_ClearTempMemory;
	int Hunk_HideTempMemory;
	int Hunk_ShowTempMemory;
	int Hunk_AllocateTempMemoryHighInternal;
	int Hunk_ClearTempMemoryHigh;
	int Sys_DirectXFatalError;
	int Sys_ShowSplashWindow;
	int Sys_HideSplashWindow;
	int Sys_LoadingKeepAlive;
	int Dvar_RegisterBool;
	int Dvar_RegisterInt;
	int Dvar_RegisterFloat;
	int Dvar_RegisterString;
	int Dvar_RegisterEnum;
	int Dvar_RegisterColor;
	int Dvar_RegisterVec2;
	int Dvar_RegisterVec3;
	int Dvar_RegisterVec4;
	int Dvar_UnregisterSystem;
	int Dvar_ChangeResetValue;
	int Dvar_IsAtDefaultValue;
	int Dvar_ClearModified;
	int Dvar_SetModified;
	int Dvar_UpdateEnumDomain;
	int Dvar_SetBool;
	int Dvar_SetInt;
	int Dvar_SetFloat;
	int Dvar_SetString;
	int Dvar_SetColor;
	int Dvar_SetVec2;
	int Dvar_SetVec3;
	int Dvar_SetVec4;
	int Dvar_SetFromString;
	int Dvar_SetBoolByName;
	int Dvar_SetIntByName;
	int Dvar_SetFloatByName;
	int Dvar_SetStringByName;
	int Dvar_SetColorByName;
	int Dvar_SetVec2ByName;
	int Dvar_SetVec3ByName;
	int Dvar_SetVec4ByName;
	int Dvar_SetFromStringByName;
	int Dvar_GetBool;
	int Dvar_GetInt;
	int Dvar_GetFloat;
	int Dvar_GetString;
	int Dvar_GetVariantString;
	int Dvar_EnumToString;
	int Dvar_Reset;
	int Cmd_AddCommand;
	int Cmd_RemoveCommand;
	int Cmd_Argc;
	int Cmd_Argv;
	int Cbuf_ExecuteText;
	int Com_SaveDvarsToBuffer;
	int Com_LoadDvarsFromBuffer;
	int Com_GetBsp;
	int SEH_ReadCharFromString;
	int CL_UpdateDebugData;
	int CL_FlushDebugData;
	int StatMon_Warning;
	int FS_ReadFile;
	int FS_FreeFile;
	int FS_FOpenFileRead;
	int FS_ListFiles;
	int FS_FreeFileList;
	int FS_FileExists;
	int FS_WriteFile;
	int FS_FOpenFileByMode;
	int FS_FCloseFile;
	int FS_Read;
	int FS_Write;
	int CM_SaveLump;
	int CM_BoxTrace;
	int CM_BoxSightTrace;
	int CM_RayTriangleIntersect;
	int XModelPrecache;
	int XModelGetSurfaces;
	int XModelBad;
	int Hunk_OverrideDataForFile;
	int XModelGetNumLods;
	int XModelSetTestLods;
	int XModelGetLodForDist;
	int XModelGetLodOutDist;
	int XModelGetSurfaceName;
	int XModelGetName;
	int XModelGetFlags;
	int XModelNumBones;
	int XModelGetSkins;
	int XModelGetMemUsage;
	int XModelGetLodName;
	int XModelGetBasePose;
	int XModelGetBasePoseBone;
	int DObjBad;
	int DB_EnumXAssets;
	int DObjGetBounds;
	int DObjGetSurface;
	int DObjGetNumModels;
	int DObjGetNumSurfaces;
	int DObjGetSurfaces;
	int DObjGetPartBits;
	int DObjGetRotTransArray;
	int DObjSkelAreBonesUpToDate;
	int DObjGetMatOffset;
	int DObjGetModel;
	int DObjGetSurfaceName;
	int DObjCreate;
	int DObjGetAllocSkelSize;
	int DObjCreateSkel;
	int DObjCalcAnim;
	int DObjCalcSkel;
	int DObjNumBones;
	int DObjGetBoneInfo;
	int DObjGetLodForDist;
	int DObjGetLodOutDist;
	int DObjCompleteHierarchyBits;
	int DObjSetModel;
	int CIN_UploadCinematic;
	int CIN_PlayCinematic;
	int CIN_RunCinematic;
	int CG_DObjCalcPose;
	int CL_GetHudMsgIconMaterialName;
};

struct _3700
{
	char start[12];
	char end[12];
	char color[16];
	int depthTest;
};

struct _3788
{
	char adr[12];
	char netType;
	char clients;
	char maxClients;
	char dirty;
	char allowAnonymous;
	char bPassword;
	char pure;
	char friendlyfire;
	char killcam;
	char consoleDisabled;
	char hardware;
	char mod;
	char voice;
	char requestCount;
	short minPing;
	short maxPing;
	short ping;
	char hostName[32];
	char mapName[32];
	char game[24];
	char gameType[16];
};

struct _3786
{
	int state;
	int qport;
	int clientNum;
	int lastPacketSentTime;
	int lastPacketTime;
	char serverAddress[12];
	int connectTime;
	int connectPacketCount;
	char serverMessage[256];
	int challenge;
	int checksumFeed;
	int reliableSequence;
	int reliableAcknowledge;
	char reliableCommands[131072];
	int serverMessageSequence;
	int serverCommandSequence;
	int lastExecutedServerCommand;
	char serverCommands[131072];
	int download;
	char downloadTempName[256];
	char downloadName[256];
	int downloadNumber;
	int downloadBlock;
	int downloadCount;
	int downloadSize;
	char downloadList[1024];
	int downloadRestart;
	char demoName[64];
	int demorecording;
	int demoplaying;
	int isTimeDemo;
	int demowaiting;
	int firstDemoFrameSkipped;
	int demofile;
	int timeDemoLog;
	int timeDemoFrames;
	int timeDemoStart;
	int timeDemoPrev;
	int timeDemoBaseTime;
	netchan_t netchan;
	int pOOBProf;
};

struct _3791
{
	int quit;
	int hunkUsersStarted;
	char servername[256];
	int rendererStarted;
	int soundStarted;
	int uiStarted;
	int frametime;
	int realtime;
	int realFrametime;
	clientLogo_t logo;
	int numlocalservers;
	char localServers[17408];
	int waitglobalserverresponse;
	int numglobalservers;
	char globalServers[2720000];
	int numfavoriteservers;
	char favoriteServers[17408];
	int pingUpdateSource;
	char authorizeServer[12];
	int whiteMaterial;
	int consoleMaterial;
	int consoleFont;
	vidConfig_t vidConfig;
	clientDebug_t debug;
};

struct clientLogo_t
{
	int startTime;
	int duration;
	int fadein;
	int fadeout;
	int64_t material;
};

struct clientDebug_t
{
	int maxStrings;
	int numStrings;
	int strings;
	int stringFromServer;
	int maxLines;
	int numLines;
	int lines;
	int lineFromServer;
	int lineDuration;
};

struct ping_t
{
	char adr[12];
	int start;
	int time;
	char info[1024];
};

struct svEntity_s
{
	short worldSector;
	short nextEntityInWorldSector;
	archivedEntity_t baseline;
	int numClusters;
	char clusternums[64];
	int lastCluster;
	int linkcontents;
	int64_t linkmin;
	int64_t linkmax;
};

struct archivedEntity_s
{
	char s[240];
	archivedEntityShared_t r;
};

typedef enum
{
	SV_CMD_CAN_IGNORE = 0,
	SV_CMD_RELIABLE = 1
} svscmd_type;

struct serverStatusInfo_t
{
	char address[64];
	char lines[2048];
	char text[1024];
	char pings[192];
	int numLines;
};

typedef enum
{
	UIMENU_NONE = 0,
	UIMENU_MAIN = 1,
	UIMENU_INGAME = 2,
	UIMENU_NEED_CD = 3,
	UIMENU_BAD_CD_KEY = 4,
	UIMENU_TEAM = 5,
	UIMENU_PREGAME = 6,
	UIMENU_POSTGAME = 7,
	UIMENU_WM_QUICKMESSAGE = 8,
	UIMENU_SCRIPT_POPUP = 9,
	UIMENU_SCRIPT_POPUP_NO_MOUSE = 10,
	UIMENU_PLAYER_PROFILE = 11
} uiMenuCommand_t;

struct ConversionArguments
{
	int argCount;
	char args[36];
};

struct _3706
{
	CachedAssets_t assets;
	int playerCount;
	char playerNames[2048];
	char teamNames[2048];
	char playerClientNums[256];
	int numGameTypes;
	char gameTypes[256];
	int numJoinGameTypes;
	char joinGameTypes[256];
	int mapCount;
	char mapList[20992];
	char serverHardwareIconList[32];
	char modList[512];
	int modCount;
	int modIndex;
	char movieList[1024];
	int movieCount;
	int movieIndex;
	int previewMovie;
	serverStatus_t serverStatus;
	char serverStatusAddress[64];
	char serverStatusInfo[3332];
	int nextServerStatusRefresh;
	pendingServerStatus_t pendingServerStatus;
};

struct serverStatus_s
{
	char pingList[1088];
	int numqueriedservers;
	int currentping;
	int nextpingtime;
	int maxservers;
	int refreshtime;
	int numServers;
	int sortKey;
	int sortDir;
	int lastCount;
	int refreshActive;
	int currentServer;
	char displayServers[80000];
	int numDisplayServers;
	int serverCount;
	int numPlayersOnServers;
	int nextDisplayRefresh;
	int nextSortTime;
	int currentServerPreview;
	int currentServerCinematic;
	int motdLen;
	int motdWidth;
	int motdPaintX;
	int motdPaintX2;
	int motdOffset;
	int motdTime;
	char motd[1024];
};

struct CachedAssets_t
{
	int scrollBarArrowUp;
	int scrollBarArrowDown;
	int scrollBarArrowLeft;
	int scrollBarArrowRight;
	int scrollBar;
	int scrollBarThumb;
	int sliderBar;
	int sliderThumb;
	int whiteMaterial;
	int cursor;
	int bigFont;
	int smallFont;
	int consoleFont;
	int boldFont;
	int textFont;
	int extraBigFont;
	int itemFocusSound;
};

struct pendingServerStatus_t
{
	int num;
	char server[2240];
};

struct gameTypeInfo
{
	int gameType;
	int gameTypeName;
};

struct mapInfo
{
	int mapName;
	int mapLoadName;
	int imageName;
	int opponentName;
	int teamMembers;
	int typeBits;
	int cinematic;
	char timeToBeat[128];
	int levelShot;
	int active;
};

struct modInfo_t
{
	int modName;
	int modDescr;
};

struct pinglist_t
{
	char adrstr[64];
	int start;
};

struct pendingServer_t
{
	char adrstr[64];
	char name[64];
	int startTime;
	int serverNum;
	int valid;
};

struct PlayerProfileStatus
{
	int sortDir;
	char displayProfile[256];
};

struct serverFilter_s
{
	int description;
	int basedir;
};

struct serverStatusDvar_t
{
	int name;
	int altName;
	sscType_t type;
};

typedef enum
{
	SSC_STRING = 0,
	SSC_YESNO = 1
} sscType_t;

struct loopmsg_t
{
	char data[1400];
	int datalen;
	int port;
};

struct _3767
{
	int initialized;
	int time;
	int snapFlagServerBit;
	int clients;
	int numSnapshotEntities;
	int numSnapshotClients;
	int nextSnapshotEntities;
	int nextSnapshotClients;
	int snapshotEntities;
	int snapshotClients;
	int archiveEnabled;
	int nextArchivedSnapshotFrames;
	int archivedSnapshotFrames;
	int archivedSnapshotBuffer;
	int nextArchivedSnapshotBuffer;
	int nextCachedSnapshotEntities;
	int nextCachedSnapshotClients;
	int nextCachedSnapshotFrames;
	int cachedSnapshotEntities;
	int cachedSnapshotClients;
	int cachedSnapshotFrames;
	int nextHeartbeatTime;
	int nextStatusResponseTime;
	char challenges[40960];
	char redirectAddress[12];
	char authorizeAddress[12];
	int pOOBProf;
	char tempBans[128];
};

struct cachedSnapshot_t
{
	int archivedFrame;
	int time;
	int num_entities;
	int first_entity;
	int num_clients;
	int first_client;
	int usesDelta;
};

struct challenge_t
{
	char adr[12];
	int challenge;
	int time;
	int pingTime;
	int firstTime;
	int firstPing;
	int connected;
	int guid;
};

struct tempBanSlot_t
{
	int guid;
	int banTime;
};

struct archivedSnapshot_s
{
	int start;
	int size;
};

struct cachedClient_s
{
	int playerStateExists;
	char cs[92];
	char ps[9896];
};

struct _3759
{
	serverState_t state;
	int restarting;
	int start_frameTime;
	int checksumFeed;
	int timeResidual;
	int nextFrameTime;
	char models[1024];
	char configstrings[8192];
	char svEntities[380928];
	int entityParsePoint;
	int gentities;
	int gentitySize;
	int num_entities;
	int gameClients;
	int gameClientSize;
	int skelTimeStamp;
	int skelMemPos;
	char bpsWindow[80];
	int bpsWindowSteps;
	int bpsTotalBytes;
	int bpsMaxBytes;
	char ubpsWindow[80];
	int ubpsTotalBytes;
	int ubpsMaxBytes;
	int ucompAve;
	int ucompNum;
	char gametype[64];
};

typedef enum
{
	SS_DEAD = 0,
	SS_LOADING = 1,
	SS_GAME = 2
} serverState_t;

struct MessageWindow
{
	int lines;
	int current_line;
	int count;
	int padding;
	int scrolltime;
	int fadein;
	int fadeout;
};

struct MessageLine
{
	char textBuffer[156];
	int startTime;
	int endTime;
};

typedef enum
{
	MWM_TOPDOWN = 0,
	MWM_TOPDOWN_REVERSED = 1,
	MWM_BOTTOMUP = 2,
	MWM_BOTTOMUP_CENTERED = 3
} msgwnd_mode_t;

struct ConDrawInputGlob
{
	int matchCount;
	int inputText;
	int inputTextLen;
	char hasExactMatch;
	char pad0[3];
	int x;
	int y;
	int leftX;
	int fontHeight;
};

struct Console
{
	int initialized;
	char textBuffer[131072];
	int currentLine;
	int lineOffset;
	int display;
	int prevType;
	int linewidth;
	int totallines;
	char outputVisible;
	char pad0[3];
	int64_t screenMin;
	int64_t screenMax;
	int messageBuffer;
	char messageBufferArray[20448];
	char color[16];
};

struct MessageBuffer
{
	char gamemsg[28];
	char gamemsg_lines[1312];
	char boldgamemsg[28];
	char boldgamemsg_lines[1312];
	char subtitle[28];
	char subtitle_lines[1312];
	char minicon[28];
	char minicon_lines[16400];
};

struct serverInfo_t
{
	netadr_t adr;
	char netType;
	char clients;
	char maxClients;
	char dirty;
	char allowAnonymous;
	char bPassword;
	char pure;
	char friendlyfire;
	char killcam;
	char consoleDisabled;
	char hardware;
	char mod;
	char voice;
	char requestCount;
	short minPing;
	short maxPing;
	short ping;
	char hostName[32];
	char mapName[32];
	char game[24];
	char gameType[16];
};

struct _3787
{
	char adr[12];
	int start;
	int time;
	char info[1024];
};

struct _3812
{
	int ip;
	short port;
};

struct _3813
{
	char password[24];
	char host[12];
};

struct scrollInfo_s
{
	int nextScrollTime;
	int nextAdjustTime;
	int adjustValue;
	int scrollKey;
	int xStart;
	int yStart;
	int item;
	int scrollDir;
};

struct commandDef_t
{
	int name;
	int handler;
};

struct bind_t
{
	int command;
	int defaultbind1;
	int defaultbind2;
	int bind1;
	int bind2;
};

struct NetField
{
	int name;
	int offset;
	int bits;
};

struct _3769
{
	huff_t compressor;
	char decompressor[28700];
};

struct huff_t
{
	int blocNode;
	int blocPtrs;
	int tree;
	int lhead;
	int ltail;
	char loc[1028];
	int freelist;
	char nodeList[24576];
	char nodePtrs[3072];
};

struct nodetype
{
	int left;
	int right;
	int parent;
	int next;
	int prev;
	int head;
	int weight;
	int symbol;
};

struct _3783
{
	int valid;
	int snapFlags;
	int serverTime;
	int messageNum;
	int deltaNum;
	int ping;
	int cmdNum;
	playerState_t ps;
	int numEntities;
	int numClients;
	int parseEntitiesNum;
	int parseClientsNum;
	int serverCommandNum;
};

struct snapshot_t
{
	int snapFlags;
	int ping;
	int serverTime;
	char ps[9896];
	int numEntities;
	int numClients;
	char entities[61440];
	char clients[5888];
	int serverCommandSequence;
};

struct _3765
{
	char adr[12];
	int challenge;
	int time;
	int pingTime;
	int firstTime;
	int firstPing;
	int connected;
	int guid;
};

struct ucmd_t
{
	int name;
	int func;
};

struct uiClientState_t
{
	connstate_t connState;
	int connectPacketCount;
	int clientNum;
	char servername[1024];
	char messageString[1024];
};

typedef enum
{
	ANIM_BP_UNUSED = 0,
	ANIM_BP_LEGS = 1,
	ANIM_BP_TORSO = 2,
	ANIM_BP_BOTH = 3,
	NUM_ANIM_BODYPARTS = 4
} animBodyPart_t;

typedef enum
{
	ANIM_ET_PAIN = 0,
	ANIM_ET_DEATH = 1,
	ANIM_ET_FIREWEAPON = 2,
	ANIM_ET_JUMP = 3,
	ANIM_ET_JUMPBK = 4,
	ANIM_ET_LAND = 5,
	ANIM_ET_DROPWEAPON = 6,
	ANIM_ET_RAISEWEAPON = 7,
	ANIM_ET_CLIMB_MOUNT = 8,
	ANIM_ET_CLIMB_DISMOUNT = 9,
	ANIM_ET_RELOAD = 10,
	ANIM_ET_CROUCH_TO_PRONE = 11,
	ANIM_ET_PRONE_TO_CROUCH = 12,
	ANIM_ET_STAND_TO_CROUCH = 13,
	ANIM_ET_CROUCH_TO_STAND = 14,
	ANIM_ET_STAND_TO_PRONE = 15,
	ANIM_ET_PRONE_TO_STAND = 16,
	ANIM_ET_MELEEATTACK = 17,
	ANIM_ET_SHELLSHOCK = 18,
	NUM_ANIM_EVENTTYPES = 19
} scriptAnimEventTypes_t;

struct _3668
{
	scr_anim_t anim;
	int iNameHash;
	char szAnimName[64];
};

struct animStringItem_t
{
	int string;
	int hash;
};

typedef enum
{
	AISTATE_NULL = -1,
	AISTATE_RELAXED = 0,
	AISTATE_QUERY = 1,
	AISTATE_ALERT = 2,
	AISTATE_COMBAT = 3,
	MAX_AISTATES = 4
} aistateEnum_t;

typedef enum
{
	ANIM_MT_UNUSED = 0,
	ANIM_MT_IDLE = 1,
	ANIM_MT_IDLECR = 2,
	ANIM_MT_IDLEPRONE = 3,
	ANIM_MT_WALK = 4,
	ANIM_MT_WALKBK = 5,
	ANIM_MT_WALKCR = 6,
	ANIM_MT_WALKCRBK = 7,
	ANIM_MT_WALKPRONE = 8,
	ANIM_MT_WALKPRONEBK = 9,
	ANIM_MT_RUN = 10,
	ANIM_MT_RUNBK = 11,
	ANIM_MT_RUNCR = 12,
	ANIM_MT_RUNCRBK = 13,
	ANIM_MT_TURNRIGHT = 14,
	ANIM_MT_TURNLEFT = 15,
	ANIM_MT_TURNRIGHTCR = 16,
	ANIM_MT_TURNLEFTCR = 17,
	ANIM_MT_CLIMBUP = 18,
	ANIM_MT_CLIMBDOWN = 19,
	ANIM_MT_MANTLE_ROOT = 20,
	ANIM_MT_MANTLE_UP_57 = 21,
	ANIM_MT_MANTLE_UP_51 = 22,
	ANIM_MT_MANTLE_UP_45 = 23,
	ANIM_MT_MANTLE_UP_39 = 24,
	ANIM_MT_MANTLE_UP_33 = 25,
	ANIM_MT_MANTLE_UP_27 = 26,
	ANIM_MT_MANTLE_UP_21 = 27,
	ANIM_MT_MANTLE_OVER_HIGH = 28,
	ANIM_MT_MANTLE_OVER_MID = 29,
	ANIM_MT_MANTLE_OVER_LOW = 30,
	ANIM_MT_FLINCH_FORWARD = 31,
	ANIM_MT_FLINCH_BACKWARD = 32,
	ANIM_MT_FLINCH_LEFT = 33,
	ANIM_MT_FLINCH_RIGHT = 34,
	ANIM_MT_STUMBLE_FORWARD = 35,
	ANIM_MT_STUMBLE_BACKWARD = 36,
	ANIM_MT_STUMBLE_WALK_FORWARD = 37,
	ANIM_MT_STUMBLE_WALK_BACKWARD = 38,
	ANIM_MT_STUMBLE_CROUCH_FORWARD = 39,
	ANIM_MT_STUMBLE_CROUCH_BACKWARD = 40,
	NUM_ANIM_MOVETYPES = 41
} scriptAnimMoveTypes_t;

struct animConditionTable_t
{
	animScriptConditionTypes_t type;
	int values;
};

typedef enum
{
	ANIM_CONDTYPE_BITFLAGS = 0,
	ANIM_CONDTYPE_VALUE = 1,
	NUM_ANIM_CONDTYPES = 2
} animScriptConditionTypes_t;

struct kbutton_t
{
	int64_t down;
	int downtime;
	int msec;
	char active;
	char wasPressed;
};

struct _3716
{
	int iLastUpdate;
	int64_t vLastPos;
	float fLastYaw;
	int pingTime;
	int beginFadeTime;
	char enemy;
};

struct huffman_t
{
	huff_t compressor;
	char decompressor[28700];
};

struct stringDef_s
{
	int next;
	int str;
};

struct item_ent_t
{
	int count2;
	short index;
};

struct trigger_ent_t
{
	int threshold;
	int accumulate;
	int timestamp;
	int singleUserEntIndex;
};

struct mover_ent_t
{
	int decelTime;
	int aDecelTime;
	int speed;
	int aSpeed;
	int midTime;
	int aMidTime;
	char pos1[12];
	char pos2[12];
	char pos3[12];
	char apos1[12];
	char apos2[12];
	char apos3[12];
};

struct corpse_ent_t
{
	int deathAnimStartTime;
};

struct grenade_ent_t
{
	int time;
};

struct gclient_s
{
	playerState_t ps;
	clientSession_t sess;
	int spectatorClient;
	int noclip;
	int ufo;
	int bFrozen;
	int lastCmdTime;
	int buttons;
	int oldbuttons;
	int latched_buttons;
	int buttonsSinceLastFrame;
	char oldOrigin[12];
	float fGunPitch;
	float fGunYaw;
	int damage_blood;
	char damage_from[12];
	int damage_fromWorld;
	int accurateCount;
	int accuracy_shots;
	int accuracy_hits;
	int inactivityTime;
	int inactivityWarning;
	int lastVoiceTime;
	int switchTeamTime;
	int currentAimSpreadScale;
	int persistantPowerup;
	int portalID;
	int dropWeaponTime;
	int sniperRifleFiredTime;
	int sniperRifleMuzzleYaw;
	int PCSpecialPickedUpCount;
	int pLookatEnt;
	int useHoldEntity;
	int useHoldTime;
	int iLastCompassFriendlyInfoEnt;
	int compassPingTime;
	int damageTime;
	int v_dmg_roll;
	int v_dmg_pitch;
	char swayViewAngles[12];
	char swayOffset[12];
	char swayAngles[12];
	char vLastMoveAng[12];
	float fLastIdleFactor;
	char vGunOffset[12];
	char vGunSpeed[12];
	int weapIdleTime;
	int lastServerTime;
	int lastSpawnTime;
};

struct turretInfo_s
{
	int inuse;
	int flags;
	int fireTime;
	int64_t arcmin;
	int64_t arcmax;
	int dropPitch;
	int stance;
	int prevStance;
	int fireSndDelay;
	char userOrigin[12];
	int playerSpread;
	int pitchCap;
	char fireSnd;
	char fireSndPlayer;
	char stopSnd;
	char stopSndPlayer;
};

struct tagInfo_s
{
	int parent;
	int next;
	short name;
	char pad0[2];
	int index;
	char axis[48];
	char parentInvAxis[48];
};

struct clientSession_t
{
	sessionState_t sessionState;
	int forceSpectatorClient;
	int status_icon;
	int archiveTime;
	int score;
	int deaths;
	short scriptPersId;
	char pad0[2];
	clientConnected_t connected;
	usercmd_t cmd;
	char oldcmd[28];
	int localClient;
	int predictItemPickup;
	char newnetname[32];
	int maxHealth;
	int enterTime;
	playerTeamState_t teamState;
	int voteCount;
	int teamVoteCount;
	int viewmodelIndex;
	int noSpectate;
	int teamInfo;
	clientState_t cs;
	int psOffsetTime;
};

typedef enum
{
	SESS_STATE_PLAYING = 0,
	SESS_STATE_DEAD = 1,
	SESS_STATE_SPECTATOR = 2,
	SESS_STATE_INTERMISSION = 3
} sessionState_t;

typedef enum
{
	CON_DISCONNECTED = 0,
	CON_CONNECTING = 1,
	CON_CONNECTED = 2
} clientConnected_t;

struct playerTeamState_t
{
	int location;
};

struct _3761
{
	int archivedFrame;
	int time;
	int num_entities;
	int first_entity;
	int num_clients;
	int first_client;
	int usesDelta;
};

struct _3772
{
	int numSnapshotEntities;
	char snapshotEntities[4096];
};

typedef enum
{
	HITLOC_NONE = 0,
	HITLOC_HELMET = 1,
	HITLOC_HEAD = 2,
	HITLOC_NECK = 3,
	HITLOC_TORSO_UPR = 4,
	HITLOC_TORSO_LWR = 5,
	HITLOC_R_ARM_UPR = 6,
	HITLOC_L_ARM_UPR = 7,
	HITLOC_R_ARM_LWR = 8,
	HITLOC_L_ARM_LWR = 9,
	HITLOC_R_HAND = 10,
	HITLOC_L_HAND = 11,
	HITLOC_R_LEG_UPR = 12,
	HITLOC_L_LEG_UPR = 13,
	HITLOC_R_LEG_LWR = 14,
	HITLOC_L_LEG_LWR = 15,
	HITLOC_R_FOOT = 16,
	HITLOC_L_FOOT = 17,
	HITLOC_GUN = 18,
	HITLOC_NUM = 19
} hitLocation_t;

struct corpseInfo_t
{
	int tree;
	int entnum;
	int time;
	clientInfo_t ci;
	char falling;
};

struct BuiltinFunctionDef
{
	int actionString;
	int actionFunc;
	int type;
};

struct BuiltinMethodDef
{
	int actionString;
	int actionFunc;
	int type;
};

struct game_hudelem_s
{
	char elem[128];
	int clientNum;
	int team;
	int archived;
};

typedef enum
{
	F_INT = 0,
	F_FLOAT = 1,
	F_LSTRING = 2,
	F_STRING = 3,
	F_VECTOR = 4,
	F_ENTITY = 5,
	F_VECTORHACK = 6,
	F_OBJECT = 7,
	F_MODEL = 8
} fieldtype_t;

struct ent_field_t
{
	int name;
	int ofs;
	int type;
	int callback;
};

struct spawn_t
{
	int name;
	int spawn;
};

struct keywordHash_s
{
	int keyword;
	int func;
	int next;
};

struct loadAssets_t
{
	int menuEnterSound;
	int menuExitSound;
	int menuBuzzSound;
	int fadeClamp;
	int fadeCycle;
	int fadeAmount;
	int fadeInAmount;
	int shadowX;
	int shadowY;
	char shadowColor[16];
	int shadowFadeClamp;
};

struct entityHandler_t
{
	int think;
	int reached;
	int blocked;
	int touch;
	int use;
	int pain;
	int die;
	int controller;
	int methodOfDeath;
	int splashMethodOfDeath;
};

struct SpawnVar
{
	char spawnVarsValid;
	char pad0[3];
	int numSpawnVars;
	char spawnVars[512];
	int numSpawnVarChars;
	char spawnVarChars[2048];
};

struct _3703
{
	int tree;
	int entnum;
	int time;
	clientInfo_t ci;
	char falling;
};

struct game_hudelem_field_t
{
	int name;
	int ofs;
	fieldtype_t type;
	int mask;
	int shift;
	int setter;
	int getter;
};

typedef enum
{
	HUDELEM_UPDATE_ARCHIVAL = 1,
	HUDELEM_UPDATE_CURRENT = 2,
	HUDELEM_UPDATE_ARCHIVAL_AND_CURRENT = 3
} hudelem_update_t;

struct UI_Component
{
	int UI_Component;
	int64_t size;
	int selectionParent;
};

struct UI_Component_data_t
{
	int screenWidth;
	int screenHeight;
	int charWidth;
	int charHeight;
	int scrollBarSize;
	int cursor;
	int64_t cursorPos;
	int hideCursor;
	int filledCircle;
	int consoleReason;
	char findText[128];
};

struct UI_ScrollPane
{
	char pad0[16];
	int comp;
	char forceHorScoll;
	char pad1[3];
	int64_t mouseHeldScale;
	int64_t mouseHeldPos;
	int64_t mouseHeldCompPos;
	short mouseWasDown;
};

struct UI_LinesComponent
{
	char pad0[16];
	int selectedLine;
	char focusOnSelectedLine;
	char focusOnSelectedLineUser;
	char pad1[2];
	int numLines;
	int64_t pos;
};

struct UI_VerticalDivider
{
	char pad0[16];
	int topComp;
	int bottomComp;
	int posY;
};

struct client_fields_s
{
	int name;
	int ofs;
	fieldtype_t type;
	int setter;
	int getter;
};

struct _3717
{
	int ent;
	char origin[12];
	char angles[12];
	int deltayaw;
};

typedef enum
{
	HITLOC_NONE = 0,
	HITLOC_HELMET = 1,
	HITLOC_HEAD = 2,
	HITLOC_NECK = 3,
	HITLOC_TORSO_UPR = 4,
	HITLOC_TORSO_LWR = 5,
	HITLOC_R_ARM_UPR = 6,
	HITLOC_L_ARM_UPR = 7,
	HITLOC_R_ARM_LWR = 8,
	HITLOC_L_ARM_LWR = 9,
	HITLOC_R_HAND = 10,
	HITLOC_L_HAND = 11,
	HITLOC_R_LEG_UPR = 12,
	HITLOC_L_LEG_UPR = 13,
	HITLOC_R_LEG_LWR = 14,
	HITLOC_L_LEG_LWR = 15,
	HITLOC_R_FOOT = 16,
	HITLOC_L_FOOT = 17,
	HITLOC_GUN = 18,
	HITLOC_NUM = 19
} _3579;

struct sbpicinfo_t
{
	int x;
	int y;
	int w;
	int h;
};

struct listColumnInfo_t
{
	listColumnTypes_t type;
	float fWidth;
	int pszName;
	int iAlignment;
};

typedef enum
{
	LCT_NAME = 0,
	LCT_CLAN = 1,
	LCT_SCORE = 2,
	LCT_DEATHS = 3,
	LCT_PING = 4,
	LCT_STATUS_ICON = 5,
	LCT_TALKING_ICON = 6,
	LCT_NUM = 7
} listColumnTypes_t;

struct weaponParms
{
	char forward[12];
	char right[12];
	char up[12];
	char muzzleTrace[12];
	char gunForward[12];
	int weapDef;
};

struct AntilagClientStore
{
	char realClientPositions[768];
	char clientMoved[64];
};

struct ipFilter_s
{
	int mask;
	int compare;
};

struct useList_t
{
	int ent;
	int score;
};

struct _3731
{
	char rect[96];
	char rectClient[96];
	int name;
	int group;
	int cinematicName;
	int cinematic;
	int style;
	int border;
	int ownerDraw;
	int ownerDrawFlags;
	int borderSize;
	int staticFlags;
	char dynamicFlags[16];
	char rectEffects0[96];
	char rectEffects1[96];
	char offsetTime[16];
	int nextTime;
	char foreColor[16];
	char backColor[16];
	char borderColor[16];
	char outlineColor[16];
	int background;
};

struct _3627
{
	int c_indexes;
	int c_fxIndexes;
	int c_viewIndexes;
	int c_shadowIndexes;
	int c_vertexes;
	int c_batches;
	int c_refents;
	int dc;
	Image_MemUsage c_imageUsage;
};

struct _3826
{
	char frameSamples[512];
	int frameCount;
	char snapshotFlags[512];
	char snapshotSamples[512];
	int snapshotCount;
};

struct consoleCommand_t
{
	int cmd;
	int function;
};

struct localEntity_s
{
	int prev;
	int next;
	leType_t leType;
	int endTime;
	char pos[36];
	char color[16];
	int tracerClipDist;
	GfxEntity refEntity;
};

typedef enum
{
	LE_MOVING_TRACER = 0
} leType_t;

struct cg_hudelem_t
{
	int x;
	int y;
	int z;
	int width;
	int height;
	char hudElemLabel[256];
	int labelWidth;
	char hudElemText[256];
	int textWidth;
	int font;
	int fontScale;
	int fontHeight;
	char color[16];
};

struct sockaddr
{
	char sa_len;
	char sa_family;
	char sa_data[14];
};

struct timeval
{
	int tv_sec;
	int tv_usec;
};

struct fd_set
{
	char fds_bits[128];
};

struct sockaddr_in
{
	char sin_len;
	char sin_family;
	short sin_port;
	in_addr sin_addr;
	int64_t sin_zero;
};

struct in_addr
{
	int s_addr;
};

struct jpeg_destination_mgr
{
	int next_output_byte;
	int free_in_buffer;
	int init_destination;
	int empty_output_buffer;
	int term_destination;
};

struct jpeg_compress_struct
{
	int err;
	int mem;
	int progress;
	int client_data;
	char is_decompressor;
	char pad0[3];
	int global_state;
	jpeg_alloc alloc;
	int dest;
	int image_width;
	int image_height;
	int input_components;
	J_COLOR_SPACE in_color_space;
	int64_t input_gamma;
	int data_precision;
	int num_components;
	int jpeg_color_space;
	int comp_info;
	char quant_tbl_ptrs[16];
	char dc_huff_tbl_ptrs[16];
	char ac_huff_tbl_ptrs[16];
	char arith_dc_L[16];
	char arith_dc_U[16];
	char arith_ac_K[16];
	int num_scans;
	int scan_info;
	char raw_data_in;
	char arith_code;
	char optimize_coding;
	char CCIR601_sampling;
	int smoothing_factor;
	J_DCT_METHOD dct_method;
	int restart_interval;
	int restart_in_rows;
	char write_JFIF_header;
	char JFIF_major_version;
	char JFIF_minor_version;
	char density_unit;
	short X_density;
	short Y_density;
	char write_Adobe_marker;
	char pad1[3];
	int next_scanline;
	char progressive_mode;
	char pad2[3];
	int max_h_samp_factor;
	int max_v_samp_factor;
	int total_iMCU_rows;
	int comps_in_scan;
	char cur_comp_info[16];
	int MCUs_per_row;
	int MCU_rows_in_scan;
	int blocks_in_MCU;
	char MCU_membership[40];
	int Ss;
	int Se;
	int Ah;
	int Al;
	int master;
	int main;
	int prep;
	int coef;
	int marker;
	int cconvert;
	int downsample;
	int fdct;
	int entropy;
	int script_space;
	int script_space_size;
};

struct jpeg_alloc
{
	int malloc;
	int free;
};

typedef enum
{
	JCS_UNKNOWN = 0,
	JCS_GRAYSCALE = 1,
	JCS_RGB = 2,
	JCS_YCbCr = 3,
	JCS_CMYK = 4,
	JCS_YCCK = 5
} J_COLOR_SPACE;

typedef enum
{
	JDCT_ISLOW = 0,
	JDCT_IFAST = 1,
	JDCT_FLOAT = 2
} J_DCT_METHOD;

struct jpeg_error_mgr
{
	int error_exit;
	int emit_message;
	int output_message;
	int format_message;
	int reset_error_mgr;
	int msg_code;
	char pad0[80];
	int trace_level;
	int num_warnings;
	int jpeg_message_table;
	int last_jpeg_message;
	int addon_message_table;
	int first_addon_message;
	int last_addon_message;
	int exit;
	int printf;
};

struct jpeg_memory_mgr
{
	int alloc_small;
	int alloc_large;
	int alloc_sarray;
	int alloc_barray;
	int request_virt_sarray;
	int request_virt_barray;
	int realize_virt_arrays;
	int access_virt_sarray;
	int access_virt_barray;
	int free_pool;
	int self_destruct;
	int max_memory_to_use;
	int max_alloc_chunk;
};

struct jpeg_progress_mgr
{
	int progress_monitor;
	int pass_counter;
	int pass_limit;
	int completed_passes;
	int total_passes;
};

struct jpeg_component_info
{
	int component_id;
	int component_index;
	int h_samp_factor;
	int v_samp_factor;
	int quant_tbl_no;
	int dc_tbl_no;
	int ac_tbl_no;
	int width_in_blocks;
	int height_in_blocks;
	int DCT_scaled_size;
	int downsampled_width;
	int downsampled_height;
	char component_needed;
	char pad0[3];
	int MCU_width;
	int MCU_height;
	int MCU_blocks;
	int MCU_sample_width;
	int last_col_width;
	int last_row_height;
	int quant_table;
	int dct_table;
};

struct jpeg_comp_master
{
	int prepare_for_pass;
	int pass_startup;
	int finish_pass;
	char call_pass_startup;
	char is_last_pass;
};

struct jpeg_c_main_controller
{
	int start_pass;
	int process_data;
};

struct jpeg_c_prep_controller
{
	int start_pass;
	int pre_process_data;
};

struct jpeg_c_coef_controller
{
	int start_pass;
	int compress_data;
};

struct jpeg_marker_writer
{
	int write_file_header;
	int write_frame_header;
	int write_scan_header;
	int write_file_trailer;
	int write_tables_only;
	int write_marker_header;
	int write_marker_byte;
};

struct jpeg_color_converter
{
	int start_pass;
	int color_convert;
};

struct jpeg_downsampler
{
	int start_pass;
	int downsample;
	char need_context_rows;
};

struct jpeg_forward_dct
{
	int start_pass;
	int forward_DCT;
};

struct jpeg_entropy_encoder
{
	int start_pass;
	int encode_mcu;
	int finish_pass;
};

struct jpeg_scan_info
{
	int comps_in_scan;
	char component_index[16];
	int Ss;
	int Se;
	int Ah;
	int Al;
};

union _3723
{
	char i[32];
	char s[80];
};

struct JQUANT_TBL
{
	char quantval[128];
	char sent_table;
};

struct JHUFF_TBL
{
	char bits[17];
	char huffval[256];
	char sent_table;
};

struct jpeg_decompress_struct
{
	int err;
	int mem;
	int progress;
	int client_data;
	char is_decompressor;
	char pad0[3];
	int global_state;
	int64_t alloc;
	int src;
	int image_width;
	int image_height;
	int num_components;
	int jpeg_color_space;
	int out_color_space;
	int scale_num;
	int scale_denom;
	int64_t output_gamma;
	char buffered_image;
	char raw_data_out;
	char pad1[2];
	int dct_method;
	char do_fancy_upsampling;
	char do_block_smoothing;
	char quantize_colors;
	char pad2[1];
	J_DITHER_MODE dither_mode;
	char two_pass_quantize;
	char pad3[3];
	int desired_number_of_colors;
	char enable_1pass_quant;
	char enable_external_quant;
	char enable_2pass_quant;
	char pad4[1];
	int output_width;
	int output_height;
	int out_color_components;
	int output_components;
	int rec_outbuf_height;
	int actual_number_of_colors;
	int colormap;
	int output_scanline;
	int input_scan_number;
	int input_iMCU_row;
	int output_scan_number;
	int output_iMCU_row;
	int coef_bits;
	char quant_tbl_ptrs[16];
	char dc_huff_tbl_ptrs[16];
	char ac_huff_tbl_ptrs[16];
	int data_precision;
	int comp_info;
	char progressive_mode;
	char arith_code;
	char arith_dc_L[16];
	char arith_dc_U[16];
	char arith_ac_K[16];
	char pad5[2];
	int restart_interval;
	char saw_JFIF_marker;
	char JFIF_major_version;
	char JFIF_minor_version;
	char density_unit;
	short X_density;
	short Y_density;
	char saw_Adobe_marker;
	char Adobe_transform;
	char CCIR601_sampling;
	char pad6[1];
	int marker_list;
	int max_h_samp_factor;
	int max_v_samp_factor;
	int min_DCT_scaled_size;
	int total_iMCU_rows;
	int sample_range_limit;
	int comps_in_scan;
	char cur_comp_info[16];
	int MCUs_per_row;
	int MCU_rows_in_scan;
	int blocks_in_MCU;
	char MCU_membership[40];
	int Ss;
	int Se;
	int Ah;
	int Al;
	int unread_marker;
	int master;
	int main;
	int coef;
	int post;
	int inputctl;
	int marker;
	int entropy;
	int idct;
	int upsample;
	int cconvert;
	int cquantize;
};

typedef enum
{
	JDITHER_NONE = 0,
	JDITHER_ORDERED = 1,
	JDITHER_FS = 2
} J_DITHER_MODE;

struct jpeg_source_mgr
{
	int next_input_byte;
	int bytes_in_buffer;
	int init_source;
	int fill_input_buffer;
	int skip_input_data;
	int resync_to_restart;
	int term_source;
};

struct jpeg_marker_struct
{
	int next;
	char marker;
	char pad0[3];
	int original_length;
	int data_length;
	int data;
};

struct jpeg_decomp_master
{
	int prepare_for_output_pass;
	int finish_output_pass;
	char is_dummy_pass;
};

struct jpeg_d_main_controller
{
	int start_pass;
	int process_data;
};

struct jpeg_d_coef_controller
{
	int start_input_pass;
	int consume_data;
	int start_output_pass;
	int decompress_data;
	int coef_arrays;
};

struct jpeg_d_post_controller
{
	int start_pass;
	int post_process_data;
};

struct jpeg_input_controller
{
	int consume_input;
	int reset_input_controller;
	int start_input_pass;
	int finish_input_pass;
	char has_multiple_scans;
	char eoi_reached;
};

struct jpeg_marker_reader
{
	int reset_marker_reader;
	int read_markers;
	int read_restart_marker;
	char saw_SOI;
	char saw_SOF;
	char pad0[2];
	int next_restart_num;
	int discarded_bytes;
};

struct jpeg_entropy_decoder
{
	int start_pass;
	int decode_mcu;
	char insufficient_data;
};

struct jpeg_inverse_dct
{
	int start_pass;
	char inverse_DCT[40];
};

struct jpeg_upsampler
{
	int start_pass;
	int upsample;
	char need_context_rows;
};

struct jpeg_color_deconverter
{
	int start_pass;
	int color_convert;
};

struct jpeg_color_quantizer
{
	int start_pass;
	int color_quantize;
	int finish_pass;
	int new_color_map;
};

struct _3831
{
	int mssSample;
	int mssBuffer;
	int frequency;
	int volume;
	int pan;
	int channels;
	char playing;
	char pad0[3];
	int channel;
	char playMode;
};

struct dsound_sample_t
{
	int mssSample;
	int mssBuffer;
	int frequency;
	int volume;
	int pan;
	int channels;
	char playing;
	char pad0[3];
	int channel;
	char playMode;
};

struct audioSample_t
{
	int buffer;
	int lengthInBytes;
	int lengthInSamples;
	int bytesPerSample;
	int frequency;
	char stereo;
	char pad0[3];
	int channels;
	int sampleOffset;
};

struct SpeexMode
{
	int mode;
	int query;
	int modeName;
	int modeID;
	int bitstream_version;
	int enc_init;
	int enc_destroy;
	int enc;
	int dec_init;
	int dec_destroy;
	int dec;
	int enc_ctl;
	int dec_ctl;
};

struct SpeexBits
{
	int chars;
	int nbBits;
	int charPtr;
	int bitPtr;
	int owner;
	int overflow;
	int buf_size;
	int reserved1;
	int reserved2;
};

struct ltp_params
{
	int gain_cdbk;
	int gain_bits;
	int pitch_bits;
};

struct split_cb_params
{
	int subvect_size;
	int nb_subvect;
	int shape_cb;
	int shape_bits;
	int have_sign;
};

struct SpeexSubmode
{
	int lbr_pitch;
	int forced_pitch_gain;
	int have_subframe_gain;
	int double_codebook;
	int lsp_quant;
	int lsp_unquant;
	int ltp_quant;
	int ltp_unquant;
	int ltp_params;
	int innovation_quant;
	int innovation_unquant;
	int innovation_params;
	int lpc_enh_k1;
	int lpc_enh_k2;
	int lpc_enh_k3;
	int comb_gain;
	int bits_per_frame;
};

struct SpeexNBMode
{
	int frameSize;
	int subframeSize;
	int lpcSize;
	int pitchStart;
	int pitchEnd;
	int gamma1;
	int gamma2;
	int lag_factor;
	int lpc_floor;
	char submodes[64];
	int defaultSubmode;
	char quality_map[44];
};

struct SpeexSBMode
{
	int nb_mode;
	int frameSize;
	int subframeSize;
	int lpcSize;
	int bufSize;
	int gamma1;
	int gamma2;
	int lag_factor;
	int lpc_floor;
	int folding_gain;
	char submodes[32];
	int defaultSubmode;
	char low_quality_map[44];
	char quality_map[44];
	int vbr_thresh;
	int nb_modes;
};

struct CombFilterMem
{
	int last_pitch;
	char last_pitch_gain[12];
	int smooth_gain;
};

struct VBRState
{
	int energy_alpha;
	int average_energy;
	int last_energy;
	char last_log_energy[20];
	int accum_sum;
	int last_pitch_coef;
	int soft_pitch;
	int last_quality;
	int noise_level;
	int noise_accum;
	int noise_accum_count;
	int consec_noise;
};

struct SpeexCallback
{
	int callback_id;
	int func;
	int data;
	int reserved1;
	int reserved2;
};

struct CCircularBuffer
{
};

struct _3658
{
	int buffer;
	int lengthInBytes;
	int lengthInSamples;
	int bytesPerSample;
	int frequency;
	char stereo;
	char pad0[3];
	int channels;
	int sampleOffset;
};

struct CAudioRecorder
{
};

