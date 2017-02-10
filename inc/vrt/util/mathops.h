#pragma once

#include <vrt/define.h>

namespace vrt {
	namespace util {
		static inline uint32_t ilog2_floor(uint32_t v) {
			uint32_t r;
			asm("\tbsr %1, %0\n" : "=r"(r) : "r"(v));
			return r;
		}

		static inline uint32_t ilog2_ceil(uint32_t v) {
			uint32_t r;
			asm("\tbsr %1, %0\n" : "=r"(r) : "r"(v));

			return r + (v & (v - 1) ? 1 : 0);
		}
	}
}
