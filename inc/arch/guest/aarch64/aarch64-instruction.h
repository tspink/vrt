#pragma once

#include <arch/guest/guest-instruction.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64Instruction : public GuestInstruction
				{
				public:
					AArch64Instruction(uint64_t opcode) : GuestInstruction(opcode) { }
				};
			}
		}
	}
}