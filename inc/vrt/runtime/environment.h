#pragma once

#include <vrt/define.h>
#include <vrt/dbt/translation-cache.h>

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
			
			dbt::DBT& dbt() const { return _dbt; }
			dbt::TranslationCache<>& translation_cache() { return _tcache; }
			
		private:
			dbt::DBT& _dbt;
			dbt::TranslationCache<> _tcache;
		};
	}
}