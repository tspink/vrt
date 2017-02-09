#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		namespace host
		{
			class HostArchitecture
			{
			public:
				__noreturn virtual void abort() = 0;
				virtual void debug_write(const char *message) = 0;
			};
			
			extern HostArchitecture *host_arch;
		}
	}
}