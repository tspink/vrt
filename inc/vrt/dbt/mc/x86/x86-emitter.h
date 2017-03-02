#pragma once

#include <vrt/dbt/mc/emitter.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Function;
			class BasicBlock;
			class Statement;
		}
		
		namespace mc
		{
			namespace x86
			{
				class X86Emitter : public Emitter
				{
				public:
					X86Emitter(TranslationBuffer& buffer);
					
					bool emit_function(const ir::Function& fn) override;
					
				private:
					bool emit_block(const ir::BasicBlock& block);
					bool emit_statement(const ir::Statement& stmt);
				};
			}
		}
	}
}
