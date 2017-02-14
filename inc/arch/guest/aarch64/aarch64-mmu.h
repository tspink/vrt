#pragma once

#include <vrt/runtime/mmu.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64MMU : public runtime::MMU
				{
				public:
					runtime::MMUTranslationResponse translate_raw(const runtime::MMUTranslationRequest& tr) override;
				};
			}
		}
	}
}