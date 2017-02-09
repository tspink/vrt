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
				class AArch64Environment : public runtime::Environment
				{
				public:
					bool run() override;
				};
			}
		}
	}
}