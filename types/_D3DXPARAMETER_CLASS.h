#include <stdint.h>

typedef enum
{
	D3DXPC_SCALAR = 0,
	D3DXPC_VECTOR = 1,
	D3DXPC_MATRIX_ROWS = 2,
	D3DXPC_MATRIX_COLUMNS = 3,
	D3DXPC_OBJECT = 4,
	D3DXPC_STRUCT = 5,
	D3DXPC_FORCE_DWORD = 2147483647
} _D3DXPARAMETER_CLASS;
