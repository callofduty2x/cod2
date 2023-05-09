#include <stdint.h>

struct clientSnapshot_t
{
	playerState_t ps;
	int32_t num_entities;
	int32_t num_clients;
	int32_t first_entity;
	int32_t first_client;
	int32_t messageSent;
	int32_t messageAcked;
	int32_t messageSize;
};

