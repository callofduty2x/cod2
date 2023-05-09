#include <stdint.h>

struct __sFILE
{
	int32_t _p;
	int32_t _r;
	int32_t _w;
	int16_t _flags;
	int16_t _file;
	__sbuf _bf;
	int32_t _lbfsize;
	int32_t _cookie;
	int32_t _close;
	int32_t _read;
	int32_t _seek;
	int32_t _write;
	int64_t _ub;
	int32_t _extra;
	int32_t _ur;
	char _ubuf[3];
	int8_t _nbuf;
	int64_t _lb;
	int32_t _blksize;
	int64_t _offset;
};

