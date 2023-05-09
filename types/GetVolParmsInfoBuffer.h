#include <stdint.h>

struct GetVolParmsInfoBuffer
{
	int16_t vMVersion;
	int32_t vMAttrib;
	int32_t vMLocalHand;
	int32_t vMServerAdr;
	int32_t vMVolumeGrade;
	int16_t vMForeignPrivID;
	int32_t vMExtendedAttributes;
	int32_t vMDeviceID;
	int32_t vMMaxNameLength;
};

