void __cdecl MemFile_ArchiveData(struct MemoryFile *,int,void *)
{	UNIMPLEMENTED();
}

void __cdecl MemFile_ArchiveInt(struct MemoryFile *,int *)
{	UNIMPLEMENTED();
}

void __cdecl CG_GetTeamColor(float (*)[4])
{	UNIMPLEMENTED();
}

int __cdecl CG_KeyInterceptEvent(int key, int down)
{	UNIMPLEMENTED();
}

char const * __cdecl CG_GameTypeString()
{	UNIMPLEMENTED();
}

int __cdecl CG_OwnerDrawVisible(int)
{	UNIMPLEMENTED();
}

int __cdecl CG_ServerMaterialName(int index, char * materialName, int maxLen)
{	UNIMPLEMENTED();
}

void __cdecl CG_ResetLowHealthOverlay()
{	UNIMPLEMENTED();
}

float __cdecl CG_CalcPlayerHealth()
{	UNIMPLEMENTED();
}

void __cdecl CG_SetNormalSplitscreenScaling(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_SetLegacySplitscreenScaling(void)
{	UNIMPLEMENTED();
}

bool __cdecl CG_AreHudMenusHidden()
{	UNIMPLEMENTED();
}

char const * __cdecl CG_GetKillerText()
{	UNIMPLEMENTED();
}

void __cdecl CG_ApplySplitScreenCompassScale(float * x, float * y, float * w, float * h)
{	UNIMPLEMENTED();
}

struct Material * __cdecl CG_ObjectiveIcon(int,int)
{	UNIMPLEMENTED();
}

float __cdecl CG_FadeHudMenu(struct dvar_s const * fadeDvar, int displayStartTime, int duration)
{	UNIMPLEMENTED();
}

void __cdecl CG_ArchiveState(struct MemoryFile * memFile)
{	UNIMPLEMENTED();
}

int __cdecl CG_ClientNumFromName(char const *)
{	UNIMPLEMENTED();
}

bool __cdecl CG_CheckPlayerForLowClip()
{	UNIMPLEMENTED();
}

bool __cdecl CG_CheckPlayerForLowAmmo()
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawMenuShader(struct rectDef_s const *,struct Material *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerCompassBack(struct rectDef_s const * rect, struct Material * material, float * const color)
{	UNIMPLEMENTED();
}

void __cdecl CG_ShowResponseHead(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_AntiBurnInHUD_RegisterDvars()
{	UNIMPLEMENTED();
}

char const * __cdecl CG_GetTranslatedLocationString(int iLocation)
{	UNIMPLEMENTED();
}

void __cdecl CG_OwnerDraw(float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int align, float special, struct Font_s * font, float scale, float * const color, struct Material * material, int textStyle)
{	UNIMPLEMENTED();
}

struct dvar_s const * const hud_health_pulserate_injured;
struct dvar_s const * const hud_health_startpulse_critical;
struct dvar_s const * const hud_fade_offhand;
struct dvar_s const * const hud_deathQuoteFadeTime;
struct dvar_s const * const hud_fade_ammodisplay;
struct dvar_s const * const hud_health_startpulse_injured;
struct dvar_s const * const hud_fade_stance;
struct dvar_s const * const hud_fade_compass;
struct dvar_s const * const hud_health_pulserate_critical;
struct dvar_s const * const hud_fade_healthbar;
void __cdecl CG_DrawAreaWeapons(struct rectDef_s *,int,float,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawAreaHoldable(struct rectDef_s *,int,float,float,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_UpdateCursorHints(void)
{	UNIMPLEMENTED();
}

float __cdecl CG_FadeLowHealthOverlay(void)
{	UNIMPLEMENTED();
}

void __cdecl CalcCompassPointerSize(float *,float *)
{	UNIMPLEMENTED();
}

void __cdecl CalcSplitScreenStanceOffset(float *,float *)
{	UNIMPLEMENTED();
}

void __cdecl CalcSplitScreenStanceScale(float *,float *)
{	UNIMPLEMENTED();
}

int __cdecl CG_GetSelectedWeaponIndex(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_CalcCompassDimensions(struct rectDef_s const *,float *,float *,float *,float *)
{	UNIMPLEMENTED();
}

void __cdecl CG_PulseLowHealthOverlay(float)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerLowHealthOverlay(struct rectDef_s const *,struct Material *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerBarHealthBack(struct rectDef_s const *,struct Material *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerBarHealth(struct rectDef_s const *,struct Material *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawGameType(struct rectDef_s const *,struct Font_s *,float,float * const,struct Material *,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawTeamScore(int,struct rectDef_s *,struct Font_s *,float,float * const,struct Material *,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawKiller(struct rectDef_s const *,struct Font_s *,float,float * const,struct Material *,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawScore(int,struct rectDef_s const *,struct Font_s *,float,float * const,struct Material *,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerCompassPointers(struct rectDef_s const *,struct Material *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawStanceIcon(struct rectDef_s const *,float * const,float,float,float)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerWeaponModeIcon(struct rectDef_s const *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerWeaponNameBack(struct rectDef_s const *,struct Font_s *,float,float * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerWeaponName(struct rectDef_s const *,struct Font_s *,float,float * const,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerAmmoValue(struct rectDef_s const *,struct Font_s *,float,float * const,struct Material *,int,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerAmmoBackdrop(struct rectDef_s const *,float * const,struct Material *)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawTeamColor(struct rectDef_s const *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerCompass(struct rectDef_s const *,struct Material *,float * const)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawMantleHint(struct rectDef_s const *,struct Font_s *,float,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawHoldBreathHint(struct rectDef_s const *,struct Font_s *,float,int)
{	UNIMPLEMENTED();
}

char const * __cdecl CG_GetUseString(void)
{	UNIMPLEMENTED();
}

char const * __cdecl CG_GetWeaponUseString(void)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerStance(struct rectDef_s const *,float * const,struct Font_s *,float,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawCursorhint(struct rectDef_s const *,struct Font_s *,float,int)
{	UNIMPLEMENTED();
}

void __cdecl CG_DrawPlayerLocation(struct rectDef_s const *,struct Font_s *,float,float * const,int)
{	UNIMPLEMENTED();
}

