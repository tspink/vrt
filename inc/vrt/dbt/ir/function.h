#pragma once

namespace vrt
{
	namespace dbt
	{
		class TranslationContext;
		namespace ir
		{
			class BasicBlock;
			class Function
			{
			public:
				Function(TranslationContext& owner);
				~Function();
				
				BasicBlock& entry_block() const { return *_entry_block; }
				BasicBlock& create_block();
				
				void dump();
				
			private:
				TranslationContext& _owner;
				BasicBlock *_entry_block;
			};
		}
	}
}