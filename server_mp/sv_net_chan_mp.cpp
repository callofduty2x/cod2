#include "../qcommon/qcommon.h"
#include "../qcommon/netchan.h"

void __cdecl SV_Netchan_UpdateProfileStats(void)
{	UNIMPLEMENTED();
}

void SV_Netchan_AddOOBProfilePacket(int iLength)
{
	if ( net_profile->current.integer )
	{
		NetProf_PrepProfiling(&svs.netProfilingBuf);
		NetProf_AddPacket(&svs.netProfilingBuf->send, iLength, 0);
	}
}

qboolean SV_Netchan_TransmitNextFragment(netchan_t *chan)
{
	return Netchan_TransmitNextFragment(chan);
}

bool SV_Netchan_Transmit(client_t *client, byte *data, int length)
{
	SV_Netchan_Encode(client, data + 4, length - 4);
	return Netchan_Transmit(&client->netchan, length, data);
}

void __cdecl SV_Netchan_PrintProfileStats(int bPrintToConsole)
{	UNIMPLEMENTED();
}

void SV_Netchan_SendOOBPacket(int iLength, const void *pData, netadr_t to)
{
	if ( *(int *)pData != -1 )
		Com_Printf("SV_Netchan_SendOOBPacket used to send non-OOB packet.\n");

	NetProf_PrepProfiling(&svs.netProfilingBuf);
	NET_SendPacket(NS_SERVER, iLength, pData, to);
	SV_Netchan_AddOOBProfilePacket(iLength);
}

void __cdecl SV_ProfDraw(int,char const *)
{	UNIMPLEMENTED();
}

void SV_Netchan_Decode( client_t *client, byte *data, int remaining )
{
	int i, index;
	byte key, *string;

	string = (byte *)client->reliableCommands[ client->reliableAcknowledge & ( MAX_RELIABLE_COMMANDS - 1 ) ].command;
	key = client->challenge ^ (byte)client->serverId ^ client->messageAcknowledge;

	for ( i = 0, index = 0; i < remaining; i++ )
	{

		if ( !string[index] )
		{
			index = 0;
		}

		// modify the key with the last sent and acknowledged server command
		key ^= string[index] << ( i & 1 );
		data[i] ^= key;

		index++;
	}
}

