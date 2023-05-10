void __cdecl SV_UpdateServerCommandsToClient_PreventOverflow(struct client_s *,struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl SV_PrintServerCommandsForClient(struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_UpdateServerCommandsToClient(struct client_s * client, struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl SV_ArchiveSnapshot()
{	UNIMPLEMENTED();
}

int __cdecl SV_GetArchivedClientInfo(int clientNum, int * pArchiveTime, struct playerState_s * ps, struct clientState_s * cs)
{	UNIMPLEMENTED();
}

bool __cdecl SV_GetClientPositionAtTime(int client, int gametime, float * const pos)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendMessageToClient(struct msg_t * msg, struct client_s * client)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendClientSnapshot(struct client_s * client)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendClientMessages()
{	UNIMPLEMENTED();
}

void __cdecl SV_AddArchivedEntToSnapshot(int,struct snapshotEntityNumbers_t *)
{	UNIMPLEMENTED();
}

void __cdecl SV_AddEntToSnapshot(int,struct snapshotEntityNumbers_t *)
{	UNIMPLEMENTED();
}

int __cdecl SV_GetCurrentClientInfo(int,struct playerState_s *,struct clientState_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_AddCachedEntitiesVisibleFromPoint(int,int,float * const,int,struct snapshotEntityNumbers_t *,struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_AddEntitiesVisibleFromPoint(float * const,int,struct snapshotEntityNumbers_t *)
{	UNIMPLEMENTED();
}

int __cdecl SV_RateMsec(struct client_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl SV_EmitPacketClients(int,int,int,int,int,struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl SV_EmitPacketEntities(int,int,int,int,int,struct msg_t *)
{	UNIMPLEMENTED();
}

struct cachedSnapshot_t * __cdecl SV_GetCachedSnapshotInternal(int)
{	UNIMPLEMENTED();
}

void __cdecl SV_WriteSnapshotToClient(struct client_s *,struct msg_t *)
{	UNIMPLEMENTED();
}

struct cachedSnapshot_t * __cdecl SV_GetCachedSnapshot(int *)
{	UNIMPLEMENTED();
}

void __cdecl SV_BuildClientSnapshot(struct client_s *)
{	UNIMPLEMENTED();
}

