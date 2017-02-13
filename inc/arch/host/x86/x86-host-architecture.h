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
					X86HostArchitecture();
					
					__noreturn void abort() override;
					void debug_write(const char* message) override;
					
					void switch_address_space(HostAddressSpace::HostAddressSpace addrspace) override;

					void set_address_spaces(phys_addr_t low64, phys_addr_t high64)
					{
						_pml4_low64 = low64;
						_pml4_high64 = high64;
					}
					
				private:
					phys_addr_t _pml4_low64, _pml4_high64;
					
					static inline void write_cr3(phys_addr_t pml4)
					{
						asm volatile("mov %0, %%cr3" :: "r"(pml4) : "memory");
					}
				};
				
				extern X86HostArchitecture x86_host_arch;
			}
		}
	}
}
