/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:59:05 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 12:23:50 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _arr(new T[0]), _len(0) {}

template<typename T>
Array<T>::Array(uint32_t n) : _arr(new T[n]), _len(n - 1) {
	for (uint32_t i = 0; i < n; i++)
		_arr[i] = 0;
}

template<typename T>
Array<T>::Array(Array const &obj) : _len(obj._len), _arr(new T[_len]) {
	for (uint32_t i = 0; i < _len; i++)
		_arr[i] = obj._arr[i];
}

template<typename T>
Array<T>::~Array() { delete[] _array; }

template<typename T>
Array<T>   &Array<T>::operator=(Array<T> const &rhs) {
	if (this != &rhs) {
		delete[] _arr;
		_len = rhs._len;
		_arr = rhs._arr;
		
		for (uint32_t i = 0; i < _len; i++)
			_arr[i] = obj._arr[i];
	}
	return (*this);
}

template<typename T>
uint32_t	&Array<T>::size() {
	uint32_t r = 0;
	
	for (uint32_t i = 0; i < _len; i++) {
		if (_arr[i])
			r++;				
	}
	return (r);
}