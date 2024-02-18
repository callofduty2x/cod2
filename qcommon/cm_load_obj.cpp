#include "qcommon.h"
#include "cm_local.h"

void CM_Cleanup(void)
{
	cm.header = 0;
}
CM_GetPlaneNum(int planeNum)
{	UNIMPLEMENTED();
}

void CMod_LoadPlanes()
{
	cplane_s *out;
	unsigned int planeIter;
	char bits;
	dplane_t *in;
	unsigned int axisIter;
	unsigned int count;

	in = (dplane_t *)Com_GetBspLump(LUMP_PLANES, sizeof(dplane_t), &count);

	if ( !count )
	{
		Com_Error(ERR_DROP, "Map with no planes");
	}

	cm.planes = (cplane_s *)CM_Hunk_Alloc(sizeof(cplane_s) * count);
	cm.planeCount = count;

	for (planeIter = 0, out = cm.planes; planeIter < count; ++in, ++out, ++planeIter )
	{
		bits = 0;

		for ( axisIter = 0; axisIter < 3; ++axisIter )
		{
			out->normal[axisIter] = in->normal[axisIter];

			if ( out->normal[axisIter] < 0.0 )
			{
				bits |= 1 << axisIter;
			}
		}

		out->dist = in->dist;
		out->type = PlaneTypeForNormal(out->normal);
		out->signbits = bits;
	}
}
void CM_LoadMapFromBsp(const char *name, bool usePvs)
{
	BspHeader *header;

	Com_Memset(&cm, 0, sizeof(clipMap_t));
	cm.name = (char *)CM_Hunk_Alloc(strlen(name) + 1);
	strcpy(cm.name, name);
	header = Com_GetBspHeader(0, &cm.checksum);
	cm.header = header;
	CMod_LoadMaterials();
	CMod_LoadPlanes();
	CMod_LoadBrushRelated(usePvs);
	CMod_LoadNodes();
	CMod_LoadLeafSurfaces();
	CMod_LoadCollisionVerts();
	CMod_LoadCollisionEdges();
	CMod_LoadCollisionTriangles();
	CMod_LoadCollisionBorders();
	CMod_LoadCollisionPartitions();

	if ( usePvs )
	{
		CMod_LoadVisibility();
	}
	else if ( Com_BspHasLump(LUMP_VISIBILITY) )
	{
		Com_Error(ERR_DROP, "In single player, do not compile the bsp with visibility");
	}

	CMod_LoadEntityString();

	cm.header = NULL;
