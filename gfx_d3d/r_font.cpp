int __cdecl R_TextHeight(struct Font_s * font)
{	UNIMPLEMENTED();
}

float __cdecl R_NormalizedTextScale(struct Font_s * font, float scale)
{	UNIMPLEMENTED();
}

struct Glyph const * __cdecl R_GetCharacterGlyph(struct Font_s * font, unsigned int letter)
{	UNIMPLEMENTED();
}

void __cdecl R_DrawText(char const * text, int maxChars, struct Font_s * font, float x, float y, float xScale, float yScale, float const * const color, int style)
{	UNIMPLEMENTED();
}

int __cdecl R_TextWidth(char const * text, int maxChars, struct Font_s * font)
{	UNIMPLEMENTED();
}

struct Font_s * __cdecl R_RegisterFont(char const * fontName, int imageTrack)
{	UNIMPLEMENTED();
}

void __cdecl R_DrawConsoleText(short const * string, int maxChars, struct Font_s * font, float x, float y, float xScale, float yScale, float const * const color, int style)
{	UNIMPLEMENTED();
}

int __cdecl R_ConsoleTextWidth(short const * string, int maxChars, struct Font_s * font)
{	UNIMPLEMENTED();
}

int marker_r_font;
short const * __cdecl R_GetConsoleString(short const *,int *,char *,float * const,bool *)
{	UNIMPLEMENTED();
}

void __cdecl R_DrawConsoleIcon(float,float,float,float,float const * const,struct Material *,bool)
{	UNIMPLEMENTED();
}

short const * __cdecl R_GetConsoleIcon(short const *,int *,float *,float *,struct Material * *,float * const,bool *)
{	UNIMPLEMENTED();
}

R_DuplicateFont(Font_s* fontCopy,  char const* name)
{	UNIMPLEMENTED();
}

R_InitFonts()
{	UNIMPLEMENTED();
}

R_ShutdownFonts()
{	UNIMPLEMENTED();
}

