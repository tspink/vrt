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
				
				BasicBlock *create_block();
			};
		}
	}
}