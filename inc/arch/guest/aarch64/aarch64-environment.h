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
				class aarch64_processor;
				
				class AArch64Environment : public runtime::Environment
				{
				public:
					AArch64Environment(dbt::DBT& dbt);
					
					bool init() override;
					bool run() override;
					
				private:
					aarch64_processor *_bsp;
					
					bool prepare_bootstrap();
					bool load_kernel();
					bool setup_platform();
				};
			}
		}
	}
}