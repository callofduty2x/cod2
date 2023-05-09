#include <stdint.h>

struct jpeg_component_info
{
	int32_t component_id;
	int32_t component_index;
	int32_t h_samp_factor;
	int32_t v_samp_factor;
	int32_t quant_tbl_no;
	int32_t dc_tbl_no;
	int32_t ac_tbl_no;
	int32_t width_in_blocks;
	int32_t height_in_blocks;
	int32_t DCT_scaled_size;
	int32_t downsampled_width;
	int32_t downsampled_height;
	int8_t component_needed;
	char pad0[3];
	int32_t MCU_width;
	int32_t MCU_height;
	int32_t MCU_blocks;
	int32_t MCU_sample_width;
	int32_t last_col_width;
	int32_t last_row_height;
	int32_t quant_table;
	int32_t dct_table;
};

