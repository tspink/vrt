#pragma once

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class BasicBlock;
			
			class Statement
			{
			public:
				Statement(BasicBlock& owner);
			};
		}
	}
}
