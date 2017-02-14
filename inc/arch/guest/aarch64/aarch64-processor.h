#pragma once

#include <vrt/runtime/processor.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64Processor : public runtime::Processor
				{
				public:
					AArch64Processor(runtime::Environment& env, runtime::MMU& mmu);
				};
			}
		}
	}
}
