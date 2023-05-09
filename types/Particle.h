#include <stdint.h>

struct Particle
{
	char pad0[324];
	char colorChannelInstance[12];
	char colorRandChannelInstance[12];
	char alphaChannelInstance[12];
	char alphaRandChannelInstance[12];
	char sizeChannelInstance[12];
	char sizeRandChannelInstance[12];
	char size2ChannelInstance[12];
	char size2RandChannelInstance[12];
	char rotationDeltaChannelInstance[12];
	char rotationDeltaRandChannelInstance[12];
	char velocityXChannelInstance[12];
	char velocityYChannelInstance[12];
	char velocityZChannelInstance[12];
	char velocityXRandChannelInstance[12];
	char velocityYRandChannelInstance[12];
	char velocityZRandChannelInstance[12];
	char velocity2XChannelInstance[12];
	char velocity2YChannelInstance[12];
	char velocity2ZChannelInstance[12];
	char velocity2XRandChannelInstance[12];
	char velocity2YRandChannelInstance[12];
	char velocity2ZRandChannelInstance[12];
};

