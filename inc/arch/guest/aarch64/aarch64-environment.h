#pragma once

#include <vrt/runtime/environment.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64Processor;
				
				class AArch64Environment : public runtime::Environment
				{
				public:
					AArch64Environment();
					
					bool run() override;
					
				private:
					AArch64Processor *_bsp;
					
					bool prepare_bootstrap();
					bool setup_platform();
				};
			}
		}
	}
}