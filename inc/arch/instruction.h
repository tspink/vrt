#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace dbt
	{
		class TranslationContext;
		
		namespace ir
		{
			class Builder;
		}
	}
	
	namespace arch
	{
		struct ControlFlowInfo
		{
			bool IsControlFlow;
			
			bool is_control_flow() const { return IsControlFlow; }
		};
		
		class Instruction
		{
		public:
			Instruction(uint64_t opcode) : _opcode(opcode) { }
			
			uint64_t internal_opcode() const { return _opcode; }
			
			virtual const char *disassemble(gpa_t pc) const = 0;
			virtual bool translate(dbt::ir::Builder& builder) const = 0;
			virtual uint8_t length() const = 0;
			virtual const ControlFlowInfo control_flow_info() const = 0; 

			bool is_end_of_block() const { return control_flow_info().is_control_flow(); }			
			
		private:
			uint64_t _opcode;
		};
	}
}