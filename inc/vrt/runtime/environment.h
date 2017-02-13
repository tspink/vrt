#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace dbt
	{
		class DBT;
	}
	
	namespace runtime
	{
		class Environment
		{
		public:
			Environment(dbt::DBT& dbt) : _dbt(dbt) { }
			
			virtual bool init() = 0;
			virtual bool run() = 0;
			
		protected:
			dbt::DBT& dbt() const { return _dbt; }
			
		private:
			dbt::DBT& _dbt;
		};
	}
}