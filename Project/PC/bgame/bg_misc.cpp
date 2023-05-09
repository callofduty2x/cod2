int const * const singleClientEvents;
void __cdecl BG_LerpHudColors(struct hudelem_s const &,int,union hudelem_color_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_AddPredictableEventToPlayerstate(int,int,struct playerState_s *)
{	UNIMPLEMENTED();
}

struct gitem_s const * __cdecl BG_FindItemForWeapon(int)
{	UNIMPLEMENTED();
}

void __cdecl BG_PlayerStateToEntityState(struct playerState_s *,struct entityState_s *,int,unsigned char)
{	UNIMPLEMENTED();
}

void __cdecl BG_GetMarkDir(float const * const,float const * const,float * const)
{	UNIMPLEMENTED();
}

int __cdecl BG_CheckProneValid(int,float const * const,float,float,float,float *,float *,float *,int,int,float * const,unsigned char,enum proneCheckType_t,float)
{	UNIMPLEMENTED();
}

int __cdecl BG_CheckProne(int,float const * const,float,float,float,float *,float *,float *,int,int,float * const,unsigned char,enum proneCheckType_t,float)
{	UNIMPLEMENTED();
}

void __cdecl BG_EvaluateTrajectoryDelta(struct trajectory_t const *,int,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_EvaluateTrajectory(struct trajectory_t const *,int,float * const)
{	UNIMPLEMENTED();
}

int __cdecl BG_CanItemBeGrabbed(struct entityState_s const *,struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_PlayerTouchesItem(struct playerState_s *,struct entityState_s *,int)
{	UNIMPLEMENTED();
}

struct gitem_s const * __cdecl G_FindItem(char const *)
{	UNIMPLEMENTED();
}

void __cdecl BG_RegisterDvars(void)
{	UNIMPLEMENTED();
}

char * * eventnames;
struct dvar_s const * const player_footstepsThreshhold;
struct dvar_s const * const player_view_pitch_down;
struct dvar_s const * const player_runbkThreshhold;
struct dvar_s const * const player_turnAnims;
struct dvar_s const * const stopspeed;
struct dvar_s const * const player_view_pitch_up;
struct dvar_s const * const bg_foliagesnd_minspeed;
struct dvar_s const * const player_dmgtimer_flinchTime;
struct dvar_s const * const player_adsExitDelay;
struct dvar_s const * const bg_swingSpeed;
struct dvar_s const * const bg_aimSpreadMoveSpeedThreshold;
struct dvar_s const * const player_breath_snd_lerp;
struct dvar_s const * const player_breath_gasp_scale;
struct dvar_s const * const player_moveThreshhold;
struct dvar_s const * const player_dmgtimer_minScale;
struct dvar_s const * const bg_foliagesnd_fastinterval;
struct dvar_s const * const player_breath_snd_delay;
struct dvar_s const * const inertiaDebug;
struct dvar_s const * const bg_fallDamageMaxHeight;
struct dvar_s const * const player_runThreshhold;
struct dvar_s const * const player_spectateSpeedScale;
struct dvar_s const * const player_dmgtimer_timePerPoint;
struct dvar_s const * const bg_prone_yawcap;
struct dvar_s const * const friction;
struct dvar_s const * const inertiaMax;
struct dvar_s const * const player_scopeExitOnDamage;
struct dvar_s const * const player_dmgtimer_stumbleTime;
struct dvar_s const * const bg_foliagesnd_resetinterval;
struct dvar_s const * const player_backSpeedScale;
struct dvar_s const * const player_breath_fire_delay;
struct dvar_s const * const bg_foliagesnd_slowinterval;
struct dvar_s const * const player_toggleBinoculars;
int marker_bg_misc;
struct dvar_s const * const player_breath_hold_lerp;
struct dvar_s const * const inertiaAngle;
struct dvar_s const * const player_dmgtimer_maxTime;
struct dvar_s const * const bg_bobMax;
struct dvar_s const * const player_breath_gasp_time;
struct dvar_s const * const bg_bobAmplitudeProne;
struct dvar_s const * const player_breath_gasp_lerp;
struct dvar_s const * const bg_fallDamageMinHeight;
struct dvar_s const * const bg_bobAmplitudeDucked;
struct dvar_s const * const player_strafeSpeedScale;
struct dvar_s const * const player_breath_hold_time;
struct dvar_s const * const bg_ladder_yawcap;
struct dvar_s const * const bg_bobAmplitudeStanding;
struct dvar_s const * const bg_foliagesnd_maxspeed;
