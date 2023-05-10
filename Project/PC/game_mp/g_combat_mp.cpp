enum hitLocation_t __cdecl G_GetHitLocationIndexFromString(unsigned short sString)
{	UNIMPLEMENTED();
}

unsigned short __cdecl G_GetHitLocationString(enum hitLocation_t hitLoc)
{	UNIMPLEMENTED();
}

void __cdecl AddScore(struct gentity_s *,int)
{	UNIMPLEMENTED();
}

float __cdecl G_GetWeaponHitLocationMultiplier(enum hitLocation_t,int)
{	UNIMPLEMENTED();
}

void __cdecl LookAtKiller(struct gentity_s *,struct gentity_s *,struct gentity_s *)
{	UNIMPLEMENTED();
}

void __cdecl G_ParseHitLocDmgTable()
{	UNIMPLEMENTED();
}

int __cdecl G_IndexForMeansOfDeath(char const *)
{	UNIMPLEMENTED();
}

void __cdecl G_DamageClient(struct gentity_s *,struct gentity_s *,struct gentity_s *,float const * const,float const * const,int,int,int,enum hitLocation_t,int)
{	UNIMPLEMENTED();
}

void __cdecl player_die(struct gentity_s * self, struct gentity_s * inflictor, struct gentity_s * attacker, int damage, int meansOfDeath, int iWeapon, float const * const vDir, enum hitLocation_t hitLoc, int psTimeOffset)
{	UNIMPLEMENTED();
}

float __cdecl CanDamage(struct gentity_s * targ, float const * const origin)
{	UNIMPLEMENTED();
}

void __cdecl G_Damage(struct gentity_s * targ, struct gentity_s * inflictor, struct gentity_s * attacker, float const * const dir, float const * const point, int damage, int dflags, int mod, enum hitLocation_t hitLoc, int timeOffset)
{	UNIMPLEMENTED();
}

int __cdecl G_RadiusDamage(float const * const origin, struct gentity_s * inflictor, struct gentity_s * attacker, float fInnerDamage, float fOuterDamage, float radius, struct gentity_s * ignore, int mod)
{	UNIMPLEMENTED();
}

unsigned char * bulletPriorityMap;
unsigned char * riflePriorityMap;
char * * modNames;
float * g_fHitLocDamageMult;
void __cdecl G_HitLocStrcpy(unsigned char *,char const *)
{	UNIMPLEMENTED();
}

