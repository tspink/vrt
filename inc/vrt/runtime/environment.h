#pragma once

namespace vrt
{
	namespace runtime
	{
		class Environment
		{
		public:
			virtual bool run() = 0;
		};
	}
}