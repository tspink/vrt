#pragma once

#include <vrt/util/string.h>

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
				void insert_statement_before(Statement& stmt, Statement& before);
				
				util::String dump() const;
				
				Function& owner() const { return _owner; }
				
				const Statement& first() { return *_statement_list; }
				
			private:
				Function& _owner;
				Statement *_statement_list;
			};
		}
	}
}