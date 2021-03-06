#pragma once

#include <arch/guest/guest-instruction-decoder.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64InstructionDecoder : public GuestInstructionDecoder
				{
				public:
					Instruction* decode(hva_t va) override;
				};
			}
		}
	}
}
