public: static void * __cdecl ScheduledEffect::operator new(unsigned int)
{	UNIMPLEMENTED();
}

public: static void __cdecl ScheduledEffect::operator delete(void *)
{	UNIMPLEMENTED();
}

public: __cdecl EffectPrimitive::EffectPrimitive(void)
{	UNIMPLEMENTED();
}

public: __cdecl EffectPrimitive::~EffectPrimitive(void)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<struct ScheduledEffect>::FxMemMgr<struct ScheduledEffect>(void)
{	UNIMPLEMENTED();
}

public: void * __cdecl FxMemMgr<struct ScheduledEffect>::Alloc(unsigned int)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<struct ScheduledEffect>::Free(void *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<struct ScheduledEffect>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

public: float __cdecl FxScheduler::GetEffectLength(struct EffectTemplate *)
{	UNIMPLEMENTED();
}

public: union TMediaElement __cdecl MediaHandles::GetHandle(void)const 
{	UNIMPLEMENTED();
}

public: struct EffectTemplate * __cdecl MediaHandles::GetEffect(void)const 
{	UNIMPLEMENTED();
}

public: void __cdecl MediaHandles::operator=(class MediaHandles const &)
{	UNIMPLEMENTED();
}

public: float __cdecl FxScheduler::GetDecalSize(class PrimitiveTemplate const *)const 
{	UNIMPLEMENTED();
}

public: float __cdecl FxScheduler::GetDecalAlpha(class PrimitiveTemplate const *)const 
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::Clean(bool,struct EffectTemplate *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::GetDecalColor(class PrimitiveTemplate const *,float * const)const 
{	UNIMPLEMENTED();
}

struct EffectTemplate * __cdecl FX_TryRegisterEffect(char const *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::CreateDecalEffect(class PrimitiveTemplate const *,float * const,float (* const)[3])
{	UNIMPLEMENTED();
}

struct EffectTemplate * __cdecl FX_RegisterEffect(char const *)
{	UNIMPLEMENTED();
}

public: void __cdecl ScheduledEffect::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

bool __cdecl FX_GetBoltingFrame(class PrimitiveTemplate const *,struct FxBoltInfo const *,class FxBoltFramePtr *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::CreateEffect(struct EffectTemplate const *,class PrimitiveTemplate const *,struct FxBoltInfo const *,float const * const,float const (* const)[3],int,int)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::PlayEffect(struct EffectTemplate const *,float const * const,float const (* const)[3],struct FxBoltInfo const *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::PlayEffect(struct EffectTemplate const *,float const * const,float const * const,float const * const)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::PlayEffect(struct EffectTemplate const *,float const * const,float const * const)
{	UNIMPLEMENTED();
}

public: void __cdecl FxScheduler::PlayEffect(struct EffectTemplate const *,float const * const)
{	UNIMPLEMENTED();
}

private: static class FxMemMgr<struct ScheduledEffect> ScheduledEffect::gmMemMgr;
class FxScheduler * * fxSchedulers;
int marker_FxScheduler;
bool __cdecl FxInSpawnRange(class PrimitiveTemplate const *,float const * const)
{	UNIMPLEMENTED();
}

void __cdecl FX_RotateAroundForward(class PrimitiveTemplate const *,float (* const)[3],float const (* const)[3])
{	UNIMPLEMENTED();
}

void __cdecl ReportPlayEffectError(void)
{	UNIMPLEMENTED();
}

void __cdecl FX_AddEffect(struct EffectPrimitive *,float (* const)[3],float const * const,int,int)
{	UNIMPLEMENTED();
}

