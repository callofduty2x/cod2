#include <stdint.h>

struct split_cb_params
{
	int32_t subvect_size;
	int32_t nb_subvect;
	int32_t shape_cb;
	int32_t shape_bits;
	int32_t have_sign;
};

