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
			};
		}
	}
}