/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:54:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/12 02:50:10 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>


template<typename T>
class Array {
	private:
		T			*_arr;
		int32_t		_len;

	public:
		Array() : _arr(new T[0]), _len(0) {}

		Array(int32_t n) : _arr(new T[n]), _len(n) {
			for (int32_t i = 0; i < n; i++)
				_arr[i] = 0;
		}
		
		Array(Array const &obj) : _arr(new T[obj._len]), _len(obj._len) {
			for (int32_t i = 0; i < _len; i++)
				_arr[i] = obj._arr[i];
		}
		
		~Array() { delete[] _arr; }

		Array<T>   &operator=(Array<T> const &rhs) {
			if (this != &rhs) {
				delete[] _arr;
				_len = rhs._len;
				_arr = new T[_len];
				
				for (int32_t i = 0; i < _len; i++)
					_arr[i] = rhs._arr[i];
			}
			return (*this);
		}

		T	&operator[](int32_t index) {
			if (index < 0 || index >= _len)
				throw InvalidIndex();
			return (_arr[index]);
		}

		class InvalidIndex : public std::exception {
			const char	*what() const throw() {
				return ("Invalid index");
			}
		};
		
		int32_t	size() { return (_len); }
};
