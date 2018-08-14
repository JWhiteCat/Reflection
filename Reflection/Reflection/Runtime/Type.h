#pragma once

#include "Macros.h"

#include "TypeID.h"
#include "TypeConfig.h"
#include "InvokableConfig.h"
#include "ArgumentConfig.h"
#include "JsonConfig.h"

#include <string>
#include <vector>
#include <set>
#include <functional>

namespace ursine
{
	namespace meta
	{
		class Variant;
		class Enum;
		class Constructor;
		class Destructor;
		class Field;
		class Global;
		class Method;
		class Function;
		class Argument;

		class MetaManager;

		class Type
		{
		public:
			typedef std::vector<Type> List;
			typedef std::set<Type> Set;
			typedef std::function<Variant(const Variant &, const Field &)> SerializationGetterOverride;

			Type();
			Type(const Type &rhs);
			Type(TypeID id, bool IsArray = false);

			operator bool() const;

			Type &operator=(const Type &rhs);

			bool operator<(const Type &rhs) const;
			bool operator>(const Type &rhs) const;
			bool operator<=(const Type &rhs) const;
			bool operator>=(const Type &rhs) const;
			bool operator==(const Type &rhs) const;
			bool operator!=(const Type &rhs) const;


			static const Type &Invaild()

			//
			TypeID GetID() const;

			//
			static List GetTypes();
		};
	}
}