#pragma once

#include "TypeConfig.h"

#include <vector>

namespace ursine
{
	namespace meta
	{
		class Type;
		class Variant;

		class Argument
		{
		public:
			Argument();
			Argument(const Argument &rhs);
			Argument(Variant &obj);
			Argument(const Variant &obj);

			template<typename T>
			Argument(const T &data);

			template<typename T>
			Argument(T &data);

			Argument &operator=(const Argument &rhs);

			Type GetType() const;

			void *GetPtr() const;

			template<typename T>
			T &GetValue() const;

		private:
			const TypeID m_typeID;
			const bool m_isArray;

			const void *m_data;
		};
	}
}

#include "Impl/Argument.hpp"