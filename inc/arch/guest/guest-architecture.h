#pragma once

namespace vrt
{
	namespace runtime
	{
		class Environment;
	}
	
	namespace arch
	{
		namespace guest
		{
			class GuestArchitecture
			{
			public:
				virtual runtime::Environment *create_environment() = 0;
			};
			
			extern GuestArchitecture *guest_arch;
		}
	}
}
