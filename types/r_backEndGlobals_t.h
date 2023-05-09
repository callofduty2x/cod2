#include <stdint.h>

struct r_backEndGlobals_t
{
	char codeConsts[944];
	int32_t frameCount;
	int32_t viewCount;
	char sceneDef[16];
	int32_t viewParms;
	char lodParms[20];
	char sceneViewport[16];
	char viewProjectionMatrix[64];
	int32_t tileIndex;
	int32_t tileCount;
	int32_t width;
	int32_t height;
	int32_t currentEntity;
	int32_t currentEntityLighting;
	char worldEntity[116];
	int8_t viewportIsDirty;
	int8_t projection2D;
	int8_t defaultSamplerState;
	char pad0[1];
	int32_t color_axis;
	int32_t color_allies;
	int32_t fogColor;
	int32_t glowIndexFirst;
	int32_t glowCount;
	int64_t glowImage;
	int32_t texScrollAmountDx7;
	char codeMatrixStack[10656];
	int32_t codeMatrixStackLevel;
	int32_t resolvedPostSunTarget;
	int32_t resolvedSceneTarget;
	int32_t currentFeedbackImage;
	char light[136];
	char entityLighting[212784];
	char shadowLookupMatrix[64];
	int32_t debugFont;
};

