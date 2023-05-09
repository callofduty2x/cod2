#include <stdint.h>

struct _Rb_tree_node_base
{
	_Rb_tree_color _M_color;
	int32_t _M_parent;
	int32_t _M_left;
	int32_t _M_right;
};

