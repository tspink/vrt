#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class BasicBlock;
			class Operand;
			
			namespace StatementType
			{
				enum StatementType
				{
					ADD,
					SUB,
					MUL,
					DIV,
					MOD
				};
			}
			
			class Statement
			{
				friend class BasicBlock;
				
			public:
				Statement(StatementType::StatementType type);
				virtual ~Statement();
				
				void add_operand(Operand& op);
				
				BasicBlock *owner() const { return _owner; }
				Statement *next() const { return _next; }
				Statement *prev() const { return _prev; }
				
				void dump() const;
								
			private:
				StatementType::StatementType _type;
				BasicBlock *_owner;
				Statement *_next, *_prev;
				Operand *_operands[8];
				unsigned int _nr_operands;
			};
		}
	}
}
