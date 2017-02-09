#pragma once

#include <arch/host/host-architecture.h>

namespace vrt
{
	namespace arch
	{
		namespace host
		{
			namespace x86
			{
				class X86HostArchitecture : public HostArchitecture
				{
				public:
					__noreturn void abort() override;
					void debug_write(const char* message) override;
				};
			}
		}
	}
}
