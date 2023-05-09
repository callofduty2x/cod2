#include <stdint.h>

struct SpeexMode
{
	int32_t mode;
	int32_t query;
	int32_t modeName;
	int32_t modeID;
	int32_t bitstream_version;
	int32_t enc_init;
	int32_t enc_destroy;
	int32_t enc;
	int32_t dec_init;
	int32_t dec_destroy;
	int32_t dec;
	int32_t enc_ctl;
	int32_t dec_ctl;
};

