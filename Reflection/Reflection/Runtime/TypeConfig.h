#pragma once

#include "TypeID.h"
#include "MetaTraits.h"

#include <type_traits>







//
#define typeidof(expr)
	ursine::meta::TypeIDs<
		ursine::meta::CleanedType<
			typename ursine::meta_traits::RemoveArray<expr>::type
		>
	>::ID

//
#define  typeof(expr)
	ursine::meta::Type(
		typeidof(expr),
		ursine::meta_traits::IsArray<expr>::value
	)

//
#define decltypeof(expr) typeof(decltype(expr))

namespace ursine
{
	namespace meta
	{
		template<typename T>
		using CleanedType =
			typename std::remove_cv<
			typename std::remove_reference<T>::type
			>::type;
	}
}



