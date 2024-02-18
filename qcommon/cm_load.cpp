#include "qcommon.h"
#include "cm_local.h"
#include "sys_thread.h"

clipMap_t cm;

int __cdecl Path_BuildChains(unsigned short * *,unsigned short * *)
{	UNIMPLEMENTED();
}

void __cdecl Path_LoadPaths(int *,unsigned char * *,int *,struct pathnode_tree_t * *)
{	UNIMPLEMENTED();
}

int __cdecl Path_GetLoadPathNodeCount(void)
{	UNIMPLEMENTED();
}

struct pathnode_t * __cdecl Path_CreateNodes(void)
{	UNIMPLEMENTED();
}

int CM_LeafCluster( int leafnum )
{
	if ( leafnum < 0 || leafnum >= cm.numLeafs )
	{
		Com_Error( ERR_DROP, "CM_LeafCluster: bad number %i", leafnum );
	}

	return cm.leafs[leafnum].cluster;
}

char const * __cdecl CM_EntityString()
{	UNIMPLEMENTED();
}

int __cdecl CM_NumInlineModels()
{	UNIMPLEMENTED();
}

void CM_Shutdown()
{
	Com_Memset(&cm, 0, sizeof(clipMap_t));
}

void CM_ModelBounds( clipHandle_t model, vec3_t mins, vec3_t maxs )
{
	cmodel_t    *cmod;

	cmod = CM_ClipHandleToModel( model );
	VectorCopy( cmod->mins, mins );
	VectorCopy( cmod->maxs, maxs );
}


void __cdecl CM_Unload(void)
{	UNIMPLEMENTED();
}

void CM_LoadMap(const char *name, int *checksum)
{
	if ( !name || !*name )
	{
		Com_Error(ERR_DROP, "CM_LoadMap: NULL name");
	}

	CM_LoadMapData(name);
	CM_InitAllThreadData();
	*checksum = cm.checksum;
}

int marker_cm_load;
struct clipMap_t cm;
void __cdecl CM_LoadMapInternal(char const *)
{	UNIMPLEMENTED();
}

void CM_InitThreadData(int threadContext)
{
	TraceThreadInfo *tti;

	tti = &g_traceThreadInfo[threadContext];
	tti->checkcount = 0;
	tti->partitions = (uint16_t *)Hunk_Alloc(sizeof(uint16_t) * cm.partitionCount);
	tti->edges = (int32_t *)Hunk_Alloc(sizeof(int32_t) * cm.edgeCount);
	tti->verts = (int32_t *)Hunk_Alloc(sizeof(int32_t) * cm.vertCount);
	tti->box_brush = (cbrush_t *)Hunk_Alloc(sizeof(cbrush_t));
	Com_Memcpy(tti->box_brush, cm.box_brush, sizeof(cbrush_t));
	tti->box_model = (cmodel_t *)Hunk_Alloc(sizeof(cmodel_t));
	Com_Memcpy(tti->box_model, &cm.box_model, sizeof(cmodel_t));
}

void CM_InitAllThreadData()
{
	CM_InitThreadData(THREAD_CONTEXT_MAIN);
}

void* CM_Hunk_Alloc(int size)
{
	return Hunk_Alloc(size);
}

CM_Hunk_CheckTempMemoryClear()
{	UNIMPLEMENTED();
}

CM_Hunk_CheckTempMemoryHighClear()
{	UNIMPLEMENTED();
}

void* CM_Hunk_AllocateTempMemoryHigh(int size)
{
	return Hunk_AllocateTempMemoryHighInternal(size);
}

CM_Hunk_ClearTempMemory()
{	UNIMPLEMENTED();
}

void CM_Hunk_ClearTempMemoryHigh()
{
	Hunk_ClearTempMemoryHighInternal();
}

CM_SaveLump(int lumpnum,  unsigned char* newLump,  int size,  int* checksum)
{	UNIMPLEMENTED();
}

