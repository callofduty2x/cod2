const Effect::`vftable';
const Light::`vftable';
const Particle::`vftable';
const Cloud::`vftable';
const Line::`vftable';
const OrientedParticle::`vftable';
const Tail::`vftable';
const Cylinder::`vftable';
const Emitter::`vftable';
float __cdecl fabs(float)
{	UNIMPLEMENTED();
}

float __cdecl floor(float)
{	UNIMPLEMENTED();
}

float __cdecl I_fsel(float,float,float)
{	UNIMPLEMENTED();
}

float __cdecl I_fabs(float)
{	UNIMPLEMENTED();
}

float __cdecl I_sqrt(float)
{	UNIMPLEMENTED();
}

int __cdecl I_sel(int,int,int)
{	UNIMPLEMENTED();
}

float __cdecl I_fmax(float,float)
{	UNIMPLEMENTED();
}

int __cdecl I_max(int,int)
{	UNIMPLEMENTED();
}

int __cdecl I_min(int,int)
{	UNIMPLEMENTED();
}

float __cdecl I_fclamp(float,float,float)
{	UNIMPLEMENTED();
}

int __cdecl I_clamp(int,int,int)
{	UNIMPLEMENTED();
}

float const __cdecl ClampFloat(float,float,float)
{	UNIMPLEMENTED();
}

int const __cdecl FastRound(float)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Clear(float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Set(float * const,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Copy(float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3CopyOrClear(float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Add(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Sub(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Lerp(float const * const,float const * const,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Scale(float const * const,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3Mad(float const * const,float,float const * const,float * const)
{	UNIMPLEMENTED();
}

float __cdecl Vec3Dot(float const * const,float const * const)
{	UNIMPLEMENTED();
}

bool __cdecl Vec3Compare(float const * const,float const * const)
{	UNIMPLEMENTED();
}

float __cdecl Vec3LengthSq(float const * const)
{	UNIMPLEMENTED();
}

float __cdecl Vec3Length(float const * const)
{	UNIMPLEMENTED();
}

void __cdecl Byte4PackRgba(float const * const,unsigned char * const)
{	UNIMPLEMENTED();
}

void __cdecl Trace_CalcEndpos(float const * const,float const * const,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl FxCurve_Interpolate3d(float const *,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl FxCurveIterator_MoveToTime(struct FxCurveIterator *,float)
{	UNIMPLEMENTED();
}

float __cdecl FxCurveIterator_SampleTime(struct FxCurveIterator *,float)
{	UNIMPLEMENTED();
}

void __cdecl FxCurveIterator_SampleTimeVec3(struct FxCurveIterator *,float *,float)
{	UNIMPLEMENTED();
}

float __cdecl FxChannelInstance_SampleTime(struct FxChannelInstance *,float)
{	UNIMPLEMENTED();
}

void __cdecl FxChannelInstance_SampleTimeVec3(struct FxChannelInstance *,float * const,float)
{	UNIMPLEMENTED();
}

float __cdecl FxChannelInstance_SampleTimeBlend(struct FxChannelInstance *,struct FxChannelInstance *,float,float)
{	UNIMPLEMENTED();
}

void __cdecl FxChannelInstance_SampleTimeBlend3(struct FxChannelInstance *,struct FxChannelInstance *,float,float * const,float)
{	UNIMPLEMENTED();
}

float __cdecl FxChannelInstance_SumTime(struct FxChannelInstance *,float)
{	UNIMPLEMENTED();
}

float __cdecl FxChannelInstance_SumTimeBlend(struct FxChannelInstance *,struct FxChannelInstance *,float,float)
{	UNIMPLEMENTED();
}

public: class FxBoltFrame * __cdecl FxBoltFrame::Clone(void)
{	UNIMPLEMENTED();
}

private: static void * __cdecl FxBoltFrame::operator new(unsigned int)
{	UNIMPLEMENTED();
}

private: static void __cdecl FxBoltFrame::operator delete(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxBoltFramePtr::FxBoltFramePtr(void)
{	UNIMPLEMENTED();
}

public: __cdecl FxBoltFramePtr::FxBoltFramePtr(class FxBoltFrame *)
{	UNIMPLEMENTED();
}

public: __cdecl FxBoltFramePtr::~FxBoltFramePtr(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxBoltFramePtr::operator=(class FxBoltFramePtr const &)
{	UNIMPLEMENTED();
}

public: void __cdecl FxBoltFramePtr::operator=(class FxBoltFrame *)
{	UNIMPLEMENTED();
}

public: class FxBoltFrame * __cdecl FxBoltFramePtr::operator->(void)
{	UNIMPLEMENTED();
}

public: __cdecl FxBoltFramePtr::operator bool(void)const 
{	UNIMPLEMENTED();
}

public: virtual float __cdecl Effect::GetVisibility(float const * const,float const * const,float)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Effect::AddVisibility(void)
{	UNIMPLEMENTED();
}

public: int __cdecl Effect::GetLifeTime(void)
{	UNIMPLEMENTED();
}

public: static void __cdecl Effect::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl Light::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl Particle::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl Cloud::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl Line::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl OrientedParticle::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl Tail::operator delete(void *)
{	UNIMPLEMENTED();
}

public: static void __cdecl Cylinder::operator delete(void *)
{	UNIMPLEMENTED();
}

public: void __cdecl Emitter::PickStep(void)
{	UNIMPLEMENTED();
}

public: static void __cdecl Emitter::operator delete(void *)
{	UNIMPLEMENTED();
}

public: bool __cdecl FxArchive::IsReading(void)
{	UNIMPLEMENTED();
}

public: int __cdecl FxArchive::ReadInt(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxArchive::WriteInt(int)
{	UNIMPLEMENTED();
}

public: void __cdecl FxArchive::ArchiveBool(bool *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxArchive::ArchiveInt(int *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxArchive::ArchiveFloat(float *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxArchive::ArchiveVector(float * const)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Effect::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Effect::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Particle::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Particle::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl OrientedParticle::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl OrientedParticle::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Cloud::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Cloud::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Line::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Line::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Tail::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Tail::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Cylinder::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Cylinder::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Emitter::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Emitter::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Light::`scalar deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: virtual void * __cdecl Light::`vector deleting destructor'(unsigned int)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class FxBoltFrame>::FxMemMgr<class FxBoltFrame>(void)
{	UNIMPLEMENTED();
}

public: void * __cdecl FxMemMgr<class FxBoltFrame>::Alloc(unsigned int)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class FxBoltFrame>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Effect>::FxMemMgr<class Effect>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Effect>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Light>::FxMemMgr<class Light>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Light>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Particle>::FxMemMgr<class Particle>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Particle>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Cloud>::FxMemMgr<class Cloud>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Cloud>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Line>::FxMemMgr<class Line>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Line>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class OrientedParticle>::FxMemMgr<class OrientedParticle>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class OrientedParticle>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Tail>::FxMemMgr<class Tail>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Tail>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Cylinder>::FxMemMgr<class Cylinder>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Cylinder>::Free(void *)
{	UNIMPLEMENTED();
}

public: __cdecl FxMemMgr<class Emitter>::FxMemMgr<class Emitter>(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxMemMgr<class Emitter>::Free(void *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class FxBoltFrame>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Effect>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Light>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Particle>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Cloud>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Line>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class OrientedParticle>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Tail>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Cylinder>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

private: void __cdecl FxMemMgr<class Emitter>::MakeFirstBlock(struct FxMemBlock *)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Flash::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Light::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Light::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Emitter::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Emitter::Cull(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Cylinder::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Tail::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Line::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Line::Die(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Cloud::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cloud::Die(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl OrientedParticle::TypeID(void)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Particle::TypeID(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::UpdateSubimage(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::IntegrateGravity(int,float * const)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::StopPhysics(void)
{	UNIMPLEMENTED();
}

protected: float __cdecl Particle::GetNormalizedDuration(float,float)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Effect::FixupArchiveLoad(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

public: virtual unsigned char __cdecl Effect::TypeID(void)
{	UNIMPLEMENTED();
}

public: int __cdecl Effect::GetAge(void)
{	UNIMPLEMENTED();
}

public: void __cdecl Effect::SetTimeStartEnd(int,int)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Effect::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Effect::Cull(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Effect::Die(void)
{	UNIMPLEMENTED();
}

private: __cdecl FxBoltFrame::FxBoltFrame(struct FxBoltInfo const *)
{	UNIMPLEMENTED();
}

public: void __cdecl Flash::Init(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Light::FixupArchiveLoad(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

protected: void __cdecl Cloud::GenerateRandomTumbleAxis(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Particle::FixupArchiveLoad(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::CalcGravityValue(float,float * const,struct orientation_t const *)
{	UNIMPLEMENTED();
}

bool __cdecl IsParticleInert(float const * const,float const * const,float)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Particle::AddVisibility(void)
{	UNIMPLEMENTED();
}

public: void __cdecl Particle::SetRandomVelocity2Weights(float,float,float)
{	UNIMPLEMENTED();
}

public: void __cdecl Particle::SetRandomVelocityWeights(float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl FxChannelInstance_Create(struct FxChannel const *,struct FxChannelInstance *)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Effect::Update(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Light::CreateChannelInstances(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Tail::FixupArchiveLoad(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

protected: void __cdecl Tail::CalcNewEndpoint(struct orientation_t const *)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cloud::FixupArchiveLoad(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Particle::CreateChannelInstances(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

public: void __cdecl Particle::SetAxis(float (* const)[3])
{	UNIMPLEMENTED();
}

protected: int __cdecl Effect::GetCullPlaneCount(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Light::UpdateSize(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Light::Cull(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Cylinder::Cull(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Tail::UpdateLength(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Tail::CreateChannelInstances(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Tail::Cull(void)
{	UNIMPLEMENTED();
}

public: void __cdecl Tail::InitEndPoint(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Line::Cull(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Cloud::UpdateLength(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cloud::CreateChannelInstances(class PrimitiveTemplate const *)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Cloud::Cull(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl OrientedParticle::Cull(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::UpdateRotation(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::UpdateAlpha(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::UpdateSize2(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::UpdateSize(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::IntegrateVelocity2(float,float * const)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::IntegrateVelocity(float,float * const)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::CalcVelocity2Value(float,float * const,struct orientation_t const *)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::CalcVelocityValue(float,float * const,struct orientation_t const *)
{	UNIMPLEMENTED();
}

public: virtual float __cdecl Particle::GetVisibility(float const * const,float const * const,float)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Particle::Cull(void)
{	UNIMPLEMENTED();
}

public: void __cdecl FxBoltFrame::Release(void)const 
{	UNIMPLEMENTED();
}

protected: void __cdecl Light::UpdateRGB(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Emitter::UpdateAngles(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::UpdateRGB(void)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::GetTotalVelocity(float,float * const,struct orientation_t const *)
{	UNIMPLEMENTED();
}

public: void __cdecl Particle::IntegrateTotalVelocity(int,float * const)
{	UNIMPLEMENTED();
}

protected: void __cdecl Particle::ApplyImpact(struct orientation_t const *,float,float const * const,float,float const * const)
{	UNIMPLEMENTED();
}

public: void __cdecl Effect::SetBoltFrame(class FxBoltFramePtr *)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Effect::~Effect(void)
{	UNIMPLEMENTED();
}

public: __cdecl Effect::Effect(void)
{	UNIMPLEMENTED();
}

public: static class FxBoltFramePtr const __cdecl FxBoltFrame::Acquire(struct FxBoltInfo const *)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Flash::Update(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Light::~Light(void)
{	UNIMPLEMENTED();
}

public: __cdecl Light::Light(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Particle::~Particle(void)
{	UNIMPLEMENTED();
}

public: __cdecl Particle::Particle(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Emitter::~Emitter(void)
{	UNIMPLEMENTED();
}

public: __cdecl Emitter::Emitter(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Tail::~Tail(void)
{	UNIMPLEMENTED();
}

public: __cdecl Tail::Tail(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Line::~Line(void)
{	UNIMPLEMENTED();
}

public: __cdecl Line::Line(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Cloud::~Cloud(void)
{	UNIMPLEMENTED();
}

public: __cdecl Cloud::Cloud(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl OrientedParticle::~OrientedParticle(void)
{	UNIMPLEMENTED();
}

public: __cdecl OrientedParticle::OrientedParticle(void)
{	UNIMPLEMENTED();
}

public: virtual __cdecl Cylinder::~Cylinder(void)
{	UNIMPLEMENTED();
}

public: __cdecl Cylinder::Cylinder(void)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl FX_XModelPrecache(char const *)
{	UNIMPLEMENTED();
}

public: void __cdecl FxBoltFramePtr::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Effect::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: struct orientation_t const * __cdecl FxBoltFrame::GetOrientation(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Light::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Particle::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: void __cdecl Particle::GetTotalVelocityAtTime0(float * const)
{	UNIMPLEMENTED();
}

protected: bool __cdecl Effect::GetBoltOrientation(struct orientation_t const * *)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Flash::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Light::Update(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Emitter::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Cylinder::Update(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Tail::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Line::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Line::Update(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cloud::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl OrientedParticle::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cylinder::Archive(class FxArchive &)
{	UNIMPLEMENTED();
}

protected: void __cdecl Emitter::UpdateEmitFx(float * const,struct orientation_t const *)
{	UNIMPLEMENTED();
}

protected: bool __cdecl Particle::UpdateOrigin(struct orientation_t const *)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Particle::Update(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Particle::Die(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Emitter::Update(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Tail::Update(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl Cloud::Update(void)
{	UNIMPLEMENTED();
}

public: virtual bool __cdecl OrientedParticle::Update(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Flash::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Emitter::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cylinder::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Tail::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Line::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Cloud::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl OrientedParticle::Draw(void)
{	UNIMPLEMENTED();
}

public: virtual void __cdecl Particle::Draw(void)
{	UNIMPLEMENTED();
}

private: static class FxMemMgr<class FxBoltFrame> FxBoltFrame::gmMemMgr;
private: static class FxMemMgr<class Effect> Effect::gmMemMgr;
private: static class FxMemMgr<class Light> Light::gmMemMgr;
private: static class FxMemMgr<class Particle> Particle::gmMemMgr;
private: static class FxMemMgr<class Line> Line::gmMemMgr;
private: static class FxMemMgr<class OrientedParticle> OrientedParticle::gmMemMgr;
private: static class FxMemMgr<class Tail> Tail::gmMemMgr;
private: static class FxMemMgr<class Cylinder> Cylinder::gmMemMgr;
private: static class FxMemMgr<class Emitter> Emitter::gmMemMgr;
private: static class FxMemMgr<class Cloud> Cloud::gmMemMgr;
int marker_FxPrimitives;
private: static class FxBoltFrame * FxBoltFrame::g_mFrameList;
bool __cdecl ParticleHit(struct trace_t *)
{	UNIMPLEMENTED();
}

void __cdecl ClampVec(float * const,unsigned char *)
{	UNIMPLEMENTED();
}

void * __cdecl FxModelAlloc(int)
{	UNIMPLEMENTED();
}

void __cdecl FX_AddFxToScene(class Effect *,enum refEntityType_t)
{	UNIMPLEMENTED();
}

