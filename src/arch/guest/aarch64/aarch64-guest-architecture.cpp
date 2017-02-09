#include <arch/guest/aarch64/aarch64-guest-architecture.h>
#include <arch/guest/aarch64/aarch64-environment.h>

using namespace vrt::arch::guest;
using namespace vrt::arch::guest::aarch64;

AArch64GuestArchitecture aarch64_guest_arch;
GuestArchitecture *vrt::arch::guest::guest_arch = &aarch64_guest_arch;

vrt::runtime::Environment* AArch64GuestArchitecture::create_environment()
{
	return new AArch64Environment();
}
