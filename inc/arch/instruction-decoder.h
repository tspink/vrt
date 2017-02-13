#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		class Instruction;
		
		class InstructionDecoder
		{
			virtual Instruction *decode(virt_addr_t va);
		};
	}
}
