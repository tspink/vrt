#include <vrt/dbt/ir/operand.h>
#include <vrt/dbt/ir/statement.h>
#include <vrt/dbt/ir/basic-block.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt::ir;
using namespace vrt::util;

Operand::Operand(const Type& value_type, uint64_t value) : _owner(nullptr), _type(OperandType::CONSTANT), _value_type(&value_type), _constant_value(value)
{
}

Operand::Operand(const Statement& stmt) : _owner(nullptr), _type(OperandType::STATEMENT), _value_type(&stmt.value_type()), _stmt_value(&stmt)
{
}

Operand::Operand(const BasicBlock& block) : _owner(nullptr), _type(OperandType::BLOCK), _value_type(nullptr), _block_value(&block)
{
}

Operand& Operand::operator=(const Operand& r)
{
	_owner = r._owner;
	_type = r._type;
	_value_type = r._value_type;
	
	switch (_type) {
	case OperandType::INVALID:
		break;
	case OperandType::CONSTANT:
		_constant_value = r._constant_value;
		break;
	case OperandType::GUEST_REGISTER:
		break;
	case OperandType::STATEMENT:
		_stmt_value = r._stmt_value;
		break;
	case OperandType::BLOCK:
		_block_value = r._block_value;
		break;
	}
	
	return *this;
}

String Operand::dump() const
{
	if (_type == OperandType::CONSTANT) {
		return String("#") + ToString(_constant_value);
	} else if (_type == OperandType::GUEST_REGISTER) {
		return String("GR");
	} else if (_type == OperandType::STATEMENT) {
		return String("%") +  ToString((void *)_stmt_value);
	} else if (_type == OperandType::BLOCK) {
		return String("@") +  ToString((void *)_block_value);
	} else if (_type == OperandType::INVALID) {
		return "<invalid>";
	} else {
		return "?";
	}
}
