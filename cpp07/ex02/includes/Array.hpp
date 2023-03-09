/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <jucheval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:54:52 by jucheval          #+#    #+#             */
/*   Updated: 2023/03/09 12:16:30 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>


template<typename T>
class Array {
	private:
		T			*_arr;
		uint32_t	_len;

	public:
		Array();
		Array(uint32_t n);
		Array(Array const &obj);
		virtual ~Array();

		Array	&operator=(Array const &rhs);

		uint32_t	size();
};
