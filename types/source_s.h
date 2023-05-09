#include <stdint.h>

struct source_s
{
	char filename[64];
	char includepath[64];
	int32_t punctuations;
	int32_t scriptstack;
	int32_t tokens;
	int32_t defines;
	int32_t definehash;
	int32_t indentstack;
	int32_t skip;
	char pad0[4];
	token_t token;
};

