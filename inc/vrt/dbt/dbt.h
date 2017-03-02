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
		
		namespace ir
		{
			class Function;
		}
		
		class Translation;
		class TranslationContext;
		
		class DBT
		{
		public:
			DBT(arch::guest::GuestInstructionDecoder& decoder) : _decoder(decoder) { }
			
			virtual Translation *translate(gpa_t pa, TranslationFlags::TranslationFlags flags) = 0;
			
			arch::guest::GuestInstructionDecoder& decoder() const { return _decoder; }
			
		private:
			arch::guest::GuestInstructionDecoder& _decoder;
		};
		
		class CaptiveDBT : public DBT
		{
		public:
			CaptiveDBT(arch::guest::GuestInstructionDecoder& decoder);
			
			Translation *translate(gpa_t pa, TranslationFlags::TranslationFlags flags) override;
			
		private:
			bool optimise(TranslationContext& ctx);
			Translation *compile(ir::Function& block_fn);
		};
	}
}
