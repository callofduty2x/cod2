#include <stdint.h>

union mnode_info_t
{
	mnode_node_t node;
	mnode_leaf_t leaf;
};

