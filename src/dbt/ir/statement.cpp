#include <vrt/dbt/ir/statement.h>
#include <vrt/dbt/ir/operand.h>
#include <vrt/util/debug.h>

using namespace vrt::dbt;
using namespace vrt::dbt::ir;
using namespace vrt::util;

Statement::Statement(StatementType::StatementType type) : _type(type), _owner(nullptr), _next(nullptr), _prev(nullptr), _nr_operands(0)
{
	/*for (unsigned int i = 0; i < ARRAY_SIZE(_operands); i++) {
		_operands[i] = nullptr;
	}*/
}

Statement::~Statement()
{

}

void Statement::add_operand(Operand& op)
{
	_operands[_nr_operands++] = op;
	op._owner = this;
}

String Statement::dump() const
{
	String s = String("[") + ToString((void *)this) + "] ";
	
	switch (_type) {
	case StatementType::ADD: s += "add"; break;
	case StatementType::SUB: s += "sub"; break;
	case StatementType::MUL: s += "mul"; break;
	case StatementType::DIV: s += "div"; break;
	case StatementType::MOD: s += "mod"; break;
	case StatementType::ADC: s += "adc"; break;
	case StatementType::ADC_FLAGS: s += "adc-flags"; break;
	case StatementType::SBC: s += "sbc"; break;
	case StatementType::SBC_FLAGS: s += "sbc-flags"; break;
	case StatementType::UPDATE_ZN: s += "update-zn"; break;
	
	case StatementType::SHL: s += "shl"; break;
	case StatementType::SHR: s += "shr"; break;
	case StatementType::SAR: s += "sar"; break;
	case StatementType::ROL: s += "rol"; break;
	case StatementType::ROR: s += "ror"; break;
	
	case StatementType::CMP_EQ: s += "cmp-eq"; break;
	
	case StatementType::BITWISE_AND: s += "bitwise-and"; break;
	case StatementType::BITWISE_OR: s += "bitwise-or"; break;
	case StatementType::BITWISE_XOR: s += "bitwise-xor"; break;
	case StatementType::COMPLEMENT: s += "not"; break;
	
	case StatementType::ZX: s += "zx"; break;
	case StatementType::SX: s += "sx"; break;
	case StatementType::TRUNC: s += "trunc"; break;
	
	case StatementType::READ_REGISTER: s += "ldreg"; break;
	case StatementType::WRITE_REGISTER: s += "streg"; break;
	case StatementType::INC_PC: s += "inc-pc"; break;
	
	case StatementType::ALLOC: s += "alloc"; break;
	case StatementType::LOAD: s += "ld"; break;
	case StatementType::STORE: s += "st"; break;
	
	case StatementType::BRANCH: s += "branch"; break;
	case StatementType::JUMP: s += "jump"; break;
	case StatementType::LEAVE: s += "leave"; break;
	case StatementType::TRAP: s += "trap"; break;
	
	case StatementType::NOP: s += "nop"; break;
	default: s += "???"; break;
	}
	
	s += " ";
	for (unsigned int i = 0; i < _nr_operands; i++) {
		if (i > 0) s += ", ";
		s += _operands[i].dump();
	}
	
	dprintf(DebugLevel::DEBUG, "%s", s.c_str());
	
	return "";
}
