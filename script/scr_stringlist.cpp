#include "../qcommon/qcommon.h"
#include "clientscript_public.h"

#define HASH_TABLE_SIZE 16384

struct HashEntry
{
	uint16_t status_next;
	union
	{
		uint16_t prev;
		uint16_t str;
	};
};

typedef struct __attribute__((aligned(128))) scrStringGlob_s
{
	HashEntry hashTable[HASH_TABLE_SIZE];
	bool inited;
	HashEntry *nextFreeEntry;
} scrStringGlob_t;
// static_assert((sizeof(scrStringGlob_t) == 0x10080), "ERROR: scrStringGlob_t size is invalid!");

#define HASH_NEXT_MASK 0x3FFF

scrStringGlob_t scrStringGlob;

void SL_Shutdown()
{
	assert ( scrStringGlob.inited );
	scrStringGlob.inited = 0;
}

void __cdecl SL_TransferSystem(unsigned int,unsigned int)
{	UNIMPLEMENTED();
}

void SL_AddRefToString(unsigned int stringValue)
{
	RefString *RefString;

	RefString = GetRefString(stringValue);
	++RefString->refCount;
}

unsigned int SL_FindStringOfLen(const char *str, unsigned int len)
{
	unsigned int prev;
	unsigned int newIndex;
	unsigned int hash;
	RefString *refStr;
	HashEntry *newEntry;
	unsigned int index;
	HashEntry *entry;

	hash = GetHashCode(str, len);
	entry = &scrStringGlob.hashTable[hash];

	if ( (entry->status_next & HASH_STAT_MASK) != HASH_STAT_HEAD )
		return 0;

	refStr = GetRefString(entry->prev);

	if ( refStr->byteLen != len || memcmp(refStr->str, str, len) )
	{
		index = hash;
		newIndex = entry->status_next & HASH_NEXT_MASK;

		for ( newEntry = &scrStringGlob.hashTable[newIndex]; newEntry != entry; newEntry = &scrStringGlob.hashTable[newIndex] )
		{
			refStr = GetRefString(newEntry->prev);

			if ( refStr->byteLen == len && !memcmp(refStr->str, str, len) )
			{
				scrStringGlob.hashTable[index].status_next = scrStringGlob.hashTable[index].status_next & HASH_STAT_MASK | newEntry->status_next & HASH_NEXT_MASK;
				newEntry->status_next = newEntry->status_next & HASH_STAT_MASK | entry->status_next & HASH_NEXT_MASK;
				entry->status_next = entry->status_next & HASH_STAT_MASK | newIndex;
				prev = newEntry->prev;
				newEntry->prev = entry->prev;
				entry->prev = prev;

				return prev;
			}

			index = newIndex;
			newIndex = newEntry->status_next & HASH_NEXT_MASK;
		}

		return 0;
	}

	return entry->prev;
}

unsigned int SL_ConvertFromString(const char *str)
{
	return SL_ConvertFromRefString(GetRefString(str));
}

int SL_GetStringLen(unsigned int stringValue)
{
	RefString *refString;

	refString = GetRefString(stringValue);
	return SL_GetRefStringLen(refString);
}

const char* SL_ConvertToString(unsigned int index)
{
	const char* string;
	RefString* rf;

	if ( index )
	{
		rf = GetRefString(index);
		string = rf->str;
		return string;
	}

	return NULL;
}

unsigned int SL_FindLowercaseString(const char *upperstring)
{
	signed int len;
	signed int i;
	char lwrstr[8192];

	len = I_strlen(upperstring) + 1;

	if ( len > 8192 )
		return 0;

	for ( i = 0; i < len; ++i )
		lwrstr[i] = tolower(upperstring[i]);

	return SL_FindStringOfLen(lwrstr, len);
}

unsigned int SL_FindString(const char *string)
{
	return SL_FindStringOfLen(string, I_strlen(string) + 1);
}

void SL_RemoveRefToStringOfLen(unsigned int stringValue, unsigned int len)
{
	RefString *refStr;

	refStr = GetRefString(stringValue);

	if ( !--refStr->refCount )
		SL_FreeString(stringValue, refStr, len);
}

void SL_RemoveRefToString(unsigned int stringValue)
{
	int len;
	RefString *refString;

	refString = GetRefString(stringValue);
	len = SL_GetRefStringLen(refString) + 1;
	SL_RemoveRefToStringOfLen(stringValue, len);
}

void SL_ShutdownSystem(unsigned char user)
{
	RefString *refStr;
	HashEntry *entry;
	unsigned int i;

	for ( i = 1; i < HASH_TABLE_SIZE; ++i )
	{
		do
		{
			entry = &scrStringGlob.hashTable[i];

			if ( (entry->status_next & HASH_STAT_MASK) == HASH_STAT_FREE )
				break;

			refStr = GetRefString(entry->prev);

			if ( (user & refStr->user) == 0 )
				break;

			refStr->user &= ~user;
			scrStringGlob.nextFreeEntry = 0;
			SL_RemoveRefToString(entry->prev);
		}
		while ( scrStringGlob.nextFreeEntry );
	}
}

unsigned int SL_GetStringForVector(const float *v)
{
	char s[256];

	sprintf(s, "(%g, %g, %g)", v[0], v[1], v[2]);
	return SL_GetString_(s, 0);
}

unsigned int SL_GetStringForInt(int i)
{
	char s[128];

	sprintf(s, "%i", i);
	return SL_GetString_(s, 0);
}

unsigned int SL_GetStringForFloat(float f)
{
	char s[128];

	sprintf(s, "%g", f);
	return SL_GetString_(s, 0);
}

void Scr_SetString(uint16_t *to, unsigned int from)
{
	if ( from )
		SL_AddRefToString(from);

	if ( *to )
		SL_RemoveRefToString(*to);

	*to = from;
}

unsigned int SL_GetString(const char *str, unsigned char user)
{
	return SL_GetString_(str, user);
}

void __cdecl Scr_ShutdownGameStrings()
{	UNIMPLEMENTED();
}

unsigned int Scr_AllocString(const char *string)
{
	return SL_GetString(string, 1);
}

void __cdecl Scr_SetStringFromCharString(unsigned short *,char const *)
{	UNIMPLEMENTED();
}

unsigned int Scr_CreateCanonicalFilename(const char *name)
{
	char newFilename[MAX_STRING_CHARS];

	SL_CreateCanonicalFilename(newFilename, name, MAX_STRING_CHARS);
	return SL_GetString_(newFilename, 0);
}

unsigned int SL_GetLowercaseString_(const char *str, unsigned char user)
{
	return SL_GetLowercaseStringOfLen(str, user, I_strlen(str) + 1);
}


unsigned int __cdecl SL_GetLowercaseString(char const *,unsigned int)
{	UNIMPLEMENTED();
}

void SL_Init()
{
	unsigned int prev;
	unsigned int hash;

	if ( scrStringGlob.inited )
	{
		SL_Restart();
		return;
	}

	MT_Init();

	scrStringGlob.hashTable->status_next = HASH_STAT_FREE;
	prev = 0;

	for ( hash = 1; hash < HASH_TABLE_SIZE; ++hash )
	{
		scrStringGlob.hashTable[hash].status_next = HASH_STAT_FREE;
		scrStringGlob.hashTable[prev].status_next |= hash;
		scrStringGlob.hashTable[hash].prev = prev;
		prev = hash;
	}

	scrStringGlob.hashTable->prev = prev;
	scrStringGlob.inited = 1;
}

void SL_AddUserInternal(RefString *refStr, unsigned char user)
{
	if ( !(user & refStr->user) )
	{
		refStr->user |= user;
		++refStr->refCount;
	}
}

unsigned int GetHashCode(const char *str, unsigned int len)
{
	unsigned int i;

	if (len >= 0xFF)
		return (len >> 2) % 0x3FFF + 1;

	for (i = 0; len; --len)
		i = 31 * i + *str++;

	return i % 0x3FFF + 1;
}

int SL_ConvertFromRefString(RefString *refString)
{
	return MT_GetIndexByRef((byte*)refString);
}

int SL_GetRefStringLen(RefString *refString)
{
	int len;

	if(!refString->byteLen)
	{
		len = 256 - 1; //Bugfix for 256 % 256 = 0 or 512 % 256 = 0 or... Just promote it to 256
	}
	else
	{
		len = refString->byteLen - 1;
	}

	while(refString->str[len])
	{
		len += 256;
	}

	return len;
}

RefString *GetRefString(unsigned int stringValue)
{
	return (RefString *)MT_GetRefByIndex(stringValue);
}

RefString *GetRefString(const char* string)
{
	return (RefString *)(string - 4);
}


void __cdecl SL_Clear(void)
{	UNIMPLEMENTED();
}

void SL_FreeString(unsigned int stringValue, RefString *refStr, unsigned int len)
{
	unsigned int prev;
	unsigned int newNext;
	unsigned int newIndex;
	unsigned int index;
	HashEntry *newEntry;
	HashEntry *entry;

	index = GetHashCode(refStr->str, len);
	entry = &scrStringGlob.hashTable[index];
	MT_FreeIndex(stringValue, len + 4);
	newIndex = entry->status_next & HASH_NEXT_MASK;
	newEntry = &scrStringGlob.hashTable[newIndex];

	if ( entry->prev == stringValue )
	{
		if ( newEntry == entry )
		{
			newEntry = &scrStringGlob.hashTable[index];
			newIndex = index;
		}
		else
		{
			entry->status_next = newEntry->status_next & HASH_NEXT_MASK | HASH_STAT_HEAD;
			entry->prev = newEntry->prev;
			scrStringGlob.nextFreeEntry = &scrStringGlob.hashTable[index];
		}
	}
	else
	{
		prev = index;

		while ( newEntry->prev != stringValue )
		{
			assert(newEntry != entry);

			prev = newIndex;
			newIndex = newEntry->status_next & HASH_NEXT_MASK;
			newEntry = &scrStringGlob.hashTable[newIndex];
		}

		scrStringGlob.hashTable[prev].status_next = scrStringGlob.hashTable[prev].status_next & HASH_STAT_MASK | newEntry->status_next & HASH_NEXT_MASK;
	}

	newNext = scrStringGlob.hashTable->status_next;
	newEntry->status_next = scrStringGlob.hashTable->status_next;
	newEntry->prev = 0;
	scrStringGlob.hashTable[newNext].prev = newIndex;
	scrStringGlob.hashTable->status_next = newIndex;
}
void __cdecl SL_RemoveAllRefToString(unsigned int)
{	UNIMPLEMENTED();
}

void __cdecl CreateCanonicalFilename(char *,char const *,int)
{	UNIMPLEMENTED();
}

unsigned int SL_GetLowercaseStringOfLen(const char *upperstring, unsigned char user, unsigned int len)
{
	unsigned int i;
	char buffer[8192];

	if ( len > 8192 )
		Com_Error(ERR_DROP, "max string length exceeded: \"%s\"", upperstring);

	for ( i = 0; i < len; ++i )
		buffer[i] = tolower(upperstring[i]);

	return SL_GetStringOfLen(buffer, user, len);
}

void SL_Restart()
{
	size_t len;
	const char *str;
	unsigned char *bits;
	HashEntry *entry;
	unsigned int i;
	unsigned int j;

	for ( i = 1; i < HASH_TABLE_SIZE; ++i )
	{
		do
		{
			if ( (scrStringGlob.hashTable[i].status_next & HASH_STAT_MASK) == 0 )
				break;

			scrStringGlob.nextFreeEntry = 0;
			SL_FreeEntry(scrStringGlob.hashTable[i].prev);
		}
		while ( scrStringGlob.nextFreeEntry );
	}

	bits = MT_InitForceAlloc();

	for ( j = 1; j < HASH_TABLE_SIZE; ++j )
	{
		entry = &scrStringGlob.hashTable[j];

		if ( (entry->status_next & HASH_STAT_MASK) != 0 && (GetRefString(entry->prev)->user & 4) != 0 )
		{
			str = SL_ConvertToString(entry->prev);
			len = I_strlen(str);
			MT_ForceAllocIndex(bits, entry->prev, len + 5);
		}
	}

	MT_FinishForceAlloc(bits);
}
