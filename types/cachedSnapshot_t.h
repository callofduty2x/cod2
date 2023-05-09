#include <stdint.h>

struct cachedSnapshot_t
{
	int32_t archivedFrame;
	int32_t time;
	int32_t num_entities;
	int32_t first_entity;
	int32_t num_clients;
	int32_t first_client;
	int32_t usesDelta;
};

