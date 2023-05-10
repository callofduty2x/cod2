char * __cdecl strstr(char *,char const *)
{	UNIMPLEMENTED();
}

struct rectDef_s const * __cdecl Window_GetRect(struct windowDef_t const *)
{	UNIMPLEMENTED();
}

int __cdecl CG_CrosshairPlayer()
{	UNIMPLEMENTED();
}

void __cdecl CG_ClearSoundPlaybackTracking(void)
{	UNIMPLEMENTED();
}

bool __cdecl CG_PlaySoundOnCurrentLocalClient(int entitynum, float const * const origin, char const * aliasname)
{	UNIMPLEMENTED();
}

bool __cdecl CG_PlaySoundOnFirstClient()
{	UNIMPLEMENTED();
}

char const * __cdecl CG_Argv(int arg)
{	UNIMPLEMENTED();
}

void __cdecl CG_SwitchToLocalClient(int)
{	UNIMPLEMENTED();
}

void __cdecl CG_GetEntityOrientation(int entnum, float * const origin_out, float  axis_out)[3])
{	UNIMPLEMENTED();
}

void __cdecl CG_GetDObjOrientation(int dobjHandle, float  axis_out)[3])
{	UNIMPLEMENTED();
}

void __cdecl CG_FreeWeapons()
{	UNIMPLEMENTED();
}

void __cdecl CG_InitVote()
{	UNIMPLEMENTED();
}

void __cdecl CG_Shutdown()
{	UNIMPLEMENTED();
}

void __cdecl CG_TranslateHudElemMessage(char const * message, char const * messageType, char * const hudElemString)
{	UNIMPLEMENTED();
}

void __cdecl CG_SafeTranslateHudElemString(int index, char * const hudElemString)
{	UNIMPLEMENTED();
}

void * __cdecl Hunk_AllocXAnimClient(int size)
{	UNIMPLEMENTED();
}

void __cdecl CG_StartAmbient()
{	UNIMPLEMENTED();
}

void __cdecl CG_BoldGameMessage(char const * msg)
{	UNIMPLEMENTED();
}

void __cdecl CG_GameMessage(char const * msg)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlaySoundAliasAsMasterByName(int entitynum, float const * const origin, char const * aliasname)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlaySoundAliasByName(int entitynum, float const * const origin, char const * aliasname)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlaySoundAlias(int entitynum, float const * const origin, struct snd_alias_list_t * aliasList)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlayEntitySoundAliasByName(int,char const *)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlayEntitySoundAlias(int entitynum, struct snd_alias_list_t * aliasList)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlayClientSoundAliasByName(char const * aliasname)
{	UNIMPLEMENTED();
}

int __cdecl CG_PlayClientSoundAlias(struct snd_alias_list_t * aliasList)
{	UNIMPLEMENTED();
}

void __cdecl CG_PlaySmokeGrenadesAtTime(int gametime)
{	UNIMPLEMENTED();
}

void __cdecl CG_Init(int serverMessageNum, int serverCommandSequence, int clientNum)
{	UNIMPLEMENTED();
}

struct cg_t * cg;
struct cgs_t * cgs;
struct centity_s * cg_entities;
struct weaponInfo_s * cg_weapons;
struct itemInfo_t * cg_items;
struct dvar_s const * const cg_marks;
struct dvar_s const * const cg_shock_mouse_maxyawspeed;
struct dvar_s const * const cg_shock_volume_weapon;
struct dvar_s const * const cg_shock_volume_voice;
struct dvar_s const * const cg_hudCompassMaxRange;
struct dvar_s const * const cg_gun_y;
struct dvar_s const * const cg_noTaunt;
struct dvar_s const * const cg_scoreboardScrollStep;
struct dvar_s const * const cg_shock_volume_auto2d;
struct dvar_s const * const cg_hudSplitscreenOffsetsUseScale;
struct dvar_s const * const cg_fovMin;
struct dvar_s const * const cg_drawBreathHint;
struct dvar_s const * const cg_shock_volume_shellshock;
struct dvar_s const * const cg_hudCompassSoundPingFadeTime;
struct dvar_s const * const cg_shock_volume_announcer;
struct dvar_s const * const cg_drawFPS;
struct dvar_s const * const cg_subtitlePosX;
struct dvar_s const * const cg_subtitlePosY;
struct dvar_s const * const cg_drawGameMessages;
struct dvar_s const * const cg_thirdPerson;
struct dvar_s const * const cg_hudObjectiveTextHeight;
struct dvar_s const * const cg_drawHealth;
struct dvar_s const * const cg_brass;
struct dvar_s const * const cg_hudGrenadeIconMaxRange;
struct displayContextDef_s cgDC;
struct dvar_s const * const cg_shock_volume_auto;
struct dvar_s const * const cg_hudNormalSplitscreenScale;
struct dvar_s const * const cg_shock_soundFadeInTime;
struct dvar_s const * const cg_drawCrosshair;
struct dvar_s const * const cg_hudObjectiveMinHeight;
struct dvar_s const * const cg_hudObjectiveMinAlpha;
struct dvar_s const * const cg_hudSplitscreenCompassScale;
struct dvar_s const * const cg_hudSplitscreenStanceScale;
struct dvar_s const * const cg_scoreboardItemHeight;
struct dvar_s const * const cg_hudGrenadeIconWidth;
struct dvar_s const * const cg_gun_z;
struct dvar_s const * const cg_hudDamageIconOffset;
struct dvar_s const * const cg_voiceIconSize;
struct dvar_s const * const cg_drawTurretCrosshair;
struct dvar_s const * const cg_shock_mouse_fadeTime;
struct dvar_s const * const cg_hudDamageIconHeight;
struct dvar_s const * const cg_drawSnapshot;
struct dvar_s const * const cg_shock_soundWetLevel;
struct dvar_s const * const cg_hudChatPosition;
struct dvar_s const * const cg_weaponrightbone;
struct dvar_s const * const cg_voiceSpriteTime;
struct dvar_s const * const cg_hudCompassSpringyPointers;
struct dvar_s const * const cg_gun_move_minspeed;
struct dvar_s const * const cg_gun_ofs_u;
struct dvar_s const * const cg_subtitles;
struct dvar_s const * const cg_hudObjectiveMaxRange;
struct dvar_s const * const cg_hudStanceHintPrints;
struct dvar_s const * const cg_youInKillCamSize;
struct dvar_s const * const cg_shock_sound;
struct dvar_s const * const cg_hudDamageIconWidth;
struct dvar_s const * const cg_hudProneY;
struct dvar_s const * const cg_draw2D;
struct dvar_s const * const cg_gun_x;
struct dvar_s const * const cg_crosshairAlpha;
struct dvar_s const * const cg_hudCompassMinRange;
struct dvar_s const * const cg_debugPosition;
struct dvar_s const * const cg_drawGun;
struct dvar_s const * const cg_shock_soundModEndDelay;
struct dvar_s const * const cg_hudGrenadeIconOffset;
struct dvar_s const * const cg_hudSplitscreenScoreboardScale;
struct dvar_s const * const cg_centertime;
struct dvar_s const * const cg_chatHeight;
struct dvar_s const * const cg_minicon;
struct dvar_s const * const cg_drawCrosshairNamesPosX;
struct dvar_s const * const cg_gun_move_rate;
struct dvar_s const * const cg_tracerSpeed;
struct dvar_s const * const cg_shock_screenBlendFadeTime;
struct dvar_s const * const cg_shock_viewKickPeriod;
struct dvar_s const * const cg_shock_volume_local;
struct dvar_s const * const cg_hudGrenadePointerPivot;
struct dvar_s const * const cg_crosshairAlphaMin;
struct dvar_s const * const cg_shock_volume_body;
struct dvar_s const * const cg_tracerChance;
struct dvar_s const * const cg_hudGrenadeIconInScope;
struct dvar_s const * const cg_hudSplitscreenBannerScoreboardScale;
struct dvar_s const * const cg_fovScale;
struct dvar_s const * const cg_hudObjectiveTextScale;
struct dvar_s const * const cg_crosshairEnemyColor;
struct dvar_s const * const cg_hudLegacySplitscreenScale;
struct dvar_s const * const cg_hudCompassMinRadius;
struct dvar_s const * const cg_tracerScale;
struct dvar_s const * const cg_weaponCycleDelay;
struct dvar_s const * const cg_gameMessageWidth;
struct dvar_s const * const cg_thirdPersonRange;
struct dvar_s const * const cg_drawSoundOverlay;
struct dvar_s const * const cg_shock_soundLoopEndDelay;
struct dvar_s const * const cg_gun_ofs_r;
struct dvar_s const * const cg_hudGrenadeIconMaxHeight;
struct dvar_s const * const cg_shock_screenBlendTime;
struct dvar_s const * const cg_debugEvents;
struct dvar_s const * const cg_shock_soundDryLevel;
struct dvar_s const * const cg_hudStanceFlash;
struct dvar_s const * const cg_drawScriptUsage;
struct dvar_s const * const cg_shock_soundLoopFadeTime;
struct dvar_s const * const cg_shock_volume_music;
struct dvar_s const * const cg_crosshairDynamic;
struct dvar_s const * const cg_hudDamageIconInScope;
struct dvar_s const * const cg_drawCrosshairNames;
struct dvar_s const * const cg_gun_move_r;
struct dvar_s const * const cg_constantSizeHeadIcons;
struct dvar_s const * const cg_footsteps;
struct dvar_s const * const cg_shock_volume_menu;
struct dvar_s const * const cg_gun_move_f;
struct dvar_s const * const cg_hudGrenadeIconHeight;
struct dvar_s const * const cg_shock_mouse_maxpitchspeed;
struct dvar_s const * const cg_hudGrenadePointerWidth;
struct dvar_s const * const cg_nopredict;
struct dvar_s const * const cg_drawMaterial;
struct dvar_s const * const cg_shock_viewKickRadius;
struct dvar_s const * const cg_synchronousClients;
struct dvar_s const * const cg_connectionIconSize;
struct dvar_s const * const cg_dumpAnims;
struct dvar_s const * const cg_errorDecay;
struct dvar_s const * const cg_subtitleWidthStandard;
struct dvar_s const * const cg_tracerScaleMinDist;
struct dvar_s const * const cg_drawMantleHint;
struct dvar_s const * const cg_gameBoldMessageWidth;
struct dvar_s const * const cg_tracerWidth;
struct dvar_s const * const cg_centerPrintY;
struct dvar_s const * const cg_hudCompassSize;
struct dvar_s const * const cg_drawCrosshairNamesPosY;
struct dvar_s const * const cg_headIconMinScreenRadius;
struct dvar_s const * const cg_chatTime;
struct dvar_s const * const cg_shock_volume_item;
struct dvar_s const * const cg_marksLimit;
struct dvar_s const * const cg_splitscreenSpectatorScaleIncrease;
struct dvar_s const * const cg_hudDamageIconTime;
struct dvar_s const * const cg_blood;
struct dvar_s const * const cg_teamChatsOnly;
struct dvar_s const * const cg_viewsize;
struct dvar_s const * const cg_weaponleftbone;
struct dvar_s const * const cg_scriptIconSize;
struct dvar_s const * const cg_showmiss;
struct dvar_s const * const cg_predictItems;
struct dvar_s const * const cg_shock_soundRoomType;
struct dvar_s const * const cg_shock_mouse;
struct dvar_s const * const cg_descriptiveText;
struct dvar_s const * const cg_fov;
struct dvar_s const * const cg_hudSplitscreenCompassElementScale;
struct dvar_s const * const cg_drawLagometer;
struct dvar_s const * const cg_subtitleWidthWidescreen;
float cg_hudSplitscreenScale;
struct dvar_s const * const cg_developer;
struct dvar_s const * const cg_subtitleCharHeight;
struct dvar_s const * const cg_hudGrenadePointerHeight;
struct dvar_s const * const cg_gun_move_u;
struct dvar_s const * const cg_hintFadeTime;
struct dvar_s const * const cg_shock_soundFadeOutTime;
struct dvar_s const * const cg_shock_mouse_sensitivityscale;
struct dvar_s const * const cg_subtitleMinTime;
struct dvar_s const * const cg_tracerScaleDistRange;
struct dvar_s const * const cg_paused;
struct dvar_s const * const cg_cursorHints;
struct dvar_s const * const cg_thirdPersonAngle;
struct dvar_s const * const cg_gun_ofs_f;
struct dvar_s const * const cg_scoreboardBannerHeight;
struct dvar_s const * const cg_tracerLength;
void __cdecl CG_InitViewDimensions(void)
{	UNIMPLEMENTED();
}

struct XModel * __cdecl CG_GetXModel(char const *)
{	UNIMPLEMENTED();
}

struct entityState_s * __cdecl CG_FindOldestSmokeGrenade(int,int)
{	UNIMPLEMENTED();
}

int __cdecl CG_GetClientNumForLocalClient(int)
{	UNIMPLEMENTED();
}

void __cdecl CG_InitEntities(void)
{	UNIMPLEMENTED();
}

struct FxImpactTable * __cdecl CG_RegisterImpactEffects(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CG_RegisterSurfaceTypeSounds(char const *,struct snd_alias_list_t * * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_RegisterSounds(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_FreeAnimTreeInstances(void)
{	UNIMPLEMENTED();
}

bool __cdecl CG_ReplaceDirective(int *,int *,char * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_LoadAnimTreeInstances(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_LoadHudMenu(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_RegisterDvars(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_SubtitlePrint(int,struct snd_alias_t *)
{	UNIMPLEMENTED();
}

void __cdecl CG_CreateDObj(struct DObjModel_s *,unsigned short,struct XAnimTree_s *,int,struct clientInfo_t *)
{	UNIMPLEMENTED();
}

void __cdecl CG_RegisterGraphics(char const *)
{	UNIMPLEMENTED();
}

Hunk_AllocXAnimPrecache(int size)
{	UNIMPLEMENTED();
}

