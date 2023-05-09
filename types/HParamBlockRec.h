#include <stdint.h>

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

