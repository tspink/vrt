#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace dbt
	{
		class TranslationContext;
	}
	
	namespace arch
	{
		struct ControlFlowInfo
		{
			bool IsControlFlow;
		};
		
		class Instruction
		{
		public:
			Instruction(uint64_t opcode) : _opcode(opcode) { }
			
			uint64_t opcode() const { return _opcode; }
			
			virtual const char *disassemble() const = 0;
			virtual bool translate(dbt::TranslationContext& ctx) const = 0;
			virtual uint8_t length() const = 0;
			virtual const ControlFlowInfo control_flow_info() const = 0; 
			
		private:
			uint64_t _opcode;
		};
	}
}