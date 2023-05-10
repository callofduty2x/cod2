int __cdecl Image_GetCardMemoryAmount(int imageFlags, enum _D3DFORMAT format, int width, int height, int depth)
{	UNIMPLEMENTED();
}

enum _D3DCUBEMAP_FACES __cdecl Image_CubemapFace(int)
{	UNIMPLEMENTED();
}

void __cdecl Image_GetPicmip(struct GfxImage const * image, struct Picmip * picmip)
{	UNIMPLEMENTED();
}

void __cdecl Image_Setup(struct GfxImage * image, int width, int height, int depth, int imageFlags, unsigned long usage, enum _D3DFORMAT imageFormat)
{	UNIMPLEMENTED();
}

void __cdecl Image_SetupAndLoad(struct GfxImage *,int,int,int,int,unsigned long,enum _D3DFORMAT)
{	UNIMPLEMENTED();
}

void __cdecl Image_UploadData(struct GfxImage * image, enum _D3DFORMAT format, int face, int mipLevel, unsigned char const * src)
{	UNIMPLEMENTED();
}

int marker_r_image_load_common;
int __cdecl Image_GetMinSizeForFormat(enum _D3DFORMAT)
{	UNIMPLEMENTED();
}

void * __cdecl Image_AllocTextureObject(int)
{	UNIMPLEMENTED();
}

unsigned char * __cdecl Image_MipLevelBaseAddress(struct GfxImage *,enum _D3DFORMAT,int,int)
{	UNIMPLEMENTED();
}

void __cdecl Image_CapPicmipForFormat(enum _D3DFORMAT,int,int,struct Picmip *)
{	UNIMPLEMENTED();
}

void __cdecl Image_Alloc2DPixels(struct GfxImage *,int,unsigned long,enum _D3DFORMAT,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl Image_Alloc3DPixels(struct GfxImage *,int,unsigned long,enum _D3DFORMAT,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl Image_AllocCubePixels(struct GfxImage *,int,unsigned long,enum _D3DFORMAT,unsigned long)
{	UNIMPLEMENTED();
}

void __cdecl Image_Upload3D_CopyData(struct GfxImage *,enum _D3DFORMAT,int,unsigned char const *)
{	UNIMPLEMENTED();
}

void __cdecl Image_Upload2D_CopyData(struct GfxImage *,enum _D3DFORMAT,int,int,unsigned char const *)
{	UNIMPLEMENTED();
}

