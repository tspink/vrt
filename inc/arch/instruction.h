#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		class Instruction
		{
		public:
			Instruction(uint64_t opcode) : _opcode(opcode) { }
			
			uint64_t opcode() const { return _opcode; }
			
			virtual const char *disassemble() const = 0;
			virtual bool translate() const = 0;
			
		private:
			uint64_t _opcode;
		};
	}
}