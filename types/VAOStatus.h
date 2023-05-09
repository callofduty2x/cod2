#include <stdint.h>

typedef enum
{
	UNINITIALIZED_VAO_STATUS = 0,
	USING_GENERIC_VAO = 1,
	USING_VIRGIN_VAO = 2,
	USING_CACHED_VAO = 3
} VAOStatus;

