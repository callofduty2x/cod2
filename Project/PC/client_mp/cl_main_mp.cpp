int __cdecl CL_IsClientActive(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_RequestAuthorization(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ResetSkeletonCache(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetSkelTimeStamp(int)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetXuidForLocalClient(int)
{	UNIMPLEMENTED();
}

enum connstate_t __cdecl CL_GetLocalClientConnectionState(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientConnectionState(int,enum connstate_t)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AllLocalClientsStateConsistent(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AnyLocalClientChallenging(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_AnyLocalClientStateActive(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_ControllerIndexFromClientNum(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_LocalClientNumFromControllerIndex(int)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetFrameActiveClientCount(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetActiveLocalClientIndex(int)
{	UNIMPLEMENTED();
}

bool __cdecl CL_GetLocalClientActive(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetView(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ForwardCommandToServer(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CL_ClearState(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_StopRecord_f(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_GetLocalClientControllerIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_SetLocalClientViewData(void)
{	UNIMPLEMENTED();
}

int __cdecl CL_UpdateDirtyPings_f(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_Disconnect(void)
{	UNIMPLEMENTED();
}

char const * __cdecl CL_GetUsernameForLocalClient(int)
{	UNIMPLEMENTED();
}

void __cdecl CL_NextDemo(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_CheckForResend(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Reconnect_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_Setenv_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ForwardToServer_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShowIP_f(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_DisconnectPacket(struct netadr_t)
{	UNIMPLEMENTED();
}

void __cdecl CL_ShutdownAll(void)
{	UNIMPLEMENTED();
}

bool __cdecl CL_PacketEvent(struct netadr_t,struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl CL_ReadDemoMessage(void)
{	UNIMPLEMENTED();
}

void __cdecl CL_PlayDemo_f(void)
{	UNIMPLEMENTED();
}

bool g_waitingForServer;
struct dvar_s const * const cl_conXOffset;
