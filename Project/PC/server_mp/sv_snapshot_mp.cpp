void __cdecl SV_UpdateServerCommandsToClient_PreventOverflow(struct client_s *,struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl SV_PrintServerCommandsForClient(struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_UpdateServerCommandsToClient(struct client_s *,struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl SV_ArchiveSnapshot(void)
{	UNIMPLEMENTED();
}

int __cdecl SV_GetArchivedClientInfo(int,int *,struct playerState_s *,struct clientState_s *)
{	UNIMPLEMENTED();
}

bool __cdecl SV_GetClientPositionAtTime(int,int,float * const)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendMessageToClient(struct msg_t *,struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendClientSnapshot(struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendClientMessages(void)
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

