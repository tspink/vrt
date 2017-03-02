#pragma once

#include <vrt/define.h>
#include <vrt/dbt/ir/type.h>
#include <vrt/util/string.h>

namespace vrt {
	namespace dbt {
		namespace ir {
			class Statement;
			class BasicBlock;
			class Type;
			
			namespace OperandType
			{
				enum OperandType
				{
					INVALID,
					CONSTANT,
					GUEST_REGISTER,
					STATEMENT,
					BLOCK
				};
			}
			
			class Operand {
				friend class Statement;
				
			public:
				Operand() : _owner(nullptr), _type(OperandType::INVALID), _value_type(nullptr)  { }
				
				Operand(const Type& value_type, uint64_t value);
				Operand(const Statement& stmt);
				Operand(const BasicBlock& stmt);
				
				util::String dump() const;
				
				Operand& operator=(const Operand& r);

			private:
				Statement *_owner;
				OperandType::OperandType _type;
				const Type *_value_type;
				
				union {
					uint64_t _constant_value;
					const Statement *_stmt_value;
					const BasicBlock *_block_value;
				};				
			};
		}
	}
}
