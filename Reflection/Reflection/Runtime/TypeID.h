#pragma once

namespace ursine
{
	namespace meta
	{
		typedef unsigned TypeID;

		const TypeID InvalidTypeID = 0;

		template<typename T>
		struct TypeIDs
		{
			static TypeID ID;
		};

		template<typename T>
		TypeID TypeIDs<T>::ID = InvalidTypeID;
	}
}
