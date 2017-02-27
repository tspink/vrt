#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Function;
		}
		
		class TranslationContext
		{
		public:
			TranslationContext();
			
			ir::Function *create_function();
		};
	}
}
