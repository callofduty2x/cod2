#include <stdint.h>

struct DpvsPlane
{
	char coeffs[16];
	char side[3];
	DpvsPlaneInfo u;
};

