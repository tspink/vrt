#pragma once

#include <vrt/define.h>
#include <vrt/dbt/ir/operand.h>
#include <vrt/util/string.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class BasicBlock;
			class Operand;
			class Type;
			
			namespace StatementType
			{
				enum StatementType
				{
					ADD,
					SUB,
					MUL,
					DIV,
					MOD,
					
					ADC,
					ADC_FLAGS,
					SBC,
					SBC_FLAGS,
					
					UPDATE_ZN,
					
					SHL,
					SHR,
					SAR,
					ROR,
					ROL,
					
					CMP_EQ,
					
					BITWISE_AND,
					BITWISE_OR,
					BITWISE_XOR,
					COMPLEMENT,
					
					ZX,
					SX,
					TRUNC,
					
					READ_REGISTER,
					WRITE_REGISTER,
					INC_PC,
					
					READ_MEMORY,
					WRITE_MEMORY,
					
					READ_DEVICE,
					WRITE_DEVICE,
					
					ALLOC,
					LOAD,
					STORE,
					
					JUMP,
					BRANCH,
					LEAVE,
					TRAP,
					
					NOP
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
				
				const Type& value_type() const { return *_value_type; }
				
				util::String dump() const;
								
			private:
				StatementType::StatementType _type;
				BasicBlock *_owner;
				Statement *_next, *_prev;
				Operand _operands[8];
				Type *_value_type;
				unsigned int _nr_operands;
			};
		}
	}
}
