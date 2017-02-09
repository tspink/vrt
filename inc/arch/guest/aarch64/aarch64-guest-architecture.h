#pragma once

#include <arch/guest/guest-architecture.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64GuestArchitecture : public GuestArchitecture
				{
				public:
					runtime::Environment* create_environment() override;
				};
			}
		}
	}
}