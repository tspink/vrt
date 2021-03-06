#pragma once

#include <arch/host/host-architecture.h>
#include <arch/host/x86/dt.h>

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
					
					bool init_platform() override;
					
					__noreturn void abort() override;
					void debug_write(const char* message) override;
					
					void switch_address_space(HostAddressSpace::HostAddressSpace addrspace) override;

					void set_address_spaces(hpa_t low64, hpa_t high64)
					{
						_pml4_low64 = low64;
						_pml4_high64 = high64;
					}
					
				private:
					hpa_t _pml4_low64, _pml4_high64;
					
					__aligned(16) GDT gdt;
					__aligned(16) IDT idt;
					__aligned(16) TSS tss;
					
					static inline void write_cr3(hpa_t pml4)
					{
						asm volatile("mov %0, %%cr3" :: "r"(pml4) : "memory");
					}
				};
				
				extern X86HostArchitecture x86_host_arch;
			}
		}
	}
}
