#pragma once

#include <vrt/dbt/ir/statement.h>
#include <vrt/dbt/ir/basic-block.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Builder
			{
			public:
				Builder(BasicBlock& block) : _block(block) { }
				
				BasicBlock& block() const { return _block; }
								
				inline Statement& add(Operand& LHS, Operand& RHS)
				{
					auto stmt = new Statement(StatementType::ADD);
					stmt->add_operand(LHS);
					stmt->add_operand(RHS);
					
					return append(stmt);
				}
				
				inline Statement& leave()
				{
					return append(new Statement(StatementType::LEAVE));
				}
				
			private:
				BasicBlock& _block;

				inline Statement& append(Statement *stmt) {
					_block.append_statement(*stmt);
					return *stmt;
				}
			};
		}
	}
}