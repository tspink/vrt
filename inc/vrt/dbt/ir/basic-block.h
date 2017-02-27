#pragma once

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Function;
			class Statement;
			
			class BasicBlock
			{
			public:
				BasicBlock(Function& owner);
				
				void append_statement(Statement& stmt);
				void insert_statement(Statement& stmt, Statement& after);
			};
		}
	}
}