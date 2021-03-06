#pragma once

namespace ursine
{
	template<typename T>
	Array<T>::Array(){}

	template<typename T>
	Array<T>::Array(const std::vector<T> &rhs)
		:std::vector<T>(rhs){}

	template<typename T>
	Array<T>::Array(const std::vector<T> &&rhs)
		:std::vector<T>(std::move(rhs)){}

	template<typename T>
	Array<T>::Array(const std::initializer_list<T> &rhs)
		:std::vector<T>(rhs){}

	template<typename T>
	Array<T>::Array(const std::initializer_list<T> &&rhs)
		:std::vector<T>(std::move(rhs)){}
}
