#include <stdint.h>

struct MssLocal
{
	int32_t driver_2D;
	int32_t provider_3D;
	char handle_2D[32];
	char handle_3D[128];
	char handle_stream[52];
};

