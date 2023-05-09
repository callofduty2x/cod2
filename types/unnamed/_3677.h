#include <stdint.h>

struct _3677
{
	int32_t codePos;
	int32_t prevOpcodePos;
	int32_t fileId;
	int32_t threadId;
	int32_t cumulOffset;
	int32_t maxOffset;
	int32_t maxCallOffset;
	int8_t bConstRefCount;
	int8_t in_developer_thread;
	char pad0[2];
	int32_t developer_thread_sourcePos;
	int16_t firstThread;
	int8_t bCanIgnoreCase;
	char pad1[1];
	int32_t currentCaseStatement;
	int8_t bCanBreak;
	int8_t bCanIgnoreBreak;
	char pad2[2];
	int32_t currentBreakStatement;
	int8_t bCanContinue;
	int8_t bCanIgnoreContinue;
	char pad3[2];
	int32_t currentContinueStatement;
	int32_t breakChildBlocks;
	int32_t breakChildCount;
	int32_t breakBlock;
	int32_t continueChildBlocks;
	int32_t continueChildCount;
	int8_t forceNotCreate;
	char pad4[3];
	int32_t precachescriptList;
	int32_t precachescriptListHead;
	char value_start[384];
};

