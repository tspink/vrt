#pragma once

namespace vrt
{
	namespace dbt
	{
		class DBT;
	}
	
	namespace runtime
	{
		class Environment;
	}
	
	namespace arch
	{
		namespace guest
		{
			class GuestInstructionDecoder;
			
			class GuestArchitecture
			{
			public:
				virtual runtime::Environment *create_environment(dbt::DBT& dbt) = 0;
				
				virtual GuestInstructionDecoder& decoder() const = 0;
			};
			
			extern GuestArchitecture *guest_arch;
		}
	}
}
