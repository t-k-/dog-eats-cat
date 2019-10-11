#pragma once

#define ROUND_UP(N, S) ((((N) + (S) - 1) / (S)) * (S))
/* ROUND_UP(12, 5) should be 5 * (12/5 + 1) = 15 */
/* ROUND_UP(10, 5) should be 10 * (10/5 + 0) = 10 */

#define PTR_CAST(_a, _type, _b) \
	_type *_a = (_type *) _b

#undef offsetof
#define offsetof(_type, _member) ((uintptr_t)&((_type*)0)->_member)

#include <stdint.h>
#define container_of(_member_addr, _type, _member_name) \
	(_member_addr == NULL) ? NULL : \
	(_type*)((uintptr_t)(_member_addr) - offsetof(_type, _member_name))

#include <stddef.h> /* for size_t */
#include <stdio.h>  /* for printf */
static inline void print_size(size_t _sz)
{
	float sz = (float)_sz;
	if (_sz >= (1024 << 20))
		printf("%.3f GB", sz / (1024.f * 1024.f * 1024.f));
	else if (_sz >= (1024 << 10))
		printf("%.3f MB", sz / (1024.f * 1024.f));
	else if (_sz > 1024)
		printf("%.3f KB", sz / 1024.f);
	else
		printf("%lu Byte(s)", _sz);
}

#define __1MB__ (1024 << 10)
#define MB * __1MB__

#define __1KB__ 1024
#define KB * __1KB__

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define ABS(x) (((x) >= 0) ? (x) : (-(x)))

#define print_var(_fmt, _var) \
	printf("%s = " _fmt "\n", # _var, _var)

/* byte bitmap print macros */
#define BYTE_STR_FMT "%d%d%d%d%d%d%d%d"

#define BYTE_STR_ARGS(_byte)  \
	(_byte & 0x80 ? 1 : 0), \
	(_byte & 0x40 ? 1 : 0), \
	(_byte & 0x20 ? 1 : 0), \
	(_byte & 0x10 ? 1 : 0), \
	(_byte & 0x08 ? 1 : 0), \
	(_byte & 0x04 ? 1 : 0), \
	(_byte & 0x02 ? 1 : 0), \
	(_byte & 0x01 ? 1 : 0)

#define likely(x)   __builtin_expect((x), 1)
#define unlikely(x) __builtin_expect((x), 0)

#define ACC_TIMER_RESET \
		struct timespec t0, t1; \
		clock_gettime(CLOCK_MONOTONIC, &t0);

#define ACC_TIMER_PRINT \
		clock_gettime(CLOCK_MONOTONIC, &t1); \
		static uint64_t us = 0; \
		static uint64_t ct = 0; \
		if (t1.tv_nsec - t0.tv_nsec > 0) us += (t1.tv_nsec - t0.tv_nsec) / 1000; \
		printf("%'lu ns, %'lu times\n", us, ++ct);

inline static int gen_rand_int(int max_bits)
{
	int bits = (rand() % max_bits) + 1;
	int mask = ~((0L - 1) << bits);
	return rand() & mask;
}
