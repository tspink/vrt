#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			class GuestInstructionDecoder;
		}
	}
	namespace dbt
	{
		namespace TranslationFlags
		{
			enum TranslationFlags
			{
				NONE = 0
			};
		}
		
		class DBT
		{
		public:
			DBT(arch::guest::GuestInstructionDecoder& decoder) : _decoder(decoder) { }
			
			virtual virt_addr_t translate(guest_phys_addr_t pa, TranslationFlags::TranslationFlags flags) = 0;
			
		protected:
			arch::guest::GuestInstructionDecoder& decoder() const { return _decoder; }
			
		private:
			arch::guest::GuestInstructionDecoder& _decoder;
		};
		
		class CaptiveDBT : public DBT
		{
		public:
			CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder);
			
			virt_addr_t translate(guest_phys_addr_t pa, TranslationFlags::TranslationFlags flags) override;
		};
	}
}
