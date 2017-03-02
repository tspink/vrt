#pragma once

#include <arch/instruction-decoder.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Statement;
		}
	}
	
	namespace arch
	{
		namespace guest
		{
			class GuestInstructionDecoder : public InstructionDecoder
			{
			public:
			};
			
			static inline constexpr uint64_t __ROR64(uint64_t v, uint8_t amt)
			{
				return (v >> amt) | ((v & ((1 << amt) - 1)) << (64 - amt));
			}
			
			static inline constexpr uint32_t __ROR32(uint32_t v, uint8_t amt)
			{
				return (v >> amt) | ((v & ((1 << amt) - 1)) << (32 - amt));
			}
			
			static inline constexpr uint64_t __SEXT64(uint64_t v, uint8_t bits)
			{
				return (uint64_t)(((int64_t)(v << (64 - bits))) >> (64 - bits));
			}
			
			static inline constexpr uint32_t UNSIGNED_BITS(uint32_t v, uint8_t u, uint8_t l)
			{
				return ((((uint32_t)v) << (31 - u)) >> (31 - u + l));
			}
			
			static inline constexpr uint32_t SIGNED_BITS(uint32_t v, uint8_t u, uint8_t l)
			{
				return ((((int32_t)v) << (31 - u)) >> (31 - u + l));
			}
			
			static inline constexpr uint8_t BITSEL(uint32_t v, uint8_t a)
			{
				return (v >> a) & 1;
			}
			
			static inline constexpr uint32_t BIT_LSB(uint8_t a)
			{
				return (1 << a);
			}
		}
	}
}