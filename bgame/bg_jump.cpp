void __cdecl Vec2Scale(float const * const,float,float * const)
{	UNIMPLEMENTED();
}

dvar_t *jump_height;
dvar_t *jump_stepSize;
dvar_t *jump_slowdownEnable;

void __cdecl Jump_ActivateSlowdown(playerState_t * ps)
{
    if(!ps->pm_time)
    {
        ps->pm_flags |= 0x80000;
        ps->pm_time = 1800;
    }
}

bool __cdecl Jump_IsPlayerAboveMax(playerState_t * ps)
{
    return ps->origin[2] >= ps->jumpOriginZ + jump_height->current.value;
}

bool __cdecl Jump_GetStepHeight(playerState_t *ps, const float *origin, float *stepSize)
{
    float height = ps->jumpOriginZ + jump_height->current.value;
    if(height <= origin[2])
    {
        return false;
    }
    *stepSize = jump_stepSize->current.value;
    if(jump_stepSize->current.value + origin[2] > height)
    {
        *stepSize = height - origin[2];
    }
    return true;
}

void __cdecl Jump_ClearState(playerState_t * ps)
{
    ps->pm_flags &= ~0x80000;
    ps->jumpOriginZ = 0.f;
}

void __cdecl Jump_ClampVelocity(playerState_t * ps, const float* origin)
{
    if(ps->origin[2] - origin[2] != 0.0)
    {
        float heightDiff = ps->jumpOriginZ + jump_height->current.value - ps->origin[2];
        if(heightDiff >= 0.1f)
        {
            float velZ = sqrtf(heightDiff * 2.f * ps->gravity);
            if(ps->velocity[2] > velZ)
            {
                ps->velocity[2] = velZ;
            }
        } else
        {
            ps->velocity[2] = 0.f;
        }
    }
}

#define JUMP_TIME_CONSTANT (1800)

float __cdecl Jump_ReduceFriction(playerState_t * ps)
{
    if(ps->pm_time > JUMP_TIME_CONSTANT)
    {
        Jump_ClearState(ps);
        return 1.f;
    }

    if(!jump_slowdownEnable->current.enabled)
    {
        return 1.f;
    }

    if(ps->pm_time >= JUMP_TIME_CONSTANT - 100)
    {
        return 2.5f;
    }
    float inv = 1.f / ((float)JUMP_TIME_CONSTANT) - 100.f);
    float fTime = (float)ps->pm_time;
    return fTime * 1.5f * inv + 1.f;
}

void __cdecl Jump_ApplySlowdown(playerState_t * ps)
{
    float factor = 0.f;
    if(ps->pm_time <= JUMP_TIME_CONSTANT)
    {
        if(ps->pm_time != 0)
        {
            factor = 1.f;
        } else if(ps->jumpOriginZ + 18.f > ps->origin[2])
        {
            ps->pm_time = JUMP_TIME_CONSTANT;
            factor = 0.65f;
        } else
        {
            ps->pm_time = 1200;
            factor = 0.5f;
        }
    } else
    {
        Jump_ClearState(ps);
        factor = 0.65f;
    }
    if(!jump_slowdownEnable->current.enabled)
    {
        factor = 1.f;
    }
    //replace with VectorScale?
    for(int i = 0; i < 3; ++i)
        ps->velocity[i] *= factor;
}

bool __cdecl Jump_Check(struct pmove_t * pm, struct pml_t * pml)
{	UNIMPLEMENTED();
}

void __cdecl Jump_RegisterDvars()
{	UNIMPLEMENTED();
}

float __cdecl Jump_GetLandFactor(playerState_t *)
{	UNIMPLEMENTED();
}

float __cdecl Jump_GetSlowdownFriction(playerState_t *)
{	UNIMPLEMENTED();
}

void __cdecl Jump_AddSurfaceEvent(playerState_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl Jump_PushOffLadder(playerState_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl Jump_Start(struct pmove_t *,struct pml_t *,float)
{	UNIMPLEMENTED();
}

