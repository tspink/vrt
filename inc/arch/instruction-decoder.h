#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		class Instruction;
		
		class InstructionDecoder
		{
		public:
			virtual Instruction *decode(hva_t va) = 0;
		};
	}
}
