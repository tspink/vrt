#pragma once

#include <vrt/define.h>
#include <vrt/dbt/ir/statement.h>

namespace vrt {
	namespace dbt {
		namespace ir {
			class Statement;
			class Type;
			
			namespace OperandType
			{
				enum OperandType
				{
					CONSTANT,
					GUEST_REGISTER,
					STATEMENT,
					BLOCK
				};
			}
			
			class Operand {
				friend class Statement;
				
			public:
				Operand(const Type& value_type, uint64_t value) : _owner(nullptr), _type(OperandType::CONSTANT), _value_type(value_type), _constant_value(value)
				{
				}
				
				Operand(const Statement& stmt) : _owner(nullptr), _type(OperandType::STATEMENT), _value_type(stmt.value_type()), _stmt_value(&stmt)
				{
				}
				
				void dump();

			private:
				Statement *_owner;
				OperandType::OperandType _type;
				const Type& _value_type;
				
				union {
					uint64_t _constant_value;
					const Statement *_stmt_value;
				};				
			};
		}
	}
}
