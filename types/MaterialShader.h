#include <stdint.h>

struct MaterialShader
{
	int32_t name;
	int32_t program;
	int16_t programLen;
	int8_t shaderType;
	int8_t shaderVersion;
	MaterialShaderPtr u;
};

