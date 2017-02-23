#pragma once

#include <arch/instruction.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			class GuestInstruction : public Instruction
			{
			public:
				GuestInstruction(uint64_t opcode) : Instruction(opcode) { }
				virtual ~GuestInstruction() { }
				
			protected:
				void append_str(char *buffer, const char *str) const;
				void append_hex(char *buffer, uint64_t val) const;
				void append_dec(char *buffer, uint64_t val) const;
				void append_num(char *buffer, uint64_t val, uint8_t base) const;
			};
		}
	}
}