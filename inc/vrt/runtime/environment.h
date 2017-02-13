#pragma once

#include <vrt/define.h>

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