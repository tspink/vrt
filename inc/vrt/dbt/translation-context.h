#pragma once

#include <vrt/define.h>
#include <vrt/util/list.h>
#include <vrt/util/string.h>

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
			
			util::String dump() const;
			
		private:
			util::List<ir::Function *> _functions;
		};
	}
}
