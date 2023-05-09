#include <stdint.h>

struct script_s
{
	char filename[64];
	int32_t buffer;
	int32_t script_p;
	int32_t end_p;
	int32_t lastscript_p;
	int32_t whitespace_p;
	int32_t endwhitespace_p;
	int32_t length;
	int32_t line;
	int32_t lastline;
	int32_t tokenavailable;
	int32_t flags;
	int32_t punctuations;
	int32_t punctuationtable;
	char pad0[12];
	char token[1088];
	int32_t next;
};

