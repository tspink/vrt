#include <arch/guest/aarch64/aarch64-processor.h>

using namespace vrt::arch::guest::aarch64;

AArch64Processor::AArch64Processor(runtime::Environment& env, runtime::MMU& mmu) : runtime::Processor(env, mmu)
{
	allocate_register_file(4096);
}
