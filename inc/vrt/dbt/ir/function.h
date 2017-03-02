#pragma once

#include <vrt/util/string.h>
#include <vrt/util/list.h>

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
				
				util::String dump() const;
				
				TranslationContext& owner() const { return _owner; }
				
				const util::List<BasicBlock *>& blocks() const { return _blocks; }
				
			private:
				TranslationContext& _owner;
				BasicBlock *_entry_block;
				util::List<BasicBlock *> _blocks;
			};
		}
	}
}