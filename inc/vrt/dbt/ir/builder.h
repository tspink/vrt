#pragma once

#include <vrt/dbt/ir/statement.h>
#include <vrt/dbt/ir/basic-block.h>
#include <vrt/dbt/ir/operand.h>

namespace vrt
{
	namespace dbt
	{
		namespace ir
		{
			class Builder
			{
			public:
				Builder(BasicBlock& block) : _block(&block) { }
				
				BasicBlock& block() const { return *_block; }
				Function& function() const { return _block->owner(); }
				
				void set_block(BasicBlock& block) { _block = &block; }

				// Arithmetic
				inline Statement& add(Operand LHS, Operand RHS)
				{
					return append(new Statement(StatementType::ADD), LHS, RHS);
				}

				inline Statement& sub(Operand LHS, Operand RHS)
				{
					return append(new Statement(StatementType::SUB), LHS, RHS);
				}

				inline Statement& adc(Operand LHS, Operand RHS, Operand carry)
				{
					return append(new Statement(StatementType::ADC), LHS, RHS, carry);
				}
				
				inline Statement& sbc(Operand LHS, Operand RHS, Operand carry)
				{
					return append(new Statement(StatementType::SBC), LHS, RHS, carry);
				}
				
				inline Statement& adc_with_flags(Operand LHS, Operand RHS, Operand carry)
				{
					return append(new Statement(StatementType::ADC_FLAGS), LHS, RHS, carry);
				}
				
				inline Statement& sbc_with_flags(Operand LHS, Operand RHS, Operand carry)
				{
					return append(new Statement(StatementType::SBC_FLAGS), LHS, RHS, carry);
				}
				
				inline Statement& update_zn(Operand value)
				{
					return append(new Statement(StatementType::UPDATE_ZN), value);
				}
				
				
				// Shifts & Rotates

				inline Statement& shl(Operand value, Operand amount)
				{
					return append(new Statement(StatementType::SHL), value, amount);
				}
				
				inline Statement& shr(Operand value, Operand amount)
				{
					return append(new Statement(StatementType::SHR), value, amount);
				}
				
				inline Statement& sar(Operand value, Operand amount)
				{
					return append(new Statement(StatementType::SAR), value, amount);
				}
				
				inline Statement& ror(Operand value, Operand amount)
				{
					return append(new Statement(StatementType::ROR), value, amount);
				}
				
				inline Statement& rol(Operand value, Operand amount)
				{
					return append(new Statement(StatementType::ROL), value, amount);
				}
				
				// Conversion
				inline Statement& zx(Operand val)
				{
					return append(new Statement(StatementType::ZX), val);
				}
				
				inline Statement& sx(Operand val)
				{
					return append(new Statement(StatementType::SX), val);
				}
				
				inline Statement& trunc(Operand val)
				{
					return append(new Statement(StatementType::TRUNC), val);
				}
				
				// Bitwise
				inline Statement& band(Operand LHS, Operand RHS)
				{
					return append(new Statement(StatementType::BITWISE_AND), LHS, RHS);
				}
				
				inline Statement& bor(Operand LHS, Operand RHS)
				{
					return append(new Statement(StatementType::BITWISE_OR), LHS, RHS);
				}
				
				inline Statement& bxor(Operand LHS, Operand RHS)
				{
					return append(new Statement(StatementType::BITWISE_XOR), LHS, RHS);
				}

				inline Statement& bnot(Operand LHS)
				{
					return append(new Statement(StatementType::COMPLEMENT), LHS);
				}
				
				// Comparison
				inline Statement& cmpeq(Operand LHS, Operand RHS)
				{
					return append(new Statement(StatementType::CMP_EQ), LHS, RHS);
				}
				
				// Register
				inline Statement& ldreg(Operand idx)
				{
					return append(new Statement(StatementType::READ_REGISTER), idx);
				}
				
				inline Statement& streg(Operand idx, Operand val)
				{
					return append(new Statement(StatementType::WRITE_REGISTER), idx, val);
				}
				
				inline Statement& inc_pc(Operand val)
				{
					return append(new Statement(StatementType::INC_PC), val);
				}
				
				// Memory
				inline Statement& ldmem(Operand address)
				{
					return append(new Statement(StatementType::READ_MEMORY), address);
				}

				inline Statement& stmem(Operand address, Operand value)
				{
					return append(new Statement(StatementType::WRITE_MEMORY), address, value);
				}
				
				// Devices
				inline Statement& stdev(Operand dev, Operand reg, Operand val)
				{
					return append(new Statement(StatementType::WRITE_DEVICE), dev, reg, val);
				}
				
				inline Statement& lddev(Operand dev, Operand reg)
				{
					return append(new Statement(StatementType::READ_DEVICE), dev, reg);
				}
				
				// Control Flow
				inline Statement& leave()
				{
					return append(new Statement(StatementType::LEAVE));
				}
				
				inline Statement& jump(Operand target)
				{
					return append(new Statement(StatementType::JUMP), target);
				}
				
				inline Statement& branch(Operand cond, Operand tt, Operand ft)
				{
					return append(new Statement(StatementType::BRANCH), cond, tt, ft);
				}
				
				inline Statement& trap()
				{
					return append(new Statement(StatementType::TRAP));
				}
				
				// Variables
				inline Statement& alloc(Type& vt)
				{
					return append(new Statement(StatementType::ALLOC));
				}
				
				inline Statement& store(Operand var, Operand val)
				{
					return append(new Statement(StatementType::STORE), var, val);
				}

				inline Statement& load(Operand var)
				{
					return append(new Statement(StatementType::LOAD), var);
				}
				
				// Tracing
				inline Statement& trace_reg_read(Operand idx, Operand val)
				{
					return append(new Statement(StatementType::NOP));
				}
				
				inline Statement& trace_reg_write(Operand idx, Operand val)
				{
					return append(new Statement(StatementType::NOP));
				}
				
				inline Statement& trace_mem_read(Operand addr, Operand val)
				{
					return append(new Statement(StatementType::NOP));
				}
				
				inline Statement& trace_mem_write(Operand addr, Operand val)
				{
					return append(new Statement(StatementType::NOP));
				}
				
				inline Statement& trace_dev_read(Operand dev, Operand reg, Operand val)
				{
					return append(new Statement(StatementType::NOP));
				}
				
				inline Statement& trace_dev_write(Operand dev, Operand reg, Operand val)
				{
					return append(new Statement(StatementType::NOP));
				}
				
				inline Statement& trace_not_taken()
				{
					return append(new Statement(StatementType::NOP));
				}
				
				// Specials
				inline Statement& pgt_change()
				{
					return append(new Statement(StatementType::NOP));
				}
				
			private:
				BasicBlock *_block;

				inline Statement& append(Statement *stmt) {
					_block->append_statement(*stmt);
					return *stmt;
				}
				
				inline Statement& append(Statement *stmt, Operand& op) {
					stmt->add_operand(op);
					_block->append_statement(*stmt);
					return *stmt;
				}
				
				inline Statement& append(Statement *stmt, Operand& op0, Operand& op1) {
					stmt->add_operand(op0);
					stmt->add_operand(op1);
					_block->append_statement(*stmt);
					return *stmt;
				}
				
				inline Statement& append(Statement *stmt, Operand& op0, Operand& op1, Operand& op2) {
					stmt->add_operand(op0);
					stmt->add_operand(op1);
					stmt->add_operand(op2);
					_block->append_statement(*stmt);
					return *stmt;
				}
			};
		}
	}
}
