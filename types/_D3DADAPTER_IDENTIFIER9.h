#include <stdint.h>

struct _D3DADAPTER_IDENTIFIER9
{
	char Driver[512];
	char Description[512];
	char DeviceName[32];
	LARGE_INTEGER DriverVersion;
	int32_t VendorId;
	int32_t DeviceId;
	int32_t SubSysId;
	int32_t Revision;
	char DeviceIdentifier[16];
	int32_t WHQLLevel;
};

