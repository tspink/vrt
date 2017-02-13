#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace arch
	{
		namespace host
		{
			namespace HostAddressSpace
			{
				enum HostAddressSpace
				{
					LOW64,
					HIGH64
				};					
			}
			
			class HostArchitecture
			{
			public:
				virtual bool init_platform() = 0;
				
				__noreturn virtual void abort() = 0;
				virtual void debug_write(const char *message) = 0;
				
				virtual void switch_address_space(HostAddressSpace::HostAddressSpace addrspace) = 0;
				
				inline void switch_to_low64() { switch_address_space(HostAddressSpace::LOW64); }
				inline void switch_to_high64() { switch_address_space(HostAddressSpace::HIGH64); }
			};
			
			extern HostArchitecture *host_arch;
		}
	}
}