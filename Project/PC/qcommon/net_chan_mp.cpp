void __cdecl XUIDToString(unsigned __int64 const *,char *)
{	UNIMPLEMENTED();
}

void __cdecl StringToXUID(char const *,unsigned __int64 *)
{	UNIMPLEMENTED();
}

void __cdecl StringToXNAddr(char const *,struct XNADDR *)
{	UNIMPLEMENTED();
}

void __cdecl XNAddrToString(struct XNADDR const *,char *)
{	UNIMPLEMENTED();
}

void __cdecl StringToInt128(char const *,unsigned char *)
{	UNIMPLEMENTED();
}

__int64 __cdecl StringToInt64(char const *)
{	UNIMPLEMENTED();
}

void __cdecl Int128ToString(unsigned char *,char *)
{	UNIMPLEMENTED();
}

void __cdecl Int64ToString(__int64,char *)
{	UNIMPLEMENTED();
}

void __cdecl NET_SendLoopPacket(enum netsrc_t,int,void const *,struct netadr_t)
{	UNIMPLEMENTED();
}

int __cdecl NET_GetLoopPacket_Real(enum netsrc_t,struct netadr_t *,struct msg_t *)
{	UNIMPLEMENTED();
}

int __cdecl NET_IsLocalAddress(struct netadr_t)
{	UNIMPLEMENTED();
}

int __cdecl NET_CompareXNAddr(struct XNADDR *,struct XNADDR *)
{	UNIMPLEMENTED();
}

void __cdecl NetProf_PrepProfiling(struct netProfileInfo_t * *)
{	UNIMPLEMENTED();
}

char const * __cdecl NET_AdrToString(struct netadr_t)
{	UNIMPLEMENTED();
}

int __cdecl NET_GetLoopPacket(enum netsrc_t,struct netadr_t *,struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl Netchan_Setup(enum netsrc_t,struct netchan_t *,struct netadr_t,int)
{	UNIMPLEMENTED();
}

void __cdecl NetProf_UpdateStatistics(struct netProfileStream_t *)
{	UNIMPLEMENTED();
}

void __cdecl NetProf_AddPacket(struct netProfileStream_t *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl NET_StringToAdr(char const *,struct netadr_t *)
{	UNIMPLEMENTED();
}

void __cdecl NetProf_NewSendPacket(struct netchan_t *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl NET_GetPacket(struct netadr_t *,struct msg_t *)
{	UNIMPLEMENTED();
}

bool __cdecl NET_SendPacket(enum netsrc_t,int,void const *,struct netadr_t)
{	UNIMPLEMENTED();
}

bool __cdecl Netchan_TransmitNextFragment(struct netchan_t *)
{	UNIMPLEMENTED();
}

bool __cdecl NET_OutOfBandData(enum netsrc_t,struct netadr_t,unsigned char *,int)
{	UNIMPLEMENTED();
}

bool __cdecl NET_OutOfBandPrint(enum netsrc_t,struct netadr_t,char const *)
{	UNIMPLEMENTED();
}

bool __cdecl Netchan_Transmit(struct netchan_t *,int,unsigned char const *)
{	UNIMPLEMENTED();
}

bool __cdecl NET_SendVoiceDataPackets(enum netsrc_t,int,void const *,int,void const *,struct netadr_t)
{	UNIMPLEMENTED();
}

int __cdecl NET_CompareAdrSigned(struct netadr_t *,struct netadr_t *)
{	UNIMPLEMENTED();
}

int __cdecl NET_CompareBaseAdrSigned(struct netadr_t *,struct netadr_t *)
{	UNIMPLEMENTED();
}

void __cdecl Net_DisplayProfile(void)
{	UNIMPLEMENTED();
}

void __cdecl Net_DumpProfile_f(void)
{	UNIMPLEMENTED();
}

void __cdecl NetProf_NewRecievePacket(struct netchan_t *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl NET_OutOfBandVoiceData(enum netsrc_t,struct netadr_t,unsigned char *,int)
{	UNIMPLEMENTED();
}

int __cdecl NET_CompareAdr(struct netadr_t,struct netadr_t)
{	UNIMPLEMENTED();
}

int __cdecl NET_CompareBaseAdr(struct netadr_t,struct netadr_t)
{	UNIMPLEMENTED();
}

int __cdecl Netchan_Process(struct netchan_t *,struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl Netchan_Init(int)
{	UNIMPLEMENTED();
}

struct dvar_s const * const showpackets;
struct dvar_s const * const net_profile;
struct dvar_s const * const net_lanauthorize;
struct dvar_s const * const packetDebug;
struct dvar_s const * const showdrop;
struct dvar_s const * const net_showprofile;
int g_qport;
int __cdecl LittleLong(int)
{	UNIMPLEMENTED();
}

int __cdecl LittleLong(int)
{	UNIMPLEMENTED();
}

int __cdecl LittleLong(int)
{	UNIMPLEMENTED();
}

