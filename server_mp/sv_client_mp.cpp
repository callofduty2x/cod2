void __cdecl SV_DelayDropClient(struct client_s * drop, char const * reason)
{	UNIMPLEMENTED();
}

void __cdecl SV_BanGuidBriefly(int guid)
{	UNIMPLEMENTED();
}

float __cdecl SV_FX_GetVisibility(float const * const start, float const * const end)
{	UNIMPLEMENTED();
}

void __cdecl SV_FreeClientScriptPers()
{	UNIMPLEMENTED();
}

void __cdecl SV_UnbanClient(char const * name)
{	UNIMPLEMENTED();
}

void __cdecl SV_UserinfoChanged(struct client_s * cl)
{	UNIMPLEMENTED();
}

void __cdecl SV_GetChallenge(struct netadr_t from)
{	UNIMPLEMENTED();
}

void __cdecl SV_ClientEnterWorld(struct client_s * client, struct usercmd_s * cmd)
{	UNIMPLEMENTED();
}

void __cdecl SV_FreeClient(struct client_s * cl)
{	UNIMPLEMENTED();
}

void __cdecl SV_DropClient(struct client_s * drop, char const * reason)
{	UNIMPLEMENTED();
}

void __cdecl SV_DirectConnect(struct netadr_t from)
{	UNIMPLEMENTED();
}

void __cdecl SV_FreeClients()
{	UNIMPLEMENTED();
}

void __cdecl SV_BanClient(struct client_s * cl)
{	UNIMPLEMENTED();
}

void __cdecl SV_ExecuteClientCommand(struct client_s * cl, char const * s, int clientOK)
{	UNIMPLEMENTED();
}

void __cdecl SV_SendClientGameState(struct client_s * client)
{	UNIMPLEMENTED();
}

struct gentity_s * __cdecl SV_AddTestClient()
{	UNIMPLEMENTED();
}

void __cdecl SV_ClientThink(struct client_s * cl, struct usercmd_s * cmd)
{	UNIMPLEMENTED();
}

void __cdecl SV_UserMove(struct client_s * cl, struct msg_t * msg, int delta)
{	UNIMPLEMENTED();
}

void __cdecl SV_ExecuteClientMessage(struct client_s * cl, struct msg_t * msg)
{	UNIMPLEMENTED();
}

int __cdecl SV_FindFreeTempBanSlot(void)
{	UNIMPLEMENTED();
}

int __cdecl SV_IsBannedGuid(int)
{	UNIMPLEMENTED();
}

void __cdecl SV_UnmutePlayer_f(struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_MutePlayer_f(struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_UpdateUserinfo_f(struct client_s *)
{	UNIMPLEMENTED();
}

void __cdecl SV_Disconnect_f(struct client_s *)
{	UNIMPLEMENTED();
}

int __cdecl SV_ClientCommand(struct client_s *,struct msg_t *)
{	UNIMPLEMENTED();
}

SV_AuthorizeRequest(netadr_t from,  int challenge)
{	UNIMPLEMENTED();
}

SV_AuthorizeIpPacket(netadr_t from)
{	UNIMPLEMENTED();
}

SV_DoneDownload_f(client_s* cl)
{	UNIMPLEMENTED();
}

SV_RetransmitDownload_f(client_s* cl)
{	UNIMPLEMENTED();
}

SV_WriteDownloadToClient(client_s* cl,  msg_t* msg)
{	UNIMPLEMENTED();
}

SV_StopDownload_f(client_s* cl)
{	UNIMPLEMENTED();
}

SV_NextDownload_f(client_s* cl)
{	UNIMPLEMENTED();
}

SV_BeginDownload_f(client_s* cl)
{	UNIMPLEMENTED();
}

