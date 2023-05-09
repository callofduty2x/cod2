void __cdecl MSG_SetDefaultUserCmd(struct playerState_s *,struct usercmd_s *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteReliableCommandToBuffer(char const *,char *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadData(struct msg_t *,void *,int)
{	UNIMPLEMENTED();
}

unsigned __int64 __cdecl MSG_ReadInt64(struct msg_t *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadByte(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteInt64(struct msg_t *,unsigned __int64)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteData(struct msg_t *,void const *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteByte(struct msg_t *,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadBit(struct msg_t *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadBits(struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBit1(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBit0(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBits(struct msg_t *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_GetUsedBitCount(struct msg_t const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_BeginReading(struct msg_t *)
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

char * __cdecl MSG_ReadStringLine(struct msg_t *)
{	UNIMPLEMENTED();
}

char * __cdecl MSG_ReadBigString(struct msg_t *)
{	UNIMPLEMENTED();
}

char * __cdecl MSG_ReadString(struct msg_t *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadLong(struct msg_t *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadShort(struct msg_t *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteAngle(struct msg_t *,float)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteString(struct msg_t *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteLong(struct msg_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteShort(struct msg_t *,int)
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

int __cdecl MSG_ReadBitsCompress(unsigned char *,unsigned char *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_initHuffman(void)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaUsercmdKey(struct msg_t *,int,struct usercmd_s *,struct usercmd_s *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaUsercmdKey(struct msg_t *,int,struct usercmd_s *,struct usercmd_s *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_WriteBitsCompress(unsigned char *,unsigned char *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_Init(struct msg_t *,unsigned char *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaPlayerstate(struct msg_t *,struct playerState_s *,struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaField(struct msg_t *,unsigned char *,unsigned char *,struct NetField const *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteBigString(struct msg_t *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaClient(struct msg_t *,struct clientState_s *,struct clientState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaArchivedEntity(struct msg_t *,struct archivedEntity_s *,struct archivedEntity_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_WriteDeltaEntity(struct msg_t *,struct entityState_s *,struct entityState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl MSG_ReadDeltaPlayerstate(struct msg_t *,struct playerState_s *,struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaClient(struct msg_t *,struct clientState_s *,struct clientState_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaArchivedEntity(struct msg_t *,struct archivedEntity_s *,struct archivedEntity_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl MSG_ReadDeltaEntity(struct msg_t *,struct entityState_s *,struct entityState_s *,int)
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

