#include <vrt/dbt/ir/statement.h>
#include <vrt/dbt/ir/operand.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::util;

Statement::Statement(StatementType::StatementType type) : _type(type), _owner(nullptr), _next(nullptr), _prev(nullptr), _nr_operands(0)
{
	for (unsigned int i = 0; i < ARRAY_SIZE(_operands); i++) {
		_operands[i] = nullptr;
	}
}

Statement::~Statement()
{

}

void Statement::add_operand(Operand& op)
{
	_operands[_nr_operands++] = &op;
	op._owner = this;
}

String Statement::dump() const
{
	String s = String("[") + ToString((void *)this) + "] ";
	
	switch (_type) {
	case StatementType::ADD:
		s += "add";
		break;
	case StatementType::LEAVE:
		s += "leave";
		break;
	default:
		s += "???";
		break;
	}
	
	s += " ";
	for (unsigned int i = 0; i < _nr_operands; i++) {
		assert(_operands[i]);
		
		if (i > 0) s += ", ";
		s += _operands[i]->dump();
	}
	
	return s + "\n";
}
