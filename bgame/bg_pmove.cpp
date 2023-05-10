float __cdecl abs(float)
{	UNIMPLEMENTED();
}

float __cdecl sqrt(float)
{	UNIMPLEMENTED();
}

int const __cdecl FloatIsNegative(float)
{	UNIMPLEMENTED();
}

int const __cdecl FloatSign(float)
{	UNIMPLEMENTED();
}

void __cdecl Vec2Add(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec2Sub(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec2Mad(float const * const,float,float const * const,float * const)
{	UNIMPLEMENTED();
}

float __cdecl Vec2Dot(float const * const,float const * const)
{	UNIMPLEMENTED();
}

float __cdecl Vec2Length(float const * const)
{	UNIMPLEMENTED();
}

void __cdecl Vec3CrossWithUp(float const * const,float * const)
{	UNIMPLEMENTED();
}

void __cdecl PM_SetProneMovementOverride(struct playerState_s * ps)
{	UNIMPLEMENTED();
}

int __cdecl PM_GetViewHeightLerpTime(struct playerState_s const * ps, int iTarget, int bDown)
{	UNIMPLEMENTED();
}

int __cdecl PM_GroundSurfaceType(struct pml_t * pml)
{	UNIMPLEMENTED();
}

float __cdecl PM_DamageScale_Walk(int)
{	UNIMPLEMENTED();
}

int __cdecl PM_GetEffectiveStance(struct playerState_s * ps)
{	UNIMPLEMENTED();
}

void __cdecl PM_AddTouchEnt(struct pmove_t *, int)
{	UNIMPLEMENTED();
}

void __cdecl PM_playerTrace(struct pmove_t * pm, struct trace_t * results, float const * const start, float const * const mins, float const * const maxs, float const * const end, int passEntityNum, int contentMask)
{	UNIMPLEMENTED();
}

void __cdecl PM_trace(struct pmove_t * pm, struct trace_t * results, float const * const start, float const * const mins, float const * const maxs, float const * const end, int passEntityNum, int contentMask)
{	UNIMPLEMENTED();
}

int __cdecl PM_ShouldMakeFootsteps(struct pmove_t * pm)
{	UNIMPLEMENTED();
}

void __cdecl PM_AddEvent(struct playerState_s * ps, int newEvent)
{	UNIMPLEMENTED();
}

float __cdecl BG_GetSpeed(struct playerState_s const * ps, int time)
{	UNIMPLEMENTED();
}

void __cdecl PM_FootstepEvent(struct pmove_t * pm, struct pml_t * pml, int iOldBobCycle, int iNewBobCycle, int bFootStep)
{	UNIMPLEMENTED();
}

void __cdecl PM_ClipVelocity(float const * const in, float const * const normal, float * const out)
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdateLean(struct playerState_s * ps, float msec, struct usercmd_s * cmd, void  capsuleTrace)(struct trace_t *,float const * const,float const * const,float const * const,float const * const,int,int))
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdatePronePitch(struct pmove_t * pm, struct pml_t * pml)
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdateViewAngles(struct playerState_s * ps, float msec, struct usercmd_s * cmd, unsigned char handler)
{	UNIMPLEMENTED();
}

void __cdecl Pmove(struct pmove_t * pm)
{	UNIMPLEMENTED();
}

struct pmoveHandler_t * pmoveHandlers;
int marker_bg_pmove;
void __cdecl PM_ClearLadderFlag(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_SetLadderFlag(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdatePlayerWalkingFlag(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_DropTimers(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_GetFlinchAnim(float)
{	UNIMPLEMENTED();
}

float __cdecl PM_ViewHeightTableLerp(int,struct viewLerpWaypoint_s *,float *)
{	UNIMPLEMENTED();
}

float __cdecl PM_GetViewHeightLerp(struct pmove_t *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl PM_CorrectAllSolid(struct pmove_t *,struct pml_t *,struct trace_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_DamageLandingForSurface(struct pml_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_HardLandingForSurface(struct pml_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_MediumLandingForSurface(struct pml_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_LightLandingForSurface(struct pml_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_FootstepForSurface(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

float __cdecl PM_CmdScale(struct playerState_s *,struct usercmd_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_FoliageSounds(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_DeadMove(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_SetMovementDir(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

float __cdecl PM_MoveScale(struct playerState_s *,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl PM_Friction(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_CheckLadderMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Footsteps(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_GroundTraceMissed(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

float __cdecl PM_CmdScale_Walk(struct pmove_t *,struct usercmd_s *)
{	UNIMPLEMENTED();
}

int __cdecl BG_CheckProneTurned(struct playerState_s *,float,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl PM_ViewHeightAdjust(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_CheckDuck(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_CrashLand(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

bool __cdecl PM_DoPlayerInertia(struct playerState_s *,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl PM_GroundTrace(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

float __cdecl PM_PlayerInertia(struct playerState_s *,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl PM_Accelerate(struct playerState_s *,struct pml_t *,float * const,float,float)
{	UNIMPLEMENTED();
}

void __cdecl PM_UFOMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_NoclipMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_AirMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_FlyMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_LadderMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_WalkMove(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PmoveSingle(struct pmove_t *)
{	UNIMPLEMENTED();
}

