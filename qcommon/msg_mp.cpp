void __cdecl MSG_SetDefaultUserCmd(struct playerState_s * ps, struct usercmd_s * cmd)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteReliableCommandToBuffer(char const * pszCommand, char * pszBuffer, int iBufferSize)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadData(struct msg_t * msg, void * data, int len)
{	UNIMPLEMENTED();
}

unsigned __int64 __cdecl MSG_ReadInt64(struct msg_t *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadByte(struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteInt64(struct msg_t *,unsigned __int64)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteData(struct msg_t * buf, void const * data, int length)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteByte(struct msg_t * msg, int c)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadBit(struct msg_t * msg)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadBits(struct msg_t * msg, int bits)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBit1(struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBit0(struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBits(struct msg_t * msg, int value, int bits)
{	UNIMPLEMENTED();
}

int __cdecl MSG_GetUsedBitCount(struct msg_t const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_BeginReading(struct msg_t * msg)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaKeyByte(struct msg_t *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaKeyByte(struct msg_t *,int,int,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadKey(struct msg_t *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteKey(struct msg_t *,int,int,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaKey(struct msg_t *,int,int,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaKey(struct msg_t *,int,int,int,int)
{	UNIMPLEMENTED();
}

char * __cdecl MSG_ReadStringLine(struct msg_t * msg)
{	UNIMPLEMENTED();
}

char * __cdecl MSG_ReadBigString(struct msg_t * msg)
{	UNIMPLEMENTED();
}

char * __cdecl MSG_ReadString(struct msg_t * msg)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadLong(struct msg_t * msg)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadShort(struct msg_t * msg)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteAngle(struct msg_t *,float)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteString(struct msg_t * sb, char const * s)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteLong(struct msg_t * msg, int c)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteShort(struct msg_t * msg, int c)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaKeyShort(struct msg_t *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaKeyShort(struct msg_t *,int,int,int)
{	UNIMPLEMENTED();
}

float __cdecl MSG_ReadAngle16(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteAngle16(struct msg_t *,float)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadBitsCompress(unsigned char * from, unsigned char * to, int size)
{	UNIMPLEMENTED();
}

void __cdecl MSG_initHuffman(void)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaUsercmdKey(struct msg_t * msg, int key, struct usercmd_s * from, struct usercmd_s * to)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaUsercmdKey(struct msg_t * msg, int key, struct usercmd_s * from, struct usercmd_s * to)
{	UNIMPLEMENTED();
}

int __cdecl MSG_WriteBitsCompress(unsigned char * from, unsigned char * to, int size)
{	UNIMPLEMENTED();
}

void __cdecl MSG_Init(struct msg_t * buf, unsigned char * data, int length)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaPlayerstate(struct msg_t * msg, struct playerState_s * from, struct playerState_s * to)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaField(struct msg_t * msg, unsigned char * from, unsigned char * to, struct NetField const * field, int print)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBigString(struct msg_t * sb, char const * s)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaClient(struct msg_t * msg, struct clientState_s * from, struct clientState_s * to, int force)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaArchivedEntity(struct msg_t * msg, struct archivedEntity_s * from, struct archivedEntity_s * to, int force)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaEntity(struct msg_t * msg, struct entityState_s * from, struct entityState_s * to, int force)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaPlayerstate(struct msg_t * msg, struct playerState_s * from, struct playerState_s * to)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaClient(struct msg_t * msg, struct clientState_s * from, struct clientState_s * to, int number)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaArchivedEntity(struct msg_t * msg, struct archivedEntity_s * from, struct archivedEntity_s * to, int number)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaEntity(struct msg_t *, struct entityState_s *, struct entityState_s *, int)
{	UNIMPLEMENTED();
}

struct NetField * objectiveFields;
struct NetField * hudElemFields;
int * msg_hData;
short __cdecl LittleShort(short)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaField(struct msg_t *,unsigned char *,unsigned char *,struct NetField const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaHudElems(struct msg_t *,struct hudelem_s * const,struct hudelem_s * const,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaFields(struct msg_t *,unsigned char *,unsigned char *,int,int,struct NetField const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaStruct(struct msg_t *,unsigned char *,unsigned char *,int,int,int,struct NetField const *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaHudElems(struct msg_t *,struct hudelem_s * const,struct hudelem_s * const,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaStruct(struct msg_t *,unsigned char *,unsigned char *,unsigned int,int,int,struct NetField const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaFields(struct msg_t *,unsigned char *,unsigned char *,int,struct NetField const *)
{	UNIMPLEMENTED();
}

