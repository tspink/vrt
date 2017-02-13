#pragma once

#include <arch/guest/guest-architecture.h>
#include <arch/guest/aarch64/aarch64-instruction-decoder.h>

namespace vrt
{
	namespace arch
	{
		namespace guest
		{
			namespace aarch64
			{
				class AArch64InstructionDecoder;
				
				class AArch64GuestArchitecture : public GuestArchitecture
				{
				public:
					AArch64GuestArchitecture(AArch64InstructionDecoder& decoder) : _decoder(decoder) { }
					
					runtime::Environment* create_environment(dbt::DBT& dbt) override;
					
					GuestInstructionDecoder& decoder() const override { return _decoder; }
					
				private:
					AArch64InstructionDecoder& _decoder;
				};
			}
		}
	}
}