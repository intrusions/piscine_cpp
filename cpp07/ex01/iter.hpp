/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:12:13 by jucheval          #+#    #+#             */
/*   Updated: 2023/09/15 11:51:32 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

template<typename T>
void	print(T &n) { std::cout << n << " "; }

template<typename T>
void	iter(T *array, uint16_t size, void (*f)(T&)) {
	for (uint16_t i = 0; i < size; i++)
		f(array[i]);
}