void __cdecl Com_BitClear(int * const,int)
{	UNIMPLEMENTED();
}

float __cdecl BG_GetBobCycle(struct playerState_s const *)
{	UNIMPLEMENTED();
}

bool __cdecl PM_IsBinocularsADS(struct playerState_s const *)
{	UNIMPLEMENTED();
}

bool __cdecl BG_IsAnyEmptyPrimaryWeaponSlot(struct playerState_s const *)
{	UNIMPLEMENTED();
}

char const * __cdecl BG_GetAmmoClipName(int)
{	UNIMPLEMENTED();
}

char const * __cdecl BG_GetAmmoTypeName(int)
{	UNIMPLEMENTED();
}

char const * __cdecl BG_GetSharedAmmoCapName(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetSharedAmmoCapSize(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetAmmoClipSize(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetNumAmmoClips(void)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetAmmoTypeMax(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetNumAmmoTypes(void)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetNumWeapons(void)
{	UNIMPLEMENTED();
}

struct WeaponDef * __cdecl BG_GetWeaponDef(int)
{	UNIMPLEMENTED();
}

void __cdecl PM_StartWeaponAnim(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_WeaponIsClipOnly(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_AmmoForWeapon(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_ClipForWeapon(int)
{	UNIMPLEMENTED();
}

void __cdecl BG_GetSpreadForWeapon(struct playerState_s const *,int,float *,float *)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetTotalAmmoReserve(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetMaxPickupableAmmo(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_IsPlayerWeaponAnAlt(int,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetStackSlotForWeapon(struct playerState_s const *,int,enum weapSlot_t)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetEmptySlotForWeapon(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_IsPlayerWeaponInSlot(struct playerState_s const *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_SetPlayerWeaponForSlot(struct playerState_s *,int,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_TakePlayerWeapon(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

bool __cdecl BG_DoesWeaponNeedSlot(int)
{	UNIMPLEMENTED();
}

bool __cdecl BG_DoesWeaponRequireSlot(int)
{	UNIMPLEMENTED();
}

bool __cdecl BG_ValidateWeaponNumber(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_IsAimDownSightWeapon(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetFirstEquippedOffhand(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetViewmodelWeaponIndex(struct playerState_s const *)
{	UNIMPLEMENTED();
}

void __cdecl BG_ShutdownWeaponDefFiles(void)
{	UNIMPLEMENTED();
}

float __cdecl BG_GetHorizontalBobFactor(struct playerState_s const *,float,float,float)
{	UNIMPLEMENTED();
}

float __cdecl BG_GetVerticalBobFactor(struct playerState_s const *,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl BG_WeaponFireRecoil(struct playerState_s const *,float * const,float * const)
{	UNIMPLEMENTED();
}

int __cdecl PM_WeaponAmmoAvailable(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl BG_WeaponAmmo(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_ExitAimDownSight(struct playerState_s *)
{	UNIMPLEMENTED();
}

bool __cdecl BG_IsWeaponValid(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetFirstAvailableOffhand(struct playerState_s const *,int)
{	UNIMPLEMENTED();
}

int __cdecl BG_FindWeaponIndexForName(char const *)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetAmmoClipForName(char const *)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetAmmoTypeForName(char const *)
{	UNIMPLEMENTED();
}

void __cdecl PM_AdjustAimSpreadScale(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

int __cdecl PM_InteruptWeaponWithProneMove(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdateAimDownSightLerp(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdateAimDownSightFlag(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_Sway(struct playerState_s *,float * const,float * const,float * const,float,int)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateViewAngles(struct viewState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl PM_ResetWeaponState(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponAngles(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

struct WeaponDef * __cdecl BG_LoadDefaultWeaponDef(void)
{	UNIMPLEMENTED();
}

struct WeaponDef * __cdecl BG_LoadWeaponDef(char const *,char const *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_FillInAllWeaponItems(void)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetWeaponIndexForName(char const *,void (__cdecl*)(int))
{	UNIMPLEMENTED();
}

int __cdecl CG_GetWeaponIndexForName(char const *)
{	UNIMPLEMENTED();
}

void __cdecl CG_SetWeaponDefToDefaultWeapon(int)
{	UNIMPLEMENTED();
}

void __cdecl BG_FillInAmmoItems(void (__cdecl*)(int))
{	UNIMPLEMENTED();
}

void __cdecl BG_ClearWeaponDef(void)
{	UNIMPLEMENTED();
}

struct WeaponDef * * bg_weaponDefs;
int marker_bg_weapons;
int bg_iNumWeapons;
void __cdecl Binocular_State_Hold(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl PM_Weapon_GetAmmoRequired(int)
{	UNIMPLEMENTED();
}

void __cdecl PM_EndHoldBreath(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_StartHoldBreath(struct playerState_s *)
{	UNIMPLEMENTED();
}

bool __cdecl PM_IsBinocularADSAllowed(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_GetBinocularWeaponIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl BG_FillInWeaponItems(int)
{	UNIMPLEMENTED();
}

void __cdecl Binocular_State_Init(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_OffHandEnd(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_OffHandHold(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_OffHandPrepare(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_AddFiringAimSpreadScale(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishReloadEnd(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishWeaponRaise(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_ContinueWeaponAnim(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateView_IdleAngles(struct viewState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_IdleAngles(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_BasePosition_angles(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Binocular_State_Drop(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_ExitBinoculars(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_EnterBinoculars(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_SendEmtpyOffhandEvent(struct playerState_s *,enum OffhandClass)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishMelee(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FireMelee(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl PM_Weapon_FinishFiring(struct pmove_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_SwitchIfEmpty(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl PM_Weapon_AllowReload(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_SetWeaponReloadAddAmmoDelay(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishRechamber(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl PM_WeaponClipEmpty(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_WeaponUseAmmo(struct playerState_s *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_ReloadClip(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_HoldBreathFire(struct playerState_s *)
{	UNIMPLEMENTED();
}

bool __cdecl PM_IsAdsAllowed(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateView_Velocity(struct viewState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateView_BobAngles(struct viewState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateView_DamageKick(struct viewState_t *,float * const)
{	UNIMPLEMENTED();
}

int __cdecl BG_CalculateWeaponPosition_GunRecoil_SingleAngle(float *,float *,float,float,float,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_DamageKick(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_BobOffset(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_BaseAngles(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl Binocular_State_End(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl Binocular_State_Raise(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl Binocular_State_Exit_ADS(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_ExitBinocularsQuick(struct playerState_s *)
{	UNIMPLEMENTED();
}

bool __cdecl PM_UpdateGrenadeThrow(struct playerState_s *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_OffHand(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_OffHandInit(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_Idle(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_CheckForMelee(struct pmove_t *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_SetFPSFireAnim(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_StartFiring(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

int __cdecl PM_Weapon_WeaponTimeAdjust(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_ReloadDelayedAction(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishWeaponChange(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_BeginWeaponChange(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_SetReloadingState(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl PM_Weapon_CheckForRechamber(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_UpdateHoldBreath(struct pmove_t *,struct pml_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_CalculateWeaponPosition_GunRecoil(struct weaponState_t *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_CheckForBinoculars(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_CheckForChangeWeapon(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishReload(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FinishReloadStart(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_BeginWeaponReload(struct playerState_s *)
{	UNIMPLEMENTED();
}

int __cdecl PM_Weapon_CheckFiringAmmo(struct playerState_s *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_CheckForReload(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_FireWeapon(struct playerState_s *,int)
{	UNIMPLEMENTED();
}

void __cdecl PM_Weapon_CheckForOffHand(struct pmove_t *)
{	UNIMPLEMENTED();
}

void __cdecl BG_SetupWeaponAlts(int,void (__cdecl*)(int))
{	UNIMPLEMENTED();
}

void __cdecl BG_SetupClipIndexes(int)
{	UNIMPLEMENTED();
}

void __cdecl BG_SetupSharedAmmoIndexes(int)
{	UNIMPLEMENTED();
}

void __cdecl BG_SetupAmmoIndexes(int)
{	UNIMPLEMENTED();
}

void __cdecl BG_SetupWeaponIndex(int)
{	UNIMPLEMENTED();
}

int __cdecl BG_SetupWeaponDef(struct WeaponDef *,void (__cdecl*)(int))
{	UNIMPLEMENTED();
}

