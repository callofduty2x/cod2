#include <stdint.h>

struct SpeexSubmode
{
	int32_t lbr_pitch;
	int32_t forced_pitch_gain;
	int32_t have_subframe_gain;
	int32_t double_codebook;
	int32_t lsp_quant;
	int32_t lsp_unquant;
	int32_t ltp_quant;
	int32_t ltp_unquant;
	int32_t ltp_params;
	int32_t innovation_quant;
	int32_t innovation_unquant;
	int32_t innovation_params;
	int32_t lpc_enh_k1;
	int32_t lpc_enh_k2;
	int32_t lpc_enh_k3;
	int32_t comb_gain;
	int32_t bits_per_frame;
};

