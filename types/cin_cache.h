#include <stdint.h>

struct cin_cache
{
	char fileName[256];
	int32_t CIN_WIDTH;
	int32_t CIN_HEIGHT;
	int32_t xpos;
	int32_t ypos;
	int32_t width;
	int32_t height;
	int32_t looping;
	int32_t holdAtEnd;
	int32_t dirty;
	int32_t alterGameState;
	int32_t silent;
	int32_t material;
	int32_t letterBox;
	int32_t sound;
	int32_t iFile;
	int32_t status;
	int32_t startTime;
	int32_t lastFrameTime;
	int32_t lastTime;
	int32_t tfps;
	int32_t RoQPlayed;
	int32_t ROQSize;
	int32_t RoQFrameSize;
	int32_t onQuad;
	int32_t numQuads;
	int32_t samplesPerLine;
	int32_t roq_id;
	int32_t screenDelta;
	int32_t VQ0;
	int32_t VQ1;
	int32_t VQNormal;
	int32_t VQBuffer;
	int32_t samplesPerPixel;
	int32_t gray;
	int32_t xsize;
	int32_t ysize;
	int32_t maxsize;
	int32_t minsize;
	int32_t half;
	int32_t smootheddouble;
	int32_t inMemory;
	int32_t normalBuffer0;
	int32_t roq_flags;
	int32_t roqF0;
	int32_t roqF1;
	int64_t t;
	int32_t roqFPS;
	int32_t playonwalls;
	int32_t buf;
	connstate_t previousGameState;
};
