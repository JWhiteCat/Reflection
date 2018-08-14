#pragma once

#include <vector>

namespace ursine
{
	template<typename T>
	class Array :public std::vector<T>
	{
	public:
		Array();
		Array(const std::vector<T> &rhs);
		Array(const std::vector<T> &&rhs);
		Array(const std::initializer_list<T> &rhs);
		Array(const std::initializer_list<T> &&rhs);
	};
}

#include "Impl/Array.hpp"
