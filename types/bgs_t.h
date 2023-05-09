#include <stdint.h>

struct bgs_t
{
	animScriptData_t animScriptData;
	char pad0[20];
	int32_t time;
	int32_t latestSnapshotTime;
	int32_t frametime;
	int32_t anim_user;
	int32_t GetXModel;
	int32_t CreateDObj;
	int32_t SafeDObjFree;
	int32_t AllocXAnim;
	char clientinfo[77312];
};

