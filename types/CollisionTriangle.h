#include <stdint.h>

struct CollisionTriangle
{
	char plane[16];
	char svec[16];
	char tvec[16];
	char verts[12];
	char edges[12];
};

