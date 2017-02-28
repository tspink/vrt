#include <vrt/dbt/ir/statement.h>
#include <vrt/dbt/ir/operand.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::util;

Statement::Statement(StatementType::StatementType type) : _type(type), _owner(nullptr), _next(nullptr), _prev(nullptr), _nr_operands(0)
{

}

Statement::~Statement()
{

}

void Statement::add_operand(Operand& op)
{
	_operands[_nr_operands++] = &op;
	op._owner = this;
}

void Statement::dump() const
{
	dprintf(DebugLevel::DEBUG, "%u", _type);
}
