#pragma once

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Function;
		}
		
		namespace mc
		{
			class Emitter
			{
			public:
				virtual bool emit_function(ir::Function& fn) = 0;
			};
		}
	}
}
